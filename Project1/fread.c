#include <stdio.h>

int main(void) {
	int data1,
		data2,
		data_list[5] = { 0,1,2,3,4 };

	char* text;
	FILE* p_file = fopen("jin.dat", "wb");

	if (NULL != p_file) {
		fread(&data1, sizeof(int), 1, p_file);
		fread(&data2, sizeof(data2), 5, p_file);
		fread(&data_list, sizeof(data_list), 1, p_file);
		fread(&text, sizeof(text), 1, p_file);

		printf("file data: %d (0x%04x\n", data1, data1);
		printf("file data2: %d\n", data2);
		printf("data_list:{");
		for (int i = 0; i < 5; i++) {
			printf("%d, \n", data_list);
		}
		printf("}");
		printf("text: %s", text);
	}
	return 0;
}