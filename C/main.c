

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



// 구구단
void gugudan(int su);

int main() {

   int dan = 1;

   gugudan(dan);
}

void gugudan(int su) {
   int i;
    while(su < 10) {
      su++;
      for (i = 1; i <= 9; i++)
      {

        printf("%d * %d = %d\n", su, i, su * i);
      }
    }
 }



// 대각선 하트
//  int main(){
//   int x, y;
//   for (x = 1; x <= 5; x++) {
//     for (y = 1; y <= 5; y++) {
//       if (x == y) {
//       printf("♡");
//       } else {
//       printf("▩");
//       }
//     }
//     printf("\n");
//   }
// }




// int main () {
//   int month = 13;
//   printf("몇월입니까: %d \n", month);
  

//   if (month >= 3 && month <= 5) {
//     printf("봄입니다\n");
//   } else if (month >= 6 && month <= 8) {
//       printf("여름입니다\n");
//     } else if (month >= 9 && month <= 11) {
//       printf("가을입니다\n");
//     } else if (month == 12 || month == 1 || month == 2) {
//       printf("겨울입니다\n");
//     }
//     else
//     {
//       printf("그런 월은 없습니다\n");
//     }
// }



// 달팽이가 올라간 높이 구하기
// int main () {
//   int try = 1;
//   int slide_down;
//   int go_up = 5;
//   int meter = 317;
//   int current = 0;

//   while(current <= 317) {

//     for (try = 1; current <= 317; try++)
//     {
//       if (current >= 50) {
//         slide_down = 1;
//         current = current + go_up - slide_down;
//         printf("[%d] ", try);
//         printf("달팽이가 이동한 높이 %d\n", current);
//       } else if (current <= 51) {
//         slide_down = 2;
//         current = current + go_up - slide_down;

//         printf("[%d] ", try);
//         printf("달팽이가 이동한 높이 %d\n", current);
//       }
//     }
//     printf("%d회 만에 탈출했습니다\n", try);
//     break;
//   }
// }




//로또번호 생성기

//void SelectionSort(int arr[], int n)
//{
//    int i, k, p, temp;
//    for (i = 0; i < n - 1; i++) {
//        p = i;
//        for (k = i + 1; k < n; k++) {
//            if (arr[k] < arr[p]) p = k; // Ascending sort(오름차순 정렬)
//        }
//        temp = arr[i];
//        arr[i] = arr[p];
//        arr[p] = temp;
//    }
//}
//
//int main()
//{
//    int  lotto[7] = { 0 };   // 나머지 5개에는 0으로 채움 --> 6개 모두 0으로 초기화 된다.
//    int i = 0, n = 0;
//    srand((unsigned)time(NULL));  // 매번 다른 수를 생성하도록 랜덤함수 초기화
//
//    while (n < 7)
//    {
//        //  rand() % 45 : 0부터 44까지 의 난수를 생성한다.
//        //  rand() % 45  + 1 : 1부터 45까지의 난수를 생성한다.
//
//        int r = rand() % 45 + 1;  // 1~45 사이의 랜덤 수 생성, 중복 가능
//
//        for (i = 0; i < n; i++)         // 이미 생성된 개수 만큼 반복
//            if (lotto[i] == r) break;     // 이미 생성된 번호인지(중복수) 검사한다.
//
//        if (n == i) lotto[n++] = r;            // 중복수가 아닐때에만 n위치에 생성된 수를 기억시킨다.
//    }
//
//    // 크기순으로 정렬한다.
//    SelectionSort(lotto, 7);
//
//    // 생성된 번호 출력한다.
//    for (i = 0; i < 7; i++)
//        printf("%d\n", lotto[i]);
//
//    return 0;
//}

  // for (i = 0; i < 7; i++) {
  //   int r = rand() % 45 + 1;

  //   for (temp = 0; temp < i; temp++){
  //     if (lotto[temp] == r)
  //       break;
  //     if (i == temp)
  //       lotto[i++] = r;
  //   }
  // }


