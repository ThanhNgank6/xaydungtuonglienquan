#pragma once
#include "Tuong.h"

class TuongSatThuong : public Tuong {
    int tiLeChiMang;
public:
    TuongSatThuong(string ten = "", int mau = 0, int cong = 0, int crit = 0);
    void nhap() override;
    void xuat() const override;
};