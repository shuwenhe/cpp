#include <iostream>

using namespace std;

int main(){
	string str = "01010000";
	int count = 0;
	for(int i = 0;i < str.length();i++ ){
		if(str[i] == '1'){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
