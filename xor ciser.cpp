// FCAI – structure Programming  – 2022 - Assignment 2
// salah eldin hesham salah - 20210188
// xor cipher

#include <iostream>
#include <string>
using namespace std;

string XOR(string data, char key);

int main()
{
		int choice1;
		int choice;
		string massge;
		char key = 'A';
		// take the massage from user
		cout << "enter massge: ";
		getline(cin, massge);
		cout << "1-cipher: " << endl;
		cout << "2-dicpher: " << endl;
		cout << "enter 1 or 2: ";
		cin >> choice1;

		// encryption
		if (choice1 == 1)
		{
			string ciphered = XOR(massge, key);
			cout << "ciphered msg is: " << ciphered << endl;
			cout << "hexa value : ";
			for (const auto& item : ciphered)
			{
				cout << hex << int(item);
			}
			cout << endl;
			
		}
		//decryption
		else if (choice1 == 2)
		{
			string deciphered = XOR(massge, key);
			cout << "deciphered msg is: " << deciphered << endl;
			cout << "hexa value: ";
			for (const auto& item : deciphered)
			{
				cout << hex << int(item);
			}
			cout << endl;
			
		}
		else
			cout << "invalid input";
		//ask user if he want to do it again
		cout << "want to do it once more(y/n): " << endl;
		cout << "1-Yes " << endl;
		cout << "2-No " << endl;
		cout << "enter 1 or 2: ";
		cin >> choice;
		cin.ignore();
		if (choice == 1)
		{
			main();
		}
		else if (choice == 2)
		{
			cout << "Thanks for using our program ";
		}
		else
		{
			cout << "invalid input" << endl;
			cout << "Thanks for using our program ";
		}
		cin.ignore();
	}
	

//function of encryption and decryption
string XOR(string data, char key)
{
	string msg = data;
	for (int i = 0; i < msg.length(); i++)
	{
		msg[i] ^= key;
	}
	return msg;
}