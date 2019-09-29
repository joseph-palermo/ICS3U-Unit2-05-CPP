// Copyright (c) 2019 Joseph Palermo All rights reserved
//
// Created by: Joseph Palermo
// Created on: September 2019
// This program shows how global and local variables work

#include <iostream>

// global variable
int variableX = 20;

void localVariable() {
    // this shows what happens with local variables

    int variableX = 50;
    int variableY = 51;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
               << " + " << variableY << variableZ << std::endl;
}


void globalVariable() {
    // this shows what happens with global variables

    variableX = variableX + 2;
    int variableY = 20;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
               << " + " << variableY << variableZ << std::endl;
}

int main() {
    // this function calls local and global

    localVariable();
    globalVariable();
}
