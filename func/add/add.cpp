#include <bits/stdc++.h>

using namespace std;

float add(float x,float y){
	float z = x + y;
	return z;
}

int main(){
	float a,b,c;
	cout<<"please enter a,b:"<<'\n';
	cin>>a>>b;
	c = add(a,b);
	cout<<"sum = "<<c<<'\n';
}
