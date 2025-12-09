#include<stdio.h>

int main(void) {
	char* string = " World, Hello!";
	short int data = 0x0001;

	FILE* p_file = fopen("hello.txt", "wt");
	if (NULL != p_file) {
		for (int i = 412; i < 432; i++) {
			if(i % 3 == 0) {
				fprintf(p_file, "\n");
			}
			fprintf(p_file, "%d ", i);
		}
		fprintf(p_file, "%s\n",string);
		fprintf(p_file,"%x\n",data);

		printf("파일 내용을 이렇게 썼어요");
		
		fclose(p_file);
	}
	return 0;
}