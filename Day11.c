#include <stdio.h>

// ---- �ݺ��� ----
// while()���� ����;
//		�ʱ��;
//		
//		while (���ǽ�)
//		{
//			���� ���� �� ��ȭ��
//		}
// 
// while()������ �ʱ���� while�� �ٱ��� �����ؾ� �ϰ�, ��ȭ���� ���� ����� ���� �����Ѵ�.
// while()������ ���ѷ����� ����� ���� ���ǽĿ� 1�� �ۼ����ָ� �ȴ�.
// while()������ ���� ������ �� �� �϶��� {}(�߰�ȣ)�� �������� �� �ִ�.
// ������ ���� ���忡 ��ȭ���� ���� �ۼ��Ǳ� ������ {}(�߰�ȣ)�� �����ϴ� ���� ���� ����.

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

	printf("���: ");
	while (i <= 'Z')
	{
		printf("%c ", i);
		i++;
	}*/

	/*char ch, i = 'a';

	printf("�Է�: ");
	scanf("%c", &ch);

	while (i <= ch)
	{
		printf("%c ", i);
		i++;
	}*/

	int num;

	while (1)
	{
		printf("�Է�: ");
		scanf("%d", &num);

		if (num == 9)
			break;

		printf("���: %d\n\n", num);
	}

	return 0;
}
