#include <iostream>
#include "caesar.h"

using namespace std;

int main(){
	
	//Testing for encryption related functions
	cout << "Enter a letter: ";
	char letter;
	cin >> letter;
	
	cout << "Enter a string: ";
	string word;
	cin >> word;
	
	cout << "Enter a key: ";
	int key;
	cin >> key;
	
	cout << "After encryption, your letter is: " << encrypt_letter(letter, key) << endl;
	
	cout << "After encryption, your word is: " << encrypt_word(word, key) << endl;
	
	//Testing for decryption related functions
	cout << "Enter a letter: ";
	char newletter = encrypt_letter(letter, key);
	cin >> newletter;
	
	cout << "Enter a string: ";
	string newword = encrypt_word(word, key);
	cin >> newword;
	
	cout << "Enter a key: ";
	int newkey;
	cin >> newkey;
	
	
	cout << "After decryption, your letter is: " << decrypt_letter(newletter, newkey) << endl;
	
	cout << "After decryption, your word is: " << decrypt_word(newword, newkey) << endl;
	
	brute_force_decrypt(newword);
	
	return 0;
}