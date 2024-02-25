#include <iostream>
using namespace std;

int main() {
	int a[5];
	int count = 0;
	int answer = 0;

	for (int i = 0; i < 5; i++)
		cin >> a[i];

	while(true) {
		answer++;
		for (int i = 0; i < 5; i++) {
			if (answer % a[i] == 0)
				count++;
		}
		if (count >= 3)
				break;
		count = 0;
	}
	cout << answer;
}

// 처음 시도한 방법
// 2,3,4번째 곱한 값만이 공배수가 될때 무슨 이유인지 안됨
/* ex) 97 73 79 83 89
      -> answer: 478661 (73*79*83)
	  -> output: 559399
*/

//#include <iostream>
//using namespace std;
//
//int main() {
//	int a[5];
//	int x = 1;
//	int n1 = 0, n2 = 0, n3 = 0;
//	int count1 = 0, count2 = 0, count3 = 0;	
//
//	for (int i = 0; i < 5; i++)
//		cin >> a[i];
//	while (true) {
//		n1 = a[0] * x;
//		n2 = a[1] * x;
//		n3 = a[2] * x;
//		for (int i = 0; i < 5; i++) {
//			if (n1 % a[i] == 0)
//				count1++;
//			if (n2 % a[i] == 0)
//				count2++;
//			if (n3 % a[i] == 0)
//				count3++;
//		}
//		if (count1 >= count2 && count1 >= count3 && count1 >= 3) {
//			cout << n1;
//			break;
//		}
//		else if (count2 >= count1 && count2 >= count3 && count2 >= 3) {
//			cout << n2;
//			break;
//		}
//		else if (count3 >= count1 && count3 >= count2 && count3 >= 3) {
//			cout << n3;
//			break;
//		}
//
//		count1 = 0;
//		count2 = 0;
//		count3 = 0;
//		x++;
//
//	}
//}