#include <stdio.h>
int select_sort(int li[],int length) {
	for (int i = 0; i < length-1; i++)//�ܹ���Ҫѡ��n-1��
	{
		int min =i;
		for ( int j = i+1; j < length; j++)//�����������±�Ϊn-1ʱΪֹ
		{
			if (li[j]<li[min])
			{
				min = j;
			}
			
		}
		int temp = 0;
		temp = li[i];
		li[i] = li[min];
		li[min] = temp;
		/*
		���������е���Сֵ���һ��ֵ������
		*/
	}
	return 0;

}
int main() {
	int k;
	int li[] = { 2,5,6,8,7,8,7,5 };
	int length = sizeof(li) / sizeof(int);
	select_sort(li, length);
	for (k = 0; k < length; k++) {
		printf("%d ", li[k]);
	}
	printf("\n");
	return 0;
}