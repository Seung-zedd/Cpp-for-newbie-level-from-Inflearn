#include "struct.h" 
#include "new.h"
//��� ������ ���� ���Ͽ� ���Խ�ų ����,
//�ݵ�� �� �� ���� ���Խ��Ѿ� �Ѵ�.
//if ���Խ�Ű�� ������, #ifndef~#endif ���̿� #define STRUCT��
//��ȣ����� �������־�� 
int main_des()
{
	MyStruct pandaCoding = {
		"panda",
		26,
	};
	
	display(pandaCoding);

	return 0;
}

