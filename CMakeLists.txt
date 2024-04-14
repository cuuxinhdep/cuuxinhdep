cmake_minimum_required(VERSION 3.27)
project(cuuxinhdep C)

set(CMAKE_C_STANDARD 11)

add_executable(cuuxinhdep
        chapter01/vidu01.c
        "chapter02/convert degree.c"
        chapter03/sum.c
        "chapter04/binh phuong.c"
        chapter04/circle.c
        chapter05_circle/salary.c
        "chapter06_toan tu/area and perimeter.c"
        "chapter06_toan tu/cong3so.c"
        "chapter06_toan tu/thetichhinhtru.c"
        "chapter06_toan tu/tinh_luong_thuc_lanh.c"
        "chapter06_toan tu/tinhbieuthuc.c"
        chapter07/sizeof_demo.c
        main.c
        session6/tinhbieuthuc.c
        session6/tinhgiatri.c
        session6/timgiatri_gan.c
        session6/quydoidonvi.c
        session6/iresult.c
        session5/nhap_xuat.c
        session5/ASCII.c
        "session5/bang luong.c"
        session5/ho_ten.c
        session7/bai1.c
        session7/bai2.c
        session7/bai3.c
        session7/bai4.c
        chapter07/atm_basic.c
        session7/bai5.c
        session8/bai1.c
        session8/bai2.c
        session8/bai3.c)
