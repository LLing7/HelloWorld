#include<iostream>
using namespace std;
void sort(int arr[], int size)
{
	int temp=0;
	for(int i=0;i<size-1;i++)
	{	for(int j=0;j<size-1-i;j++)
			{if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;}
}
}


}
int main()
{
	int arr[] = { 1,2,3,88,4 };
	int size = sizeof(arr) / sizeof(arr[0]);//sizeof(数组名)表示求整个数组的大小
	sort(arr, size);
	return 0;
}
