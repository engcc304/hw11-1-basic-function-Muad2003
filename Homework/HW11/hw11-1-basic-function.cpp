/*
    รับค่าจากผู้ใช้จำนวน 3 ค่า และสร้างฟังก์ชันในการหาผลรวมของจำนวน 3 ค่านี้ และแสดงผลลัพธ์มายังหน้าจอ พร้อมระบุชื่อฟังก์ชันที่เรียกใช้งาน เช่น รับค่า 3, 5, 6 จะแสดงผลลัพธ์ว่า 14 (Calculate by Additional Function)

    Test case:
        Input 1 : 
            3
        Input 2 : 
            4
        Input 3 : 
            5
    Output:
        Summation = 12 (Calculate by Additional Function)
*/

#include <stdio.h>

int AdditionalFunction (int a , int b , int c ) {
    int sum = a + b + c ;
    return sum ;
} // end Additional Function

int main () {
    
    int num[ 2 ] ;
    // รับค่า
    for ( int i = 0 ; i < 3 ; i++ ) {
        printf ( "Input %d :\n", i + 1 ) ;
        scanf ( "%d", &num[ i ] ) ;
    } // end for
     
    // ส่งค่าไปฟังก์ชั่น
    int sum = AdditionalFunction( num[ 0 ] , num[ 1 ] , num[ 2 ] ) ;

    printf ( "Summation = %d (Calculate by Additional Function)", sum ) ;
    return 0 ;
} // end main