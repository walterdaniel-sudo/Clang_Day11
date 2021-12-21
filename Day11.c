#include <stdio.h>

// ---- 반복문 ----
// while()문의 원형;
//		초기식;
//		
//		while (조건식)
//		{
//			종속 문장 및 변화식
//		}
// 
// while()문에서 초기식은 while문 바깥에 존재해야 하고, 변화식은 종속 문장과 같이 존재한다.
// while()문에서 무한루프를 사용할 때는 조건식에 1을 작성해주면 된다.
// while()문에서 종속 문장이 한 줄 일때는 {}(중괄호)를 생략해줄 수 있다.
// 하지만 종속 문장에 변화식이 같이 작성되기 때문에 {}(중괄호)를 생략하는 경우는 거의 없다.

int main()
{
	/*int i = 0; 

	while (i < 10)
	{
		printf("Hello world!\n");
		i++;
	}*/

	/*while (1)
	{
		printf("Hello world!\n");
	}*/

	/*char i = 'A';

	printf("출력: ");
	while (i <= 'Z')
	{
		printf("%c ", i);
		i++;
	}*/

	/*char ch, i = 'a';

	printf("입력: ");
	scanf("%c", &ch);

	while (i <= ch)
	{
		printf("%c ", i);
		i++;
	}*/

	int num;

	while (1)
	{
		printf("입력: ");
		scanf("%d", &num);

		if (num == 9)
			break;

		printf("출력: %d\n\n", num);
	}

	return 0;
}
