#include<stdio.h>

int main(void) {
	int temp;
	FILE* p_file = fopen("hello.txt", "wt");
	
	if (NULL != p_file) {
		printf("파일을 열었습니다.");

		while (EOF != fscanf_s(p_file, "%d", &temp)) {
			printf("%d ", temp);
		}
	}

	printf("파일의 내용을 읽었습니다");
	fclose(p_file);
	printf("파일을 닫았습니다");
	
	return 0;
}