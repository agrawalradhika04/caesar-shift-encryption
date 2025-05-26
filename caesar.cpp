#include <iostream>
#include "caesar.h"

using namespace std;

// Pre: “letter” is a character between ‘a’ and ‘z’.
//       “key” is a non-negative integer
// Post: returns “letter” shifted by adding “key”
char encrypt_letter(char letter, int key){
    key = key % 26;
    char next = letter + key;
    if(next > 122){
        next = next - 122 + 96;
    }
    return next;
}


// Pre: “letter” is a character between ‘a’ and ‘z’.
//       “key” is a non-negative integer
// Post: returns “letter” shifted by subtracting “key”
char decrypt_letter(char letter, int key){
    key = key % 26;
    char previous = letter - key;
    if(previous < 97){
        previous = previous + 122 - 96;
    }
    return previous;
}


// Pre: “plaintext” is a string consisting of letters between
//      ‘a’ and ‘z’.  “key” is a non-negative integer
// Post: returns a string where each letter of
//      “plaintext” has been shifted by adding “key”
string encrypt_word(string plaintext, int key){
    string new_next = "";
    for(int i = 0; i < plaintext.size(); i++){
        new_next = new_next + encrypt_letter(plaintext[i], key);
    }
    return new_next;
}


// Pre: “ciphertext” is a string consisting of letters between
//      ‘a’ and ‘z’.  “key” is a non-negative integer
// Post: returns a string where each letter of
//      “plaintext” has been shifted by subtracting “key”
string decrypt_word(string ciphertext, int key){
    string new_previous = "";
    for(int i = 0; i < ciphertext.size(); i++){
        new_previous = new_previous + decrypt_letter(ciphertext[i], key);
    }
    return new_previous;
}


// Pre: “ciphertext” is a string consisting of letters between
//      ‘a’ and ‘z’.
// Post: for each possible key from 0-25, outputs to the screen
//       the ciphertext decrypted by that key, and the key used.
void brute_force_decrypt(string ciphertext){
    string original = "";
    for(int i = 0; i <= 25; i++){
        original = decrypt_word(ciphertext, i);
        cout << "The original string is " << original << " and the key used is " << i << endl;
    }
    return;
}
