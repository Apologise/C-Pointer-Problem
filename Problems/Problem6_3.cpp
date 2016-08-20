#include<stdio.h>

/*
	将一个字符串反转
	思路：找到字符串的尾指针，然后和头指针交换
*/
char *reverseString(char *string){
	char *end = string;
	char *start = string;
	while(*end != '\0'){
		end++;
	}
	end--;
	//循环结束后指向的是'\0'，需要将其--；
	while( start != end){
		//交换其值
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