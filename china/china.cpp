#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

char m;

int main(){
	ifstream fin("china.in");
	ofstream fout("china.out");

	char s[6];

	fin>>s;
	int l = strlen(s);
	cout<<s<<'\n';
	for(int i = 0; i < l; i++){
		int n = s[i] + 4;
		cout<<s[i]<<'\n';
		m = char(n);
		cout<<m<<'\n';
		cout<<"-----------"<<'\n';
		fout<<m;
	}
	fout<<'\n';
}
