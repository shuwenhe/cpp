#include <iostream>

using namespace std;

// 高斯求和公式求和1+2+3+...+100
int gauss() {
    int sum = 0;
    sum = (1+100)*100/2;
    cout << "gauss sum=" << sum << endl;
    return 0;
}

// for循环求和1+2+3+...+100
int forSum(){
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "for sum=" << sum << endl;
    return 0;
}
// linux命令
// 文件命令

// C++
// 数据类型
int intType(){
	// int 整型
	int num = 10;
	cout<<"num = "<<num<<endl;
	return 0;
}

int shortType(){
	short short_num = 20;
	cout<<"short_num = "<<short_num<<endl;
	return 0;
}

int longType(){
	long long_num = 1234567890;
	cout<<"long_num = "<<long_num<<endl;
	return 0;
}

int longLongType(){
	long long long_long_num =9876543210;
	cout<<"longLong_num ="<<long_long_num<<endl;
	return 0;
}	

// 浮点型
int floatType(){
	float pi = 3.14;
	cout<<"pi ="<<pi<<endl;
	return 0;
}

int main() {
	floatType();
}

// 二进制


// 哈希表

// 图

// 树
// 二叉树
// 二叉树：前序、中序、后续遍历

// 字符串的操作

// 递归

// 时间复杂度

// algorithm

// sort 排序
// 插入排序
// 冒泡排序
// 堆排序
// 归并排序

// 分治算法

// 2022CSP-S-1 假期计划（holiday）