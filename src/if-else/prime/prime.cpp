#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int num){
	if(num < 2){
		return false;
	}
	for(int i = 2; i * i <= num; i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

int main() {
	ifstream fin("prime.in");
	ofstream fout("prime.out");

	int num;
	fin>>num;
	bool b = isPrime(num);
	if (b == 1){
		cout<<"num is prime"<<endl;
		fout<<1;
	}else{
		cout<<"num is not prime"<<endl;
		fout<<-1;
	}
}

