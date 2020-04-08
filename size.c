#include <stdio.h>
#include <stdlib.h>

void main()
{
    double **x;    //double형 이중포인터 선언

    printf("sizeof(x) = %d\n",sizeof(x));  //x의사이즈 출력
    printf("sizeof(*x) = %d\n",sizeof(*x));    //*x의 사이즈 출력
    printf("sizeof(**x) = %d\n",sizeof(**x));  //**x의 사이즈 출력
    printf("---[2017038076]---[Joonhee JO]\n");
}
