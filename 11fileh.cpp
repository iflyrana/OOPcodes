#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFile, destinationFile;
    ifstream inputFile;
    ofstream outputFile;

    // Get the source file name from the user
    cout << "Enter the source file name: ";
    cin >> sourceFile;

    // Open the source file
    inputFile.open(sourceFile.c_str());

    if (!inputFile) {
        cout << "Error opening the source file." << endl;
        return 1;
    }

    // Get the destination file name from the user
    cout << "Enter the destination file name: ";
    cin >> destinationFile;

    // Open the destination file
    outputFile.open(destinationFile.c_str());

    if (!outputFile) {
        cout << "Error opening the destination file." << endl;
        inputFile.close();
        return 1;
    }

    // Copy the contents of the source file to the destination file
    char ch;
    while (inputFile.get(ch)) {
        outputFile.put(ch);
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    cout << "File copied successfully." << endl;

    return 0;
}
