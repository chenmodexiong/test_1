#define  _CRT_SECURE_NO_WARNINGS 1



//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��ȷ��һ������
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		//һ������
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


#include<stdio.h>

int main()
{
	int arr[] = { 99,49,55,50,5,4,-3,2,17 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��ȷ��һ������
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//һ������
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



#include<stdio.h>

int main()
{
	int arr[5] = { 5 ,4 ,3 ,2 ,1 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��ȷ��һ������
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//һ������
		for (j = i+1; j < sz ; j++)
		{
			if (arr[i] < arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d,", arr[i]);
	}
	return 0;
}


//ѡ������
//
//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 84,83,88,87,61 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��Ҫ����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int k = i;
//		for (j = i + 1 ; j < sz ; j++)
//		{
//			if (arr[k] > arr[j])
//			{
//				//ȷ��k�ǽ�С����λ��
//				k = j;
//			}
//		}
//		//ȷ��i�ǽ�С����λ�ã��������򽻻�
//		if (i != k)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = tmp;
//		}
//	}
//	//��ӡ����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}