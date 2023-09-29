#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("pow.in");
	if(fin.is_open()){
		cout<<"file is open"<<endl;
	}else{
		cout<<"file is not open"<<endl;
	}
}
