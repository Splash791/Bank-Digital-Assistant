#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

std::string welcome(std::string option){
    cout << endl;
    cout << "Welcome to Everest Bank. I am Rainier your Digital Assistant. How can I be of assitance today? (Please Choose From The Options Listed Below)" << endl;

    do{
    cout << endl;
    cout << "A: Check My Balance." << endl;
    cout << "B: Deposit Money." << endl;
    cout << "C: Pay My Bills." << endl;
    cout << "D: Transfer Money." << endl;
    cout << "E: Send Money." << endl;
    cout << "F: Open a CD Account." << endl;
    cout << endl;
   
    getline(cin, option); // use get line for it to read the whole line. ex: "check my balance"

    if(option != "A" &&  option != "Check My Balance" && option != "check my balance" && option != "a" &&
    option != "B" &&  option != "Deposit Money" && option != "deposit money" && option != "b" &&
    option != "C" &&  option != "Pay My Bills" && option != "pay my bills" && option != "c" && 
    option != "D" &&  option != "Transfer Money" && option != "transfer money" && option != "d" && 
    option != "E" &&  option != "Send Money" && option != "send money" && option != "e" && 
    option != "F" &&  option != "Open A CD Account" && option != "open a cd account" && option != "f"){
        cout << endl;
        cout << "That Is Not A Valid Option. Please choose from an option listed below." << endl;
        cout << "Valid Options can be typed as 'A', 'a', 'Check My Balance', check my balance'." << endl;
        cout << endl;
    }
    }while(option != "A" &&  option != "Check My Balance" && option != "check my balance" && option != "a" &&
    option != "B" &&  option != "Deposit Money" && option != "deposit money" && option != "b" &&
    option != "C" &&  option != "Pay My Bills" && option != "pay my bills" && option != "c" && 
    option != "D" &&  option != "Transfer Money" && option != "transfer money" && option != "d" && 
    option != "E" &&  option != "Send Money" && option != "send money" && option != "e" && 
    option != "F" &&  option != "Open A CD Account" && option != "open a cd account" && option != "f");

    return option;
}

int main(){
    std::string option;
    option = welcome(option);
}