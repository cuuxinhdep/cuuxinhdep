cmake_minimum_required(VERSION 3.27)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c
        chapter01/vidu01.c
        "chapter02/convert degree.c"
        "chapter02/convert degree.c"
        chapter03/sum.c
        "chapter04/binh phuong.c"
        "chapter06_toan tu/area and perimeter.c"
        chapter05_circle/salary.c
        "chapter06_toan tu/cong3so.c"
        "chapter06_toan tu/thetichhinhtru.c"
        "chapter06_toan tu/tinhbieuthuc.c"
        "chapter04/circle.c"
        "chapter06_toan tu/tinh_luong_thuc_lanh.c"
)
