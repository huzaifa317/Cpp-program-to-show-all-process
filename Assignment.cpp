#include <iostream>
using namespace std;

int main() {
    cout << "Listing all processes...\n";
    system("tasklist"); 
    cout << "\nEnter the PID of the process to terminate: ";
    string pid;
    cin >> pid;

    string kill = "taskkill /PID " + pid + " /F";
    cout << "\nAttempting to terminate process with PID: " << pid << "...\n";
    system(kill.c_str());

    cout << "Process terminated (if it existed).\n";
    return 0;
}
