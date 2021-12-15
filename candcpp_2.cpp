#include <iostream>
#include <locale>

/*
	유니코드 wchar_t
	문자열 L을 붙여서 사용

	locale : 컴퓨터 시스템을 국가와 특정지역어에 맞게 자동적으로 맞추는 기능

	setlocale(LC_ALL,"Korean")이용. LC(Locale Categories)

	LC_CTYPE(문자타입에 대한 로케일)
	LC_NUMBER(숫자에 대한 로케일)
	LC_TIME(시간에 대한 로케일)

	쓸일이 있을까?
*/

using namespace std;

int main()
{
	setlocale(LC_ALL, "Korean");
	
	char en[] = "헬로월드";
	wchar_t a[] = L"헬로월드";

	for (int i = 0; a[i] != NULL; i++)
	{
		if (a[i] < 44032 || a[i] > 55199)
		{
			cout << "한글이 아닙니다!!" << endl;
			break;
		}
	}
	cout << sizeof(en) << endl;
	wcout << sizeof(a) << endl; // 유니코드는 모두 2byte (NULL포함)

	return 0;
}