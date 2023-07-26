#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> nums;

	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);

	cout<<nums[2]<<endl;

	for(int i = 0; i < nums.size(); i++){
	//	cout<<nums[i]<<endl;
	}

	nums[2] = 5;

	cout<<nums[2]<<endl;

	return 0;
}
