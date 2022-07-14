#include<iostream>
using namespace std;
void sort(int arr[], int size)
{

}
int main()
{
	int arr[] = { 1,2,3,88,4 };
	int size = sizeof(arr) / sizeof(arr[0]);//sizeof(数组名)表示求整个数组的大小
	sort(arr, size);
	return 0;
}