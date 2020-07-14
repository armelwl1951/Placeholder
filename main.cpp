#include <iostream>
#include <string>
using namespace std;

class PersonalInfo
{
	string name;
	string address; //Needs to be full address string that reads whitespace
	int age;
	string phoneNum;

public:
	PersonalInfo();

	void setName(string nm);
	string getName();

	void setAddress(string addr);
	string getAddress();

	void setAge(int a);
	int getAge();

	void setPhoneNum(string phn);
	string getPhoneNum();
};

PersonalInfo::PersonalInfo()
{
	name = "";
	address = "";
	age = 0;
	phoneNum = "";
}

void PersonalInfo::setName(string nm)
{
	this->name = nm;
}

void PersonalInfo::setAddress(string addr)
{
	this->address = addr;
}

void PersonalInfo::setAge(int a)
{
	this->age = a;
}

void PersonalInfo::setPhoneNum(string phn)
{
	this->phoneNum = phn;
}


string PersonalInfo::getName()
{
	return (this->name);
}

string PersonalInfo::getAddress()
{
	return (this->address);
}

int PersonalInfo::getAge()
{
	return (this->age);
}

string PersonalInfo::getPhoneNum()
{
	return (this->phoneNum);
}


int main()
{
	PersonalInfo person1, person2, person3;

	string inputName, inputAddr, inputPhn;
	int inputAge;

	cout << "Enter name of Person 1: ";
	getline(cin, inputName);
	person1.setName(inputName);
	cout << "\n";

	cout << "Enter address of Person 1: ";
	getline(cin, inputAddr);
	person1.setAddress(inputAddr);
	cout << "\n";

	cout << "Enter phone number for Person 1: ";
	getline(cin, inputPhn);
	person1.setPhoneNum(inputPhn);
	cout << "\n";

	do
	{
		cout << "Enter age of Person 1: ";
		cin >> inputAge;
	} while (inputAge <= 0);
	person1.setAge(inputAge);
	cout << "\n";
	
	cout << endl << "Person 1: ";
	cout << endl << "\tName: " << (person1.getName());
	cout << endl << "\tAddress: " << (person1.getAddress());
	cout << endl << "\tPhone Number: " << (person1.getPhoneNum());
	cout << endl << "\tAge: " << (person1.getAge());

	cout << endl << "----------------------------------------\n" << endl;

	getchar();

	cout << "Enter name of Person 2: ";
	getline(cin, inputName);
	person2.setName(inputAddr);
	cout << "\n";

	cout << "Enter address of Person 2: ";
	getline(cin, inputAddr);
	person2.setAddress(inputAddr);
	cout << "\n";

	cout << "Enter phone number for Person 2: ";
	getline(cin, inputPhn);
	person2.setPhoneNum(inputPhn);
	cout << "\n";

	do{
		cout << "Enter age of Person 2: ";
		cin >> inputAge;
	} while (inputAge <= 0);
	person2.setAge(inputAge);
	cout << "\n";

	cout << endl << "Person 2: ";
	cout << endl << "\tName: " << (person2.getName());
	cout << endl << "\tAddress: " << (person2.getAddress());
	cout << endl << "\tPhone Number: " << (person2.getPhoneNum());
	cout << endl << "\tAge: " << (person2.getAge());

	cout << endl << "----------------------------------------\n" << endl;

	getchar();

	cout << "Enter name of Person 3: ";
	getline(cin, inputName);
	person3.setName(inputAddr);
	cout << "\n";

	cout << "Enter address of Person 3: ";
	getline(cin, inputAddr);
	person3.setAddress(inputAddr);
	cout << "\n";

	cout << "Enter phone number for Person 3: ";
	getline(cin, inputPhn);
	person3.setPhoneNum(inputPhn);
	cout << "\n";

	do {
		cout << "Enter age of Person 3: ";
		cin >> inputAge;
	} while (inputAge <= 0);
	person3.setAge(inputAge);
	cout << "\n";

	cout << endl << "Person 3: ";
	cout << endl << "\tName: " << (person3.getName());
	cout << endl << "\tAddress: " << (person3.getAddress());
	cout << endl << "\tPhone Number: " << (person3.getPhoneNum());
	cout << endl << "\tAge: " << (person3.getAge());

	return 0;
}