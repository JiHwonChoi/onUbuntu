#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
#include <cctype>
#include<map>

#include "antlr4-cpp/ExprBaseListener.h"
#include "antlr4-cpp/ExprLexer.h"
#include "antlr4-cpp/ExprParser.h"

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

vector<string> foo;

map <string,double> var; // 전역으로 선언하기
int assnFlag=0;

int getPrior(char c)
{
  if(c == '*' || c == '/')
    return 2;
  if(c == '+' || c == '-')
    return 1;
}

bool isOperator(string c)
{
  return c == "+" || c == "-" || c == "*" || c == "/";
}

bool isOperator(char c)
{
  return c == '+' || c == '-' || c == '*' || c == '/';
}

//괄호도 아니고, 계산 부호도 아닐때
bool isOperand(string c)
{
  if(!(isOperator(c)))
    return (c != ")") && (c != "(");
  return false;
}

double calculateWithSign(char c, double a, double b) // 더블이 들어오니까
{
  switch(c)
  {
    case '+':
      return (a + b);
    case '-':
      return (a - b);
    case '*':
      return (a * b);
    case '/':
      return (a / b);
  }
}

double postfixCalculator(std::vector<string> postfixes)//츨력 더블로
{
  std::vector<double> operands;//double 로 바꿔야함
  double a = 0, b = 0, c = 0;
  for(int i = 0; i < postfixes.size(); i++)
  {
    if(isOperand(postfixes[i]))
    {

        //문자일때 map에서 읽어오기
        if(isalpha(postfixes[i][0])) // is 문자 함수?
        {
            operands.push_back(var[postfixes[i]]);//map에서 맞는거 찾아오기
        }
        
        else
        operands.push_back(std::stod(postfixes[i]));//오퍼랜드에 집어넣기
    }

    else
    if(operands.size()>1)
    {
      b = operands.back();
      operands.pop_back();
      a = operands.back();
      operands.pop_back();
      c = calculateWithSign(postfixes[i][0], a, b);
      operands.push_back(c);
    }
  }
  return operands[0];
}


//부호 구분 추가하기
std::vector<string> convertToPostfix(std::vector<string> infix)
{
  std::vector<string> operators;
  std::vector<string> postfixes;

  for(int i = 0; i < infix.size(); i++)
  {
    //여기서는 숫자처리안함 아직 string 집어넣음
    if(isOperand(infix[i]))
      { //+ 부호 의미없이 붙어있을때 떼어주기
        // "" 는 스트링 / '' 는 캐릭터
        if(infix[i][0]=='+'){
            infix[i]=infix[i].substr(1,infix[i].size()-1);
        }
        postfixes.push_back(infix[i]);
    //   cout<<"operand: "<<infix[i]<<endl;
      
      
      }
    else if(infix[i] == "(")
    {
      operators.push_back(infix[i]);
    }

    else if(infix[i] == ")")
    {
      while(!operators.empty() && operators.back()[0] !=  '(')
      {
        postfixes.push_back(string(1, operators.back()[0]));
        operators.pop_back();
      }
      operators.pop_back();
    }

    else if(isOperator(infix[i]))
    {
      while (!operators.empty() && operators.back()[0] != '(' && getPrior(operators.back()[0]) >= getPrior(infix[i][0]))
      {
        postfixes.push_back(string(1, operators.back()[0]));

        operators.pop_back();
      }
      operators.push_back(infix[i]);
    }
  }

  while (operators.size()!=0)
  {
    postfixes.push_back(string(1, operators.back()[0]));
    // cout<<"operators.back()[0]: "<< operators.back()[0] << endl;
    //  cout<<"This is it "<< string(1, operators.back()[0])<<endl;
    operators.pop_back();
  }
  return postfixes;
}

void assignNumber(vector<string> foo)
{
	double b =0;
	string a;
	for(int i=0; i< foo.size();i++)
	{
		// cout<<"here: "<<foo[i]<<endl;
		//숫자일때
		//back 할껀지 i 쓸건지 확실하게
		if(!(isalpha(foo[i][0])) && (foo[i]!="="))
		{
			// cout<<"b :"<<foo[i];
			b=stod(foo.back());
			
		}

		// =일때
		else if(foo[i]=="=")
		{	
			
		}

		//문자일때
		//여기가 안되고 있음 if 조건 삭제
		else
		{
			// cout<<"a: "<<foo[i]<<endl;
			a=foo[i];
			
		}

		
	}
	// cout<<"insert: a:"<<a<<"\ninsert b: "<<b<<endl;
	var.insert(pair<string,double>(a,b));
}

//  ------------여기까지 ---------------

//---------------------------------EDIT END ----------------------------------


class EvalListener : public ExprBaseListener {
public:
	virtual void enterProg(ExprParser::ProgContext *ctx) {
		// cout << "enterProg: \n";
	}
	virtual void exitProg(ExprParser::ProgContext *ctx) {
		// cout << "exitProg: \n";
	}
	virtual void enterExpr(ExprParser::ExprContext *ctx) {
		// cout << "\tenterExpr: \n";
	}
	virtual void exitExpr(ExprParser::ExprContext *ctx) {
		// cout << "\texitExpr: \n";
	}
	virtual void visitTerminal(tree::TerminalNode *node) {
		string str = node->getText();
		foo.push_back(str);
		// cout << "\t\tTerminal: " << str << "\n";
		if(str =="\n")
		{
			foo.pop_back();
		}
		if(str ==";")//; 이고 foo 길이가 0 아닐때
		{
			
			foo.pop_back();
			
			if(foo.size())
			std::cout << postfixCalculator(convertToPostfix(foo)) << std::endl ;

			// 벡터 출력하기
			// for(int i=0; i<foo.size(); i++)
			// {
			// 	cout<<foo[i]<<" ";
			// }
			// cout << endl;
			
			foo.clear();
			//벡터 초기화
		}

	}
	virtual void enterAssn(ExprParser::AssnContext *ctx) { 
		// cout << "\tentrAssn: \n";
		assnFlag=1;

}
  	virtual void exitAssn(ExprParser::AssnContext *ctx) {
		// cout << "\texitAssn: \n";
		// for( int i=0; i< foo.size();i++)
		// cout<<foo[i]<<endl;
		assignNumber(foo);
		foo.clear();
		assnFlag=0;

		//var 출력확인
		// cout<<"var[a]: "<<var["a"]<<endl;
}

	virtual void enterNum(ExprParser::NumContext *ctx) {
		// cout << "\tenterNum:  --Num-- \n";
 }
  	virtual void exitNum(ExprParser::NumContext *ctx) {
		// cout << "\texitNum: --Num END-- \n";
 }
};

int main(int argc, const char* argv[]) {
	if (argc < 2) {
		cerr << "[Usage] " << argv[0] << "  <input-file>\n";
		exit(0);
	}
	std::ifstream stream;
	stream.open(argv[1]);
	if (stream.fail()) {
		cerr << argv[1] << " : file open fail\n";
		exit(0);
	}

	// cout << "---Expression Evaluation with ANTLR listener---\n";
	ANTLRInputStream input(stream);
	ExprLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	ExprParser parser(&tokens);	

	ParseTreeWalker walker;
	EvalListener listener;	

	walker.walk(&listener, parser.prog());
}
