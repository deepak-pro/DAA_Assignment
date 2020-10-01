#include <iostream>
using namespace std;
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
void reverse(int arr[], int low, int high)
{
	if (low < high)
	{
		swap(arr[low], arr[high]);
		reverse(arr, low + 1, high - 1);
	}
}
int main()
{
	int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
	reverse(arr, 0, n-1);
	print(arr, n);
	return 0;
}
