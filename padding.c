#include <stdio.h>

struct student {    //student 구조체 생섵
    char lastname[13];  //char형은 1바이트이기에 13을곱한 13바이트값
    int studentid;  //int형은 4바이트
    short grade;    //short형은 2바이트
};

int main()
{
    struct student pst;     //구조체에 pst만듦

    printf("size of student = %ld\n",sizeof(struct student));   //student라는 구조체의 크기 출력
    printf("size of int = %ld\n",sizeof(int));          //int형의 크기 출력
    printf("size of short = %ld\n",sizeof(short));      //short형의 크기 출력

    printf("[software]---[2017038076]---[joonhee JO]");
    return 0;
}
