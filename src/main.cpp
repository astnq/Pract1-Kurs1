#pragma once

#include "includes.h"

struct Dota {
    string* heroes[2];  
    char* roles[4]; 
};

struct json {
    string name; 
    int tuples_limit; 
    Dota dotas; 
};


void ReadFile(const string& filepath, string& output) {
    ifstream file(filepath);
    
  
    if (!file.is_open()) {
        cerr << "Error opening file: " << filepath << endl;
        return; 
    }

    string line;
    while (getline(file, line)) {
        output.append(line + "n"); 
    }

    file.close(); 
}

int main() {
    string filepath = "data.txt"; 
    string content;

    ReadFile(filepath, content);

    cout << "File Content:n" << content << endl;

    return 0;
}