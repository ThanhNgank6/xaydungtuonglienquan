#include "TuongSatThuong.h"

TuongSatThuong::TuongSatThuong(string ten, int mau, int cong, int crit)
    : Tuong(ten, mau, cong), tiLeChiMang(crit) {}

void TuongSatThuong::nhap() {
    Tuong::nhap();
    cout << "Tỉ lệ chí mạng (%): "; cin >> tiLeChiMang;
    cin.ignore();
}

void TuongSatThuong::xuat() const {
    Tuong::xuat();
    cout << " | Chí mạng: " << tiLeChiMang << "%";
}