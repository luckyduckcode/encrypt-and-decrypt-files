#include <iostream>
#include "encryption.h"


using namespace std;

int main() {

    string filename;
    char mode;

    cout << "Enter the filename: ";
    getline(cin >> ws, filename);

    cout << "Encrypt (e) or Decrypt (d)?";
    cin >> mode;

    if (mode == 'e' || mode == 'E') {
        if (encryptFile(filename, true)) {
            cout << "Encryption completed succesfully." << endl;
        } else {
            cerr << "Error: Unable to perform encryption." << endl;
        } 
    } else if (mode == 'd' || mode == 'D') {
        if ( encryptFile( filename, false)) {
            cout << "Decryption completed successfully." << endl;
        } else {
            cerr << "error: unable to decryption"<< endl;
        }
    } else {
        cerr << "error invalid mode selected. use 'e' for encryption or 'd' for decryption.  " << endl;
    }

    return 0;
}