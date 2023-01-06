#include <stdio.h>

bool basic_demo(int i){
    auto ch='A'; //c++11
    auto n = 100;
    auto x = 5.6f;//type inference
    double y = 6.7;//IEEE notation for double
    long int m = 10000000;
    auto z = 6.7e520;//scientific notation
    auto p = z;
    auto q = p+2;//cant infer
    unsigned int r;//binary notation hence can use MSB
    bool status = true;
    printf("%c %d %f %ld %l",i,x,y,m,z);
    status = false;
    ch = 5.7;//downgrade float to char
    y = x; //upgrade x to double precision
    printf("\n size of :%u %u %u %u %u %u %u",sizeof(bool), sizeof(ch), sizeof(x),sizeof(int),sizeof(float), sizeof(double),sizeof(long));
    return status;
}

void display()
{
    printf("Hello World");
}

int main() {
   
    basic_demo(10);
}
