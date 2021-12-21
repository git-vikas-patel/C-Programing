#include<stdio.h>
void scinote();
void scinotes();
int main(int argc, char const *argv[])
{
    // printf("%s","Book");
    scinote();
    return 0;
}

void scinote(){
    double z = 5.667321E+01;
    printf("%-10.1e",z);

}
void scinotes(){
    double z = 5.667321E+01;
    printf("%10.1e",z);

}