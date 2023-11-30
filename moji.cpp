#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char moji[64] = { 0 };
	FILE* fp = fopen("data.txt", "r");
	for (int i = 0; i < 64; i++) {
		(void)fscanf(fp, "%c", &moji[i]);
		if (moji[i] == '1') { printf("–"); continue;}
		if (moji[i] == '0') { printf("@"); continue;}
		if (moji[i] == '\n'){ printf("\n"); continue;}
	}
	fclose(fp);
	return 0;
}