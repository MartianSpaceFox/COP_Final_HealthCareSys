//Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <sstream> 

//Header files
#include "PatientAccount.h"
#include "Pharmacy.h"
//#include "Surgery.h"

using namespace std;



int main() {
ifstream inFile;

string procedureID;
string description;
string amount;

 
inFile.open("jfkmedicalcenter_cm.csv");
if (inFile.is_open()) {
    cout << "File has been opened" << endl;
}
else {
    cout << "NO FILE HAS BEEN OPENED" << endl;
}


while (!inFile.eof()) {
    getline ( inFile, procedureID, ',' );
    getline ( inFile, description, ',' );
    getline ( inFile, amount, ',' );

    cout << endl;
    cout << "Procedure ID: " << procedureID << endl;
    cout << "Description: " << description << endl;
    cout << "Amount: " << "$" << amount << endl;
    cout << endl;
}

inFile.close();
system("pause");
return 0;

} 
