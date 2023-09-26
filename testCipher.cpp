/*

Name: Subhikshya Lama

NetID: w10143724

Program Description: This program tests out the Cipher Class and its attributes and methods. 
It also emulates the sample output's format.
While also having output, there is a section that takes input.

*/

#include <iostream>
#include <string>
#include "Subhikshya_Lama_Cipher.h"
using namespace std;

void testCipher(string text, int key) {
    cout << "Let's encode a message." << endl;
    cout << "-->ShiftKey: " << key << "\n";
    cout << "-->Plain Text: " << text << "\n";
    Cipher cipher("", key);
    cipher.ChangeText(text, key);
    string encryptedText = cipher.GetCipherText(); 
    cout << "-->Cipher Text: " << encryptedText << endl;
    cout << endl;
    string decrypted = cipher.GetDecryptedText(encryptedText);
    cout << "Now I am going to take the cipher text above and convert it back to Plain! " << endl;
    cout << "-->Result: " << decrypted << "\n\n\n\n";
}
int main() {

    //This is the section commented out that can take your input
   /* string text6;
    string encryptedText6;
    int key6;
  
    cout << "Let's encode a message." << endl;
    cout << "-->ShiftKey: ";
    cin >> key6;
    cin.ignore();

    cout << "-->Player Text: ";
    getline(cin, text6);

    Cipher cipher6("", key6);
    cipher6.ChangeText(text6, key6);
    encryptedText6 = cipher6.GetCipherText();
    cout << "-->Cipher Text: " << encryptedText6 << endl;
    cout << endl;
    string decrypted6 = cipher6.GetDecryptedText(encryptedText6);
    cout << "Now I am going to take the cipher text above and convert it back to Plain! " << endl;
    cout << "-->Result: " << decrypted6 << "\n\n\n\n";
    cout << "Then comes the hard coded tests\n";*/

    
    testCipher("This is insane!", 2);
    testCipher("Momo is my favorite food.", 15);
}

    
