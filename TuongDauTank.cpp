#include "TuongDauTank.h"

TuongDauTank::TuongDauTank(string ten, int mau, int cong, int giap)
    : Tuong(ten, mau, cong), giap(giap) {}

void TuongDauTank::nhap() {
    Tuong::nhap();
    cout << "Giáp: "; cin >> giap;
    cin.ignore();
}

void TuongDauTank::xuat() const {
    Tuong::xuat();
    cout << " | Giáp: " << giap;
}