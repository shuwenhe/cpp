#include <iostream>

using namespace std;

int main(){
	int y;
	cin>>y;
	if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
		cout<<y<<" is leap year"<<'\n';
	}else{
		cout<<y<<" is not leap year"<<'\n';
	}
}
