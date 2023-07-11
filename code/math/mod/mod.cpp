#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fin("mod.in");
	ofstream fout("mod.out");
	
	int num;
	fin>>num;
	if (num < 2){
		fout<<-1;
		return 0;
	}
	for(int i = 2; i * i <= num;i++){
		if(num % i == 0){ // i整除num
			fout<<-1;
			return 0; 
		}
		fout<<1;
	}

}
