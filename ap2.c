#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];    //배열선언
    int *plist[5];   //포인터배열선언

    list[0] = 10;   //list 0번째에 10을 넣어줌
    list[1] = 11;   //list 1번째에 11을 넣어줌

    plist[0] = (int*)malloc(sizeof(int));   //plist[0]에 heap영역에서 4바이트크기의 정수형 메모리 공간 할당

    printf("list[0] = %d\n", list[0]);  //list[0]의 값 출력
    printf("adress of list = %p\n", list);  //list의 주소 출력
    printf("adress of list[0] = %p\n", &list[0]);   //list[0]의 주소 출력
    printf("adress of list+0 = %p\n", list + 0);    //list+0의 주소 출력
    printf("adress of list+1= %p\n", list + 1);     //list+1의 주소 출력
    printf("adress of list+2 = %p\n", list + 2);    //list+2의 주소 출력
    printf("adress of list+3 = %p\n", list + 3);    //list+3의 주소 출력
    printf("adress of list+4 = %p\n", list + 4);    //list+4의 주소 출력
    printf("adress of list[4] = %p\n", &list[4]);   //list[4]의 주소 출력

    printf("---[SoftWare]---[2017038076]---[joonhee]");

    free(plist[0]); //heap영역에 할당된 메모리해제
}
