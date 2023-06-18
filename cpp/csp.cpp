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
// 小熊的地图上有n个点，其中编号为l的是它的家、编号为 2,3,…,n的都是景点。部分点对之间有双向直达的公交线路。如果点 x与 z1、z1 与 z2、……、zk−1 与 zk、zk 与y之间均有直达的线路，那么我们称 x与 y之间的行程可转车 k次通达；特别地，如果点 x与 y之间有直达的线路，则称可转车 0次通达。
// 很快就要放假了，小熊计划从家出发去 4个不同的景点游玩，完成 5 段行程后回家：家 →→ 景点 A →→ 景点 B →→ 景点 C →→ 景点 D →→ 家且每段行程最多转车 k次。转车时经过的点没有任何限制，既可以是家、也可以是景点，还可以重复经过相同的点。例如，在景点 A →→ 景点 B 的这段行程中，转车时经过的点可以是家、也可以是景点 C，还可以是景点 D →→ 家这段行程转车时经过的点。
// 假设每个景点都有一个分数，请帮小熊规划一个行程，使得小熊访问的四个不同景点的分数之和最大。
int holiday(){
	cout<<"holiday"<<endl;
	return 0;
}

int main() {
	holiday();
}

