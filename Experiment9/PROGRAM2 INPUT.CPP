#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;
    
    // Open the file using open()
    file.open("sample.txt");

    // Check if file opened successfully
    if (!file) {
        cout << "File is opening succesfully" << endl;
        return 1;
    }

    string line;

    // Read the file line by line
    while (getline(file, line)) {
        cout << line << endl;
    }

    // Close the file
    file.close();

    return 0;
}
