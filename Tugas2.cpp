#include <iostream>
#include <string>
using namespace std;

struct Character {
	string name;
	int strength;
	int intelligence;
};


int main() {
	cout<< "=== Create New Character ==="<<endl;
	Character crc;
	cout << "Enter Name: ";
	cin >> crc.name;
	cout << "Enter Strength: ";
	cin >> crc.strength;
	cout << "Enter Intelligence: ";
	cin >> crc.intelligence;
	
	if(crc.strength<1 || crc.strength>100 || crc.intelligence<1 || crc.intelligence>100){
		cout<<"Stats Overflow";
		return 1;
	}
	
	int TotalPower=(crc.strength*2)+crc.intelligence;
	
	cout<<endl;
	cout<<"=== Character Information ==="<<endl;
	cout<<"Name: "<<crc.name<<endl;
	cout<<"Strength: "<<crc.strength<<endl;
	cout<<"Intelligence: "<<crc.intelligence<<endl;
	cout<<"Total Power: "<<TotalPower<<endl;
	cout<<"Class: ";
	if(TotalPower<100){
		cout<<"Villager";
	}
	else if(TotalPower<150){
		cout<<"Rogue";
	}
	else{
		cout<<"Dragon Knight";
	}
	
return 0;
}
