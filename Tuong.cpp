#include "Tuong.h"

Tuong::Tuong(string ten, int mau, int cong) : ten(ten), mau(mau), cong(cong) {}

void Tuong::nhap() {
    cout << "Tên tướng: "; getline(cin, ten);
    cout << "Máu: "; cin >> mau;
    cout << "Công: "; cin >> cong;
    cin.ignore();
}

void Tuong::xuat() const {
    cout << "Tên: " << ten << " | Máu: " << mau << " | Công: " << cong;
}

istream& operator>>(istream& in, Tuong& t) {
    t.nhap();
    return in;
}

ostream& operator<<(ostream& out, const Tuong& t) {
    t.xuat();
    return out;
}