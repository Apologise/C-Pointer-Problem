#include<stdio.h>

/*
	��һ���ַ�����ת
	˼·���ҵ��ַ�����βָ�룬Ȼ���ͷָ�뽻��
*/
char *reverseString(char *string){
	char *end = string;
	char *start = string;
	while(*end != '\0'){
		end++;
	}
	end--;
	//ѭ��������ָ�����'\0'����Ҫ����--��
	while( start != end){
		//������ֵ
		char temp;
		temp = *start;
		*start = *end;
		*end = temp;
		
		end--;
		start++;
	}
	return string;

}

int main(){
	char string[] =  "yanghao";
	printf("%s",reverseString(string));
}