#include <iostream>

using namespace std;

int main(){
	int nums[3] = {1,2,3};
	for(int i = 0; i < sizeof(nums)/sizeof(nums[0]);i++){
		cout<<nums[i]<<endl;
	}
	return 0;
}
