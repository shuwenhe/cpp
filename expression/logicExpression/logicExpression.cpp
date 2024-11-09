#include <iostream>

using namespace std;

int main(){
	bool isTrue = true,isFalse = false;
	bool result = isTrue && isFalse; // 与 
	bool result2 = isTrue || isFalse; // 或
	cout<<"result = "<<result<<endl;
	cout<<"result2 = "<<result2<<endl;
}
