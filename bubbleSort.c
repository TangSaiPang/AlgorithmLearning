/*
���󣺶��岢�ڿ���̨��ӡһ�����飺{9, 2, 11, 7, 12, 5}��Ȼ��ʵ��ð�������ٴ�ӡ�ٿ���̨
*/

#include <stdio.h>
#include <stdlib.h>

/*���� bubbleSort ����*/
void bubbleSort(int arr[]);

int main(void)
{
	/*��������������arr*/
	int arr[] = {9, 2, 11, 7, 12, 5};
	/*�������飬����ӡ�ڿ���̨*/
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	/*���ú��� bubbleSort*/
	bubbleSort(arr);
	
	system("pause");
	system("cls");
	return 0;
}

/*���� bubbleSort ����*/
void bubbleSort(int arr[])
{
	/*����������ʱ����*/
	int temp;
	/*ͬʱ�����Ͷ������i��j*/
	int i, j;
	
	/*i��ʾ�����˵�i+1�֣�j��ʾ���������*/
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
	
	/*�������ڿ���̨�н��д�ӡ*/
	for(i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
}