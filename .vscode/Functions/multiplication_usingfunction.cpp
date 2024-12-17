//Mulpliplication of two no. using function TNRN ( no returntype no parameter )
#include<iostream>
using namespace std;
// void mult(){
//     int a, b, m;
//     cout<< "Enter two numbers :" <<endl;
//     cin>> a >> b;
//     m = a * b ;
//     cout<< m;
// }
// int main(){
//     mult();
//     return 0;

// }



//Mulpliplication of two no. using function TSRS ( witn returntype with parameter )

// int mult( int a, int b){
//     int c;
//     c = a * b;
//     return c;
// }
// int main(){
//     int x, y, m;
//     cout<< "Enter two integer :" << endl;
//     cin>>x >>y;
//     m = mult( x, y);
//     cout<< "Multiplication =" << m;
//     return 0;

// }



//Mulpliplication of two integer using function TSRN ( no returntype with parameter )

// void mult( int a, int b){
//     int c;
//     c = a * b;
//     cout<< c;
// }
// int main(){
//     int x, y;
//     cout<< "Enter two integer:" << endl;
//     cin>> x >> y;
//     mult( x, y);
//     return 0;
// }


//Mulpliplication of two integer using function TSRN ( with returntype without parameter )


int mult(){
    int a, b, c;
    cout<< "Enter two integer :" << endl;
    cin>> a >> b;
    c = a * b;
    return c;
}
int main(){
    int m;
    m = mult();
    cout<< m;
    return 0;
}


