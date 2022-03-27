#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#define INT_MAX 256

int main(int argc, char *argv[]) {
	FILE *Inputfile;
	int ch;
	int counter = 0;
	int count = 0;
	unsigned int bigendian=0;

	if ((Inputfile = fopen(argv[1], "rb")) == NULL) {
		fputs("file error", stderr);
		return 1;
	}

	while ((ch = fgetc(Inputfile)) != EOF) {
		counter++;
		if (counter % 4 == 1) {
			bigendian = bigendian + (ch << 24);
		}
		else if (counter % 4 == 2) {
			bigendian = bigendian + (ch << 16);
		}
		else if (counter % 4 == 3) {
			bigendian = bigendian + (ch << 8);
		}
		else {
			bigendian = bigendian + ch;
			printf("inst %d: %08x ", count, bigendian);
			unsigned int opcode = (bigendian >> 26);
			unsigned int rs = ((bigendian << 6) >> 27);
			unsigned int rt = ((bigendian << 11) >> 27);
			unsigned int rd = ((bigendian << 16) >> 27);
			unsigned int sa = ((bigendian << 21) >> 27);
			unsigned int function = (bigendian << 26) >> 26;
			unsigned int a = (bigendian << 16) >> 16;
			int immediate;
			if ((a >> 15) == 1)
				immediate = a - 65536;
			else immediate = a;
			unsigned int address = (bigendian << 6) >> 6;
			switch (opcode) {
			case 0:
				if (function == 32) {
					printf("add ");
					printf("$%d, $%d, $%d", rd, rs, rt);
				}
				else if (function == 33) {
					printf("addu ");
					printf("$%d, $%d, $%d", rd, rs, rt);
				}
				else if (function == 36) {
					printf("and ");
					printf("$%d, $%d, $%d", rd, rs, rt);
				}
				else if (function == 26) {
					printf("div ");
					printf("$%d, $%d", rs, rt);
				}
				else if (function == 27) {
					printf("divu ");
					printf("$%d, $%d", rs, rt);
				}
				else if (function == 9) {
					printf("jalr ");
					printf("$%d, $%d", rd, rs);
				}
				else if (function == 8) {
					printf("jr ");
					printf("$%d", rs);
				}
				else if (function == 16) {
					printf("mfhi ");
					printf("$%d", rd);
				}
				else if (function == 18) {
					printf("mflo ");
					printf("$%d", rd);
				}
				else if (function == 17) {
					printf("mthi ");
					printf("$%d", rs);
				}
				else if (function == 19) {
					printf("mtlo ");
					printf("$%d", rs);
				}
				else if (function == 24) {
					printf("mult ");
					printf("$%d, $%d", rs, rt);
				}
				else if (function == 25) {
					printf("multu ");
					printf("$%d, $%d", rs, rt);
				}
				else if (function == 39) {
					printf("nor ");
					printf("$%d, $%d, $%d", rd, rs, rt);
				}
				else if (function == 37) {
					printf("or ");
					printf("$%d, $%d, $%d", rd, rs, rt);
				}
				else if (function == 0) {
					printf("sll ");
					printf("$%d, $%d, %d", rd, rt, sa);
				}
				else if (function == 4) {
					printf("sllv ");
					printf("$%d, $%d, $%d", rd, rt, rs);
				}
				else if (function == 42) {
					printf("slt ");
					printf("$%d, $%d, $%d", rd, rs, rt);
				}
				else if (function == 43) {
					printf("sltu ");
					printf("$%d, $%d, $%d", rd, rs, rt);
				}
				else if (function == 3) {
					printf("sra ");
					printf("$%d, $%d, %d", rd, rt, sa);
				}
				else if (function == 7) {
					printf("srav ");
					printf("$%d, $%d, $%d", rd, rt, rs);
				}
				else if (function == 2) {
					printf("srl ");
					printf("$%d, $%d, %d", rd, rt, sa);
				}
				else if (function == 6) {
					printf("srlv ");
					printf("$%d, $%d, $%d", rd, rt, rs);
				}
				else if (function == 34) {
					printf("sub ");
					printf("$%d, $%d, $%d", rd, rs, rt);
				}
				else if (function == 35) {
					printf("subu ");
					printf("$%d, $%d, $%d", rd, rs, rt);
				}
				else if (function == 12) {
					printf("syscall");
				}
				else if (function == 38) {
					printf("xor ");
					printf("$%d, $%d, $%d", rd, rs, rt);
				}
				else {
					printf("unknown instruction");
				}
				break;

			case 2:
			{
				printf("j %d", address);
				break;
			}
			case 3:
			{
				printf("jal %d", address);
				break;
			}
			default:
				if (opcode == 8) {
					printf("addi ");
					printf("$%d, $%d, %d", rt, rs, immediate);

				}
				else if (opcode == 9) {
					printf("addiu ");
					printf("$%d, $%d, %d", rt, rs, immediate);
				}
				else if (opcode == 12) {
					printf("andi ");
					printf("$%d, $%d, %d", rt, rs, immediate);
				}
				else if (opcode == 4) {
					printf("beq ");
					printf("$%d, $%d, %d", rs, rt, immediate);
				}
				else if (opcode == 5) {
					printf("bne ");
					printf("$%d, $%d, %d", rs, rt, immediate);
				}
				else if (opcode == 32) {
					printf("lb ");
					printf("$%d, %d($%d)", rt, immediate, rs);
				}
				else if (opcode == 36) {
					printf("lbu ");
					printf("$%d, %d($%d)", rt, immediate, rs);
				}
				else if (opcode == 33) {
					printf("lh ");
					printf("$%d, %d($%d)", rt, immediate, rs);
				}
				else if (opcode == 37) {
					printf("lhu ");
					printf("$%d, %d($%d)", rt, immediate, rs);
				}
				else if (opcode == 15) {
					printf("lui ");
					printf("$%d, %d", rt, immediate);
				}
				else if (opcode == 35) {
					printf("lw ");
					printf("$%d, %d($%d)", rt, immediate, rs);
				}
				else if (opcode == 13) {
					printf("ori ");
					printf("$%d, $%d, %d", rt, rs, immediate);
				}
				else if (opcode == 40) {
					printf("sb ");
					printf("$%d, %d($%d)", rt, immediate, rs);
				}
				else if (opcode == 10) {
					printf("slti ");
					printf("$%d, $%d, %d", rt, rs, immediate);
				}
				else if (opcode == 11) {
					printf("sltiu ");
					printf("$%d, $%d, %d", rt, rs, immediate);
				}
				else if (opcode == 41) {
					printf("sh ");
					printf("$%d, %d($%d)", rt, immediate, rs);
				}
				else if (opcode == 43) {
					printf("sw ");
					printf("$%d, %d($%d)", rt, immediate, rs);
				}
				else if (opcode == 14) {
					printf("xori ");
					printf("$%d, $%d, $%d", rt, rs, immediate);
				}
				else {
					printf("unknown instruction");
				}
				break;
			}
			printf("\n");
			count++;
			bigendian = 0;
		}
	}
	return 0;

}
