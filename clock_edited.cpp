//Christina Merpaw
//simple clock
//////////////////////////

#include <cstdio>
#include <ctime>
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int i = 0;
	int m = 0;
	int h = 0;
	string hours, minutes, seconds;
	
	bool clockRun = true;
	
	do{
		time_t s=time(0);
		tm t=*localtime(&s);
		printf("%02d:%02d:%02d",
			t.tm_hour,
			t.tm_min,
			t.tm_sec);
		i++;
		
		if (i == 60){
			m = m + 1;
			i = 0;
		}
		
		if (m == 60){
			h = h + 1;
			m = 0;
		}
		
		if (i != 1){
			seconds = "seconds";
		}
		else{
			seconds = "second";
		}
		
		if (m != 1){
			minutes = "minutes";
		}
		else{
			minutes = "minute";
		}
		
		if (h != 1){
			hours = "hours";
		}
		else{
			hours = "hour";
		}
		
		cout << "\nYou have been running this program for "; 
		cout << h << " " << hours << ", ";
		cout << m << " " << minutes << ", and ";
		cout << i << " " << seconds << ".";

		if(GetAsyncKeyState(VK_ESCAPE)){
			break;
		}
		
		Sleep(1000);
		system("cls");
	}while(clockRun);
	return 0;
}
