#include <iostream>
#include <string>
using namespace std;

struct BirthDate {
	int day;
	int month;
};


int main() {
	BirthDate birth;
	cout << "Enter Day: ";
	cin >> birth.day;
	cout << "Enter Month: ";
	cin >> birth.month;
	
	if(birth.day<1 || birth.day>31 || birth.month<1 || birth.month>12){
		cout<<"Birth Date Invalid";
		return 1;
	}
	
	cout<<"Your Zodiac is: ";
	int separator[12]={19, 18, 20, 19, 20, 20, 22, 22, 22, 22, 21, 21};
	string before[12]={"Capricorn", "Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", " Sagittarius"}; 
	string after[12]={"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", " Sagittarius", "Capricorn",};
	
	int i=birth.month-1;
	if(birth.day <= separator[i]){
		cout<<before[i];
	}
	else{
		cout<<after[i];
	}
return 0;
}
