#include <fstream>
#include <limits>

using namespace std;

#define INF numeric_limits<int>::max()

int main(){
	ofstream fout("max.out");
	fout<<INF;
}
