// #include <stdio.h>

// int main(void) {
//   //반복문의 종류!
//   // while , for
//   // while문 문법
//   // while(조건) { 실행할 내용 }
//   // while문은 조건이 참이면 실행되는 반복문
//   // for문 문법
//   // for(초기값; 조건; 증감식) { 실행할 내용 }
//   // for문은 조건이 참이 아닐 일때까지

//   int i = 0; 

//   while(i < 10) {
//     printf("10번 반복 %d \n", i);
//     i++; //while문은 반복횟수를 카운트 할 때 외부에 변수를 선언 후 사용
//   }

//   for(int k = 0; k < 10; k+) { // for문은 반복횟수를 카운트 할 때 for문
//                                 // 내에 변수를 선언

//                                 // 조건에 연산자를 사용
//     printf("10번 반복 %d \n", k);
//   }

//   for(int n = 0; n < 10; n++) {  // 세로 10번 생성
//                                  // for문이 1번 실행되면 n에다 1을 더함

//     for(int m = 0; m < n; m++) { // 가로 생성
//                                  // 가로 생성 for 문의 조건 = 변수 m의 n보다 작을 때
//       // *
//       // **
//       // ***

//       printf("* ");
//     }
//     printf("\n");


//   }
// }