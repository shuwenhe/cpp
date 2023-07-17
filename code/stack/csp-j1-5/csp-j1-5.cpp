#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool checkValidStackSequence(const vector<char>& inStack,const vector<char>& outStack){
	stack<char> st;
	int inIndex = 0;
	int outIndex = 0;
	while(outIndex < outStack.size()){
		while(st.empty()||st.top()!=outStack[outIndex]){
			if(inIndex==inStack.size())
				break;
			st.push(inStack[inIndex]);
			inIndex++;
		}
		if(st.top() == outStack[outIndex]){
			st.pop();
			outIndex++;
		}else{
			return false;
		}
	}
	return (outIndex == outStack.size());

}

int main(){
	vector<char> inStack = {'a','b','c','d','e'};
	vector<char> outStackA = {'a','b','c','d','e'};
	vector<char> outStackB = {'e','d','c','b','a'};
	vector<char> outStackC = {'b','a','c','d','e'};
	vector<char> outStackD = {'c','d','a','e','b'};

	cout<<"A is "<<(checkValidStackSequence(inStack,outStackA)?"valid":"invalid")<<endl;
	cout<<"B is "<<(checkValidStackSequence(inStack,outStackB)?"valid":"invalid")<<endl;
	cout<<"C is "<<(checkValidStackSequence(inStack,outStackC)?"valid":"invalid")<<endl;
	cout<<"D is "<<(checkValidStackSequence(inStack,outStackD)?"valid":"invalid")<<endl;

	return 0;
}
