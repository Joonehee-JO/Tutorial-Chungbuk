#include <stdio.h>
#define MAX_SIZE 100

float sum(float[],int); //sum함수 선언
float input[MAX_SIZE],answer;   //전역변수선언
int i;  //전역변수 선언
void main()
{
    for(i=0; i<MAX_SIZE; i++)   //100번 반복하라
        input[i]=i; //i번째에 i값 할당(i는 1씩늘어남)
    
    printf("address of input = %p\n",input);    //input배열 주소 출력

    answer=sum(input,MAX_SIZE); //sum함수 호출/answer에 리턴된값 할당
    printf("The sum is %f\n",answer);   //answer의 값 출력
    printf("---[Software]---[2017038076]---[joonheeJO]");
} 
float sum(float list[],int n)   //sum함수/list에는 input의 주소가 들어가고 n에는 100이들어감
{
    printf("value of list = %p\n",list);    //list의 값 출력
    printf("address of list = %p\n\n",&list);   //list의 주소 출력

    int i;  //int형 i
    float tempsum =0;   //float형 tmpsum
    for(i=0; i<n; i++)  //100번 반복
        tempsum += list[i]; //i번째에 있는 값을 더한다.
    return tempsum; //tempsum값 리턴
}
