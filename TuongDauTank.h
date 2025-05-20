#pragma once
#include "Tuong.h"

class TuongDauTank : public Tuong {
    int giap;
public:
    TuongDauTank(string ten = "", int mau = 0, int cong = 0, int giap = 0);
    void nhap() override;
    void xuat() const override;
};