
#include <iostream>
#include <vector>
#include<typeinfo>
#include<string>
#include <cctype>
#include<map>

using std::string;
using namespace std;



void vectorshower(std::vector<string> vc) //이거는 안 넘어가도 됨
{
  for(int i = 0; i < vc.size(); i++)
  {
    if(vc.at(i) != "(" || vc.at(i) != ")")
      std::cout << vc.at(i) << " ";
  }
  std::cout << "\n";
}



//  ------------여기부터 ---------------

map <string,double> var; // 전역으로 선언하기

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
		//숫자일때
		if(!(isalpha(foo.back().back())) && (foo.back()!="="))
		{
			b=stod(foo.back());
		}

		// =일때
		else if(foo.back()=="=")
		{	

		}

		//문자일때
		else if(isalpha(foo.back().back()))
		{
			a=foo.back();
		}

		
	}

	var.insert(pair<string,double>(a,b));
}

//  ------------여기까지 ---------------

std::vector<string> tokenizer(string str) // 여기는 안봐도 됨. 앤틀러가 다 해줌
{
  string tempstr="";
  std::vector<string> vc;
  for(int i = 0; i < str.length(); i++)
  {

    //ws 삭제
    if(str[i]==' ')
      continue;

    //괄호 처리. 괄호가 나오면 더 입력 안받고 바로 토큰으로 넘긴다
    if(str[i]=='('||str[i]==')')
    {
      tempstr = str[i];
      vc.push_back(tempstr);
      tempstr = "";
      continue;
    }

    //
    if(isOperator(str[i]))
    {
      tempstr = "";
      tempstr += str[i];
      vc.push_back(tempstr);
      tempstr = "";
    }
    else
    {
      while(i < str.length())
      {
        tempstr += str[i];
        i++;
        if(isOperator(str[i])||str[i]=='('||str[i]==')')
        {
          i--;
          break;
        }
      }
      vc.push_back(tempstr);
      tempstr = "";
    }
  }
  return vc;
}

int main(void)
{
    var. insert(pair<string,double>("a",100));
  string s = "7+(9*6-4/2)";
  vector<string> testtest = {"-2","*","a"};
//   vectorshower(tokenizer(s)); // 토크나이저는 파서가 해주고있어서 사실 필요는 없음
// vectorshower(convertToPostfix(tokenizer(s)));
  vectorshower(convertToPostfix(testtest));
//   std::vector<string> inf;
std::cout <<"ans:"<< postfixCalculator(convertToPostfix(testtest)) << std::endl ;
//   std::cout << postfixCalculator(convertToPostfix(tokenizer(s))) << std::endl ;

// string test = "-2.56";
// double k = stod(test);
// cout<<k<<endl;

// string test = "a";
// cout << "is alpha:" << isalpha(test[0]) <<endl;

//assn 잘 되나 테스트 해보기
cout<<"--test--"<<endl;

map <string,double> testMap;
string a="a";
testMap.insert(pair<string,double>(a,100));
cout<<testMap[a]<<endl;
  return 0;
}