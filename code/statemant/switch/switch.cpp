#include <iostream>

using namespace std;

int main(){
	int dayOfWeek = 3;
	string dayName;

	switch(dayOfWeek){
		case 1:
			dayName = "Monday";
			break;
		case 2:
			dayName = "Tuesday";
			break;
		case 3:
			dayName = "Wednesday";
			break;
		case 4:
			dayName = "Monday";
			break;
		case 5:
			dayName = "Monday";
			break;
		case 6:
			dayName = "Monday";
			break;
		case 7:
			dayName = "Monday";
			break;
	}
	cout<<"day of week "<<dayName<<endl;
	return 0;
}
