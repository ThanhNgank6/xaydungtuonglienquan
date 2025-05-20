#include <iostream>
#include "Tuong.h"
#include "TuongSatThuong.h"
#include "TuongDauTank.h"
using namespace std;

void TieuDe() {
    cout << "\033[1;36m==================== TƯỚNG LIÊN QUÂN MOBILE ====================\033[0m" << endl;
    cout << "\033[1;33m       Quản lý - Hiển thị - Đánh giá sức mạnh tướng\033[0m" << endl;
    cout << "---------------------------------------------------------------" << endl;
}

int main() {
    TieuDe();
    Tuong* ds[10];
    int n = 0;
    int chon;
    do {
        cout << "\n1. Nhập tướng sát thương";
        cout << "\n2. Nhập tướng đấu tank";
        cout << "\n3. Hiển thị tất cả tướng";
        cout << "\n0. Thoát";
        cout << "\nChọn: "; cin >> chon;
        cin.ignore();
        switch (chon) {
        case 1:
            ds[n] = new TuongSatThuong();
            cin >> *ds[n]; n++;
            break;
        case 2:
            ds[n] = new TuongDauTank();
            cin >> *ds[n]; n++;
            break;
        case 3:
            TieuDe();
            for (int i = 0; i < n; i++) {
                cout << *ds[i] << endl;
            }
            break;
        }
    } while (chon != 0);
    return 0;
}