#include <stdio.h>

void print1(int *ptr, int rows);    //print1함수 선언

int main()
{
    int one[]={0,1,2,3,4};  //int형 배열 one선언 후 값 할당

    printf("one = %p\n",one);   //one의 값(주소) 출력
    printf("&one = %p\n",&one); //one의 주소 출력
    printf("&one[0] = %p\n",&one[0]);   //one의 0번째 주소 출력

    print1(&one[0],5);  //함수호출/포인터는 one[0]을 가리킴,rows에 5가 들어감

    return 0;
}
void print1(int *ptr, int rows) //print1함수
{
    int i;  
    printf("Address\tcontents\n");
    for(i=0; i<rows; i++)   //아래를 5번반복
        printf("%p  %5d\n",ptr+i,*(ptr+i)); //ptr+i의 값(주소)과 ptr+i의 값 역참조하여 출력 
    printf("\n");
    printf("---[software]---[2017038076]---[Joonhee Jo]");
}
