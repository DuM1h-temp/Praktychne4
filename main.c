#include <stdio.h>
#include <Windows.h>

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int n, i, result=0;
	printf("������ ���������� �����: ");
	scanf("%d", &n);
	
	if (n>150||n<1){
		printf("����� ������� ������� ���� �� ������� �� 1 �� 150");
		return 1;
	}
	
	for(i=1;i<=n;i++){
		if (n%i==n/i)
			result++;
	}
	printf("ʳ������ ����� ������� ����� %d: %d", n, result);
	
	return 0;
}
