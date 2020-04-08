# Tutorial-Chungbuk
for the Tutorial
#include <stdio.h>
#include <stdlib.h>

void main()
{
   int list[5]; //정수형 배열 선언
   int *plist[5] = { NULL }; //int형 포인터 5개선언, NULL로 초기화

   plist[0] = (int*)malloc(sizeof(int)); //plist0번째에 heap영역 4바이트크기위 정수형 메모리공간 할당

   list[0] = 1; //0번째에 1넣어줌
   list[1] = 100; //1번쨰에 100넣어줌

   *plist[0] = 200; //포인터 배열[0]이 가리키는 곳에 200넣어줌

   printf("value of list[0] = %d\n", list[0]); //list[0]값 출력
   printf("address of list[0] = %p\n", &list[0]); //list[0]주소 출력
   printf("value of list = %p\n", list); //list값 출력
   printf("address of list = %p\n", &list); //list주소 출력
   
   printf("---------------------------\n");
   printf("value of list[1] = %d\n", list[1]); //list[1]값 출력
   printf("address of list[1] = %p\n", &list[1]); //list[1]주소 출력
   printf("value of *(list+1) = %d\n", (list + 1)); //(list+1)의 값 역참조해서 출력
   printf("address of list+1 = %p\n", list + 1); //list+1의 주소 출력 

   printf("---------------------------\n");
   printf("value of *plist[0]  = %d\n", *plist[0]); //plist[0]의 값 역참조하여 출력
   printf("&plist[0] = %p\n", &plist[0]);   //plist[0]의 주소 출력
   printf("&plist = %p\n", &plist); //plist의 주소출력
   printf("plist = %p\n", plist);   //plist의 값 출력
   printf("plist[0] = %p\n", plist[0]); //plist[0]의 값출력
   printf("plist[1] = %p\n", plist[1]); //plist[1]의 값출력
   printf("plist[2] = %p\n", plist[2]); //plist[2]의 값출력
   printf("plist[3] = %p\n", plist[3]); //plist[3]의 값출력
   printf("plist[4] = %p\n", plist[4]); //plist[4]의 값출력
   printf("----[Software]----[2017038076]----[joonhee JO]");

   free(plist[0]); //heap영역에 할당된 메모리 해제
}
