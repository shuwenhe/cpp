#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("bit.in");
	ofstream fout("bit.out");
	int i,num;
	for(fin>>i; i >= 0;i--){
		num = 1<<i; 
		fout<<num<<endl;
	}
}
