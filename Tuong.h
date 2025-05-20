#pragma once
#include <iostream>
#include <string>
using namespace std;

class Tuong {
protected:
    string ten;
    int mau;
    int cong;
public:
    Tuong(string ten = "", int mau = 0, int cong = 0);
    virtual ~Tuong() {}
    virtual void nhap();
    virtual void xuat() const;
    friend istream& operator>>(istream& in, Tuong& t);
    friend ostream& operator<<(ostream& out, const Tuong& t);
};