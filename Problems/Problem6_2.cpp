//�ٶ��ַ���str��ɾ�����е����ַ���substr(ע�⣬substr��һ����ĸ�ַ������ִ���������Ҫ�Լ����)
/*
1.�ж�substr�Ƿ������ִ����ǣ������ִ��ĵ�һ����ַ�������˳�����
2.ɾ���ִ������ִ�������ַ�һ������length(substr)��λ��
*/

//����Ƿ������ִ�
#define NULL 0
char *match(char *str, char *substr){
	while( *substr != '\0' ){
		if( *str++ != *substr++ ){
			return NULL;
		}
	}
	return str;//��ʱ���ص���ĸ�����Ӵ������һ���ַ��ĵ�ַ,����adcadks(cad)����ô��ʱָ�����k
}

//��������ִ�����ô����ɾ�������ص���ɾ������ִ�
char *deleteSubStr(char *str, char *substr){
	char *next;
	while( *str != '\0' ){
		//����ʼλ��Ϊnext
		next = match(str, substr);
		//���next��Ϊ�գ���ô�ͱ�ʾƥ��ɹ����������������
		if( *next != '\0'){
			break;//�˳�ѭ������Ϊ�Ѿ��ҵ���
		}
		str++;
	}
	if( *str == NULL){
		return NULL;
	}

	/*
		ע�⣬����Ѿ��ҵ��ˣ���ô��ʱnext�����λ�þ����Ӵ������һ���ַ�����str�����Ӵ���һ��
		���ֵ�λ��
	*/
	while( *str++ = *next++);
	return NULL;
}