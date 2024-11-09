#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(){
	ifstream fin("china.in");
	ofstream fout("china.out");
	char s[5];
	fin>>s; // China -> Glmre
	int l = strlen(s);
	for(int i = 0; i < l; i++){
		char c = s[i] + 4;
		cout<<c<<endl;
	}
}
