// Day2-OperatorTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int my_age = 50;
    int your_age = 21;
    int total_age;

    total_age = my_age + your_age;
    printf("나이의 합은:%d\n", total_age);

    int diff_age = my_age - your_age;
    printf("나이 차는:%d\n", diff_age);

    float aver_age = total_age / 2.0f;
    printf("평균 나이는:%f\n", aver_age);

    my_age++;
    printf("1년 후 내 나이는:%d\n", my_age);
    if (my_age > your_age) {
        printf("내가 연장자이다.ㅋㅋ\n");
    }
    else {
        printf("아니야~\n");
    }
    int multi_age = my_age * your_age;
    printf("나이를 곱하면 %d\n", multi_age);

    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
