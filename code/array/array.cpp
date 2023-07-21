#include <iostream>

using namespace std;

int main(){
	int arr[] ={64, 34, 25, 12, 22, 11, 90};
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}
