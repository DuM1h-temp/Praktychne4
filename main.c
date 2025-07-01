#include <stdio.h>
#include <Windows.h>

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int n, i, result=0;
	printf("Введіть натуральне число: ");
	scanf("%d", &n);
	
	if (n>150||n<1){
		printf("Число повинне повинно бути на проміжку від 1 до 150");
		return 1;
	}
	
	for(i=1;i<=n;i++){
		if (n%i==n/i)
			result++;
	}
	printf("Кількість рівних дільників числа %d: %d", n, result);
	
	return 0;
}
