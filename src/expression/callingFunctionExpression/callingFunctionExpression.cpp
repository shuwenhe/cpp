#include <iostream>

using namespace std;

int sum(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	return sum;
}

int main(){
	int n = 100;
	int result = sum(n); // 调用函数表达式
	cout<<"result = "<<result<<endl;
}
