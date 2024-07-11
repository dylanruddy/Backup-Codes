#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

vector<string> number = {"120", "1434", "1694"};

int password;
const int correctpassword = 4567; 
int tries = 0;
const int maxtries = 3;


cout << "Hello. Press any key to continue ";
cin.get();


cout << "Please enter the passkey to access the backup codes" << endl;

cin >> password;

while (password != correctpassword && tries < maxtries -1)
{
    
   cout << "wrong passcode, please try again: " << endl;
   cin >> password;
   tries++;
}

    if (password == correctpassword)
    {
        cout << "Access Granted! Here are your backup codes: " << endl;
        cout << number[0] << endl;
        cout << number[1] << endl;
        cout << number[2] << endl;
    }   

    else {
        cout << "Acess Denied" << endl;
    }
    
         




 return 0;

}




    
