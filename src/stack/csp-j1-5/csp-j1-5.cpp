#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool checkValidStackSequence(const vector<char>& inStack,const vector<char>& outStack){
	stack<char> st;
	int inIndex = 0;
	int outIndex = 0;
	while(outIndex < outStack.size()){
		// 如果栈为空或者栈顶元素不等于当前出栈序列元素，就继续入栈
		while(st.empty()||st.top()!=outStack[outIndex]){
			// 如果入栈序列已经遍历完，跳出循环
			if(inIndex==inStack.size())
				break;
			st.push(inStack[inIndex]);
			inIndex++;
		}
		// 如果栈顶元素等于当前出栈序列元素，进行出栈操作
		if(st.top() == outStack[outIndex]){
			st.pop();
			outIndex++;
		}else{
			// 栈顶元素与当前出栈序列元素不匹配，说明不是合法的出栈序列
			return false;
		}
	}
	// 如果所有出栈元素都成功匹配，且入栈序列也全部遍历完，则为合法的出栈序列
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
