#include <iostream>
#include <locale>

/*
	�����ڵ� wchar_t
	���ڿ� L�� �ٿ��� ���

	locale : ��ǻ�� �ý����� ������ Ư������� �°� �ڵ������� ���ߴ� ���

	setlocale(LC_ALL,"Korean")�̿�. LC(Locale Categories)

	LC_CTYPE(����Ÿ�Կ� ���� ������)
	LC_NUMBER(���ڿ� ���� ������)
	LC_TIME(�ð��� ���� ������)

	������ ������?
*/

using namespace std;

int main()
{
	setlocale(LC_ALL, "Korean");
	
	char en[] = "��ο���";
	wchar_t a[] = L"��ο���";

	for (int i = 0; a[i] != NULL; i++)
	{
		if (a[i] < 44032 || a[i] > 55199)
		{
			cout << "�ѱ��� �ƴմϴ�!!" << endl;
			break;
		}
	}
	cout << sizeof(en) << endl;
	wcout << sizeof(a) << endl; // �����ڵ�� ��� 2byte (NULL����)

	return 0;
}