#include "struct.h" 
#include "new.h"
//헤더 파일을 여러 파일에 포함시킬 때에,
//반드시 단 한 번만 포함시켜야 한다.
//if 포함시키고 싶으면, #ifndef~#endif 사이에 #define STRUCT로
//기호상수를 정의해주어야 
int main()
{
	MyStruct pandaCoding = {
		"panda",
		26,
	};
	
	display(pandaCoding);

	return 0;
}

