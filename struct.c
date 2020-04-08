#include <stdio.h>

struct student1 {   //student1이라는 구조체 생성
    char lastname;
    int id;
    char grade;
};

typedef struct {     //student2라는 별칭을가진 구조체 생성
    char lastname;
    int id;
    char grade;
} student2;

int main()
{
    struct student1 st1 = {'A',100,'A'};    //student1에 중괄호안에 있는 속성을 가진 st1을 만듦

    printf("st1.lastname = %c\n",st1.lastname); //st1에 lastname출력
    printf("st1.id = %d\n",st1.id); //st1에 id출력
    printf("st1.grade = %c\n",st1.grade);   //st1에 grade출력

    student2 st2={'B',200,'B'}; //studen2에 st2생성
    printf("st2.lastname = %c\n",st2.lastname); //st2에 lastname출력
    printf("st2.id = %d\n",st2.id);     //st2에 id출력
    printf("st2.grade = %c\n",st2.grade);       //st2에 grade출력

    student2 st3;   //studen2타입에 st3생성
    st3 = st2;  //st3에 st2의 값들을 대입
    printf("st3.lastname = %c\n",st3.lastname); //대입후 st3에 lastname출력
    printf("st3.id = %d\n",st3.id);         //st3에 id출력
    printf("st3.grade = %c\n",st3.grade);       //grade출력
    
    printf("===[software]===[2017038076]===[joonhee JO]\n");
    return 0;
}
