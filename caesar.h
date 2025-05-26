#include <iostream>
using namespace std;


// Pre: “letter” is a character between ‘a’ and ‘z’.
//       “key” is a non-negative integer
// Post: returns “letter” shifted by adding “key”
char encrypt_letter(char letter, int key);


// Pre: “letter” is a character between ‘a’ and ‘z’.
//       “key” is a non-negative integer
// Post: returns “letter” shifted by subtracting “key”
char decrypt_letter(char letter, int key);


// Pre: “plaintext” is a string consisting of letters between
//      ‘a’ and ‘z’.  “key” is a non-negative integer
// Post: returns a string where each letter of
//      “plaintext” has been shifted by adding “key”
string encrypt_word(string plaintext, int key);


// Pre: “ciphertext” is a string consisting of letters between
//      ‘a’ and ‘z’.  “key” is a non-negative integer
// Post: returns a string where each letter of
//      “plaintext” has been shifted by subtracting “key”
string decrypt_word(string ciphertext, int key);


// Pre: “ciphertext” is a string consisting of letters between
//      ‘a’ and ‘z’.
// Post: for each possible key from 0-25, outputs to the screen
//       the ciphertext decrypted by that key, and the key used.
void brute_force_decrypt(string ciphertext);
