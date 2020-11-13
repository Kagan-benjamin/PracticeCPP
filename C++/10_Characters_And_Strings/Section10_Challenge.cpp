/* Write a program that asks a user to enter a secret message.
 * Encrypt this message using the substitution cypher and display
 * the encrypted message. 
 * Then decrypt the message back to its original form.
 * 
 * To encrypt: Replace the char at position n in alphabet with
 * the char at position n in key
 * To decrypt: Replace the char at position n in key with the
 * char at position n in alphabet
 * 
 * string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
 * string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
 * 
 */



#include <iostream>
#include <string>
using namespace std;

int main() {
	
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ,!"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr379"};
    string message {};
    size_t index{0};
    
    cout << "Please enter your secret message: ";
    getline(cin, message);
    cout << "\nYour message is: " << endl << message << endl; 
    
    string encrypted_message{};
    cout << "\n----------------Encrypting Message-------------------" << endl;
    for (auto c : message){
        index = alphabet.find(c);
        if (index != string::npos){
            encrypted_message += key.at(index); 
        }
        else {
            encrypted_message += c; 
        }
    }
    cout << encrypted_message;
    cout << "\n-----------------------------------------------------" << endl;
    
    string decrypted_message {};
    cout << "\n----------------Decrypting Message-------------------" << endl;
    for (auto c : encrypted_message){
        index = key.find(c);
        if (index != string::npos){
            decrypted_message += alphabet.at(index);
        }
        else {
            decrypted_message += c;
        }
       
    }
    cout << decrypted_message;
    cout << "\n-----------------------------------------------------" << endl;
    
    cout << endl;
    return 0;
}