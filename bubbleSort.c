/*
需求：定义并在控制台打印一个数组：{9, 2, 11, 7, 12, 5}，然后实现冒泡排序，再打印再控制台
*/

#include <stdio.h>
#include <stdlib.h>

/*声明 bubbleSort 函数*/
void bubbleSort(int arr[]);

int main(void)
{
	/*声明并定义数组arr*/
	int arr[] = {9, 2, 11, 7, 12, 5};
	/*遍历数组，并打印在控制台*/
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	/*调用函数 bubbleSort*/
	bubbleSort(arr);
	
	system("pause");
	system("cls");
	return 0;
}

/*定义 bubbleSort 函数*/
void bubbleSort(int arr[])
{
	/*声明定义临时变量*/
	int temp;
	/*同时声明和定义变量i、j*/
	int i, j;
	
	/*i表示进行了第i+1轮，j表示数组的索引*/
	for(i = 1; i < 6; i++)
	{
		for(j = 0; j < 6 - i; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
	/*将数组在控制台中进行打印*/
	for(i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
}