#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main() {
    string studentName, courseProgram, yearName, ratePerunit;
   
    int a = 0, yearLevel=0, b=0; //**a is to identify year name based on year level**//
                                //**b is to identify rate per unit**//
    double unitPerSubject, numberOfSubject; 
    double enrolledUnits, ratePerUnit, product;     
    double tuitionFee, percentage = .30, downPayment;     //*Downpayment is 30% of Tuition Fee*//
    double Tuition, downpayMent, balance;
    
    
    cout << "Student Name: ";
    getline (cin, studentName);
    cout << "\nCourse or Program: ";
    getline (cin, courseProgram);
    cout << "\nYear Level: ";
    cin >> yearLevel; //**identifies the year name too**//
                if(yearLevel == 1) {
                        cout <<  "\nYear Name: Freshman \n\nRate per Unit: P1,500";
                } else if(yearLevel == 2) {
                        cout <<  "\nYear Name: Sophomore \n\nRate per Unit: P1,800";
                                
                } else if(yearLevel == 3) {
                        cout <<  "\nYear Name: Junior \n\nRate per Unit: P2,000";
                } else if(yearLevel == 4) {
                        cout << "\nYear Name: Senior \n\nRate per Unit: P2,300";
                } cout << endl;
    
    cout << "\n---------**Calculate tuition fee**---------" << endl;
    
    cout << "\nNo.of Units Enrolled: " ;
    cin >> enrolledUnits;
    cout << "\nRate per Unit: Php ";
    cin >> ratePerUnit;
            product = enrolledUnits * ratePerUnit;
   cout << "\nTuition fee: Php " << product << endl;
    
    cout << "\n---------**Calculate downpayment**---------" << endl;
    cout << "        (DP is 30% of the tuition)       \n" << endl;
    cout << "\nTuition fee: Php ";
    cin >> tuitionFee;
    
            downPayment = tuitionFee * percentage;
            balance = tuitionFee - downPayment;
    cout << "\nDownpayment: Php " << downPayment;
    cout << "\n\nBalance: Php " << balance << endl;


    cout << "\n***********ENROLLMENT SLIP***********\n" 
    << "\nStudent Name: " << studentName 
    << "\nCourse/Program: " << courseProgram 
    << "\nYear Level : " << yearLevel 
    << "\nNumber of Units Enrolled: " << enrolledUnits 
    << "\nTuition Fee: Php " << product 
    << "\nDownpayment: Php " << downPayment 
    << ".\nBalance: Php " << balance 
    << "\n\n ********Nothing else follows********\n";
    
    return 0;

}