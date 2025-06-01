#pragma once
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class MyException : public exception {
private:
    string msg;

public:
    MyException(const string& message) : msg(message) {}

    // Nadpisanie metody what() z klasy std::exception
    const char* what() const noexcept override {
        return msg.c_str();
    }
};
