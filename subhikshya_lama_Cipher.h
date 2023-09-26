/*

Name: Subhikshya Lama

NetID: w101143724

Program Description: This is the header file for the Cipher Class. 
It consists of all the elements shown in the Class Design.

*/
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cipher {
private:
    string plaintext;
    string ciphertext;
    int key;
    string Encode(const string& input) const { //Encode, EncodeChar, Decode and DecodeChar are private members as shown in class design
        string result = "";
        for (char c : input) { //loops till all the characters in input are encrypted
            char encryptedChar = EncodeChar(c);// EncodeChar is called

            result += encryptedChar;
        }
        return result;
    }

    char EncodeChar(char c) const {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            char encryptedChar = static_cast<char>((c - base + key + 26) % 26 + base);//static_cast is used to convert to char
            return encryptedChar; //returns to Encode
        }
        else {
            return c; //Returns to Encode
        }
    }

    string Decode(const string& input) const {
        string result = "";
        for (char c : input) {
            char decryptedChar = DecodeChar(c);// DecodeChar is called
            result += decryptedChar;
        }
        return result;
    }

    char DecodeChar(char c) const {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            char decryptedChar = static_cast<char>((c - base - key + 26) % 26 + base);
            return decryptedChar; //returns to Decode
        }
        else {
            return c; //Returns to Decode
        }
    }

public:
    Cipher(const string& text, int key) {//The constructor
        this->key = key;
        plaintext = text;
        ciphertext = Encode(text);
    }

    string GetPlainText() const {
        return plaintext;
    }

    string GetCipherText() const {
        return ciphertext;
    }
    string GetDecryptedText(string convertedtext) {//It calls Decode and returns the decrypted text
        return Decode(convertedtext);
    }

    int GetKey() const {
        return key;
    }

    void SetKey(int newKey) {
        key = newKey;
        ciphertext = Encode(plaintext); //a new key is set and the text is reencrypted
    }

    void ChangeText(const string& text, int newKey) { // the text is assigned and encoded
        plaintext = text;
        key = newKey;
        ciphertext = Encode(text);
    }
    
};
















