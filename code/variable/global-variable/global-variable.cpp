#include <iostream>

using namespace std;

int i = 3;

int global_variable(){
	cout<<"global_i = "<<i<<endl;
	return 0;
}

int main(){
	global_variable();
	int i = 5;
	cout<<"main_i = "<<i<<endl;
	return 0;
}
