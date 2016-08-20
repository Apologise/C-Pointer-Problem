//假定字符串str，删除其中的子字符串substr(注意，substr不一定是母字符串的字串，所以需要自己检查)
/*
1.判断substr是否是其字串，是，返回字串的第一个地址，不是退出程序
2.删除字串：将字串后面的字符一次左移length(substr)个位置
*/

//检查是否是其字串
#define NULL 0
char *match(char *str, char *substr){
	while( *substr != '\0' ){
		if( *str++ != *substr++ ){
			return NULL;
		}
	}
	return str;//此时返回的是母串中子串后面的一个字符的地址,例如adcadks(cad)，那么此时指向的是k
}

//如果存在字串，那么将其删除，返回的是删除后的字串
char *deleteSubStr(char *str, char *substr){
	char *next;
	while( *str != '\0' ){
		//将起始位置为next
		next = match(str, substr);
		//如果next不为空，那么就表示匹配成功，否则继续往下找
		if( *next != '\0'){
			break;//退出循环，因为已经找到了
		}
		str++;
	}
	if( *str == NULL){
		return NULL;
	}

	/*
		注意，如果已经找到了，那么此时next代表的位置就是子串后面的一个字符，而str则是子串第一次
		出现的位置
	*/
	while( *str++ = *next++);
	return NULL;
}