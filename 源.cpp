#include<vector>
#include<iostream>
using namespace std;
void quick_sort(vector<int>& arr, int l, int r);
int main()
{
	vector<int> arrays = { 4,5,3,4,65,-3,0,342,123,3,-3,-123 };
	quick_sort(arrays, 0, arrays.size()-1);
	for(auto it=arrays.cbegin();it!=arrays.cend();it++)
		cout << *it<<"\t";
	system("pause");
	return 0;
}
void quick_sort (vector<int>& arr, int l, int r)
{
	if (l >= r)	   return;
	int key = arr[l];
	int i = l, j = r;//i,j�൱�������ƶ��ı�ǣ�i�����ң��ұ�key���,j��֮
	while (i < j) {
		while (i<j&&arr[j] > key) {//����������С��
			j--;
		} 
		if (i!=j&&arr[j] <= key) {
			arr[i] = arr[j];
			i++;
		}
		while (i<j&&arr[i] <= key) {//���������Ҵ��
			i++;
		}
		if (i!=j&&arr[i] > key) {
			arr[j] = arr[i];
			j--;
		}	
	}
	arr[i] = key;
	quick_sort(arr, 0, i - 1);
	quick_sort(arr, i + 1, r);
}