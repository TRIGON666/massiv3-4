// #1

//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	int n;
//	cin >> n;
//	int prev, cur, maximum = INT_MIN, minimum = INT_MAX;
//	int raz = 0, max_raz = INT_MIN;
//	cin >> prev;
//	maximum = max(prev, maximum);
//	minimum = min(prev, minimum);v	
//	for (int i = 1; i < n; ++i) {
//		cin >> cur;
//
//		if (prev <= cur)  {
//			maximum = max(cur, maximum);
//			minimum = min(cur, minimum);
//			raz = maximum - minimum;
//			
//		}
//		else {
//			maximum = max(cur, maximum);
//			minimum = min(cur, minimum);
//			raz = maximum - minimum;
//			maximum = cur;
//			minimum = cur;
//		}
//		max_raz = max(raz, max_raz);
//		prev = cur;
//
//	}
//	cout << max_raz;
//}


// #2
// ВАРИАНТ 1 ДЛЯ 0 И 1 ВМЕСТЕ
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU_ru");
//	int n;
//	int prev, cur, count = 1, max_count = INT_MIN;
//	cin >> n >> prev;
//	if (n <= 1000 && (prev == 0 || prev == 1)){
//		for (int i = 1; i < n; ++i) {
//			cin >> cur;
//			if (cur == 0 || cur == 1) {
//				if (prev == cur) {
//					count++;
//				}
//				else {
//					max_count = max(count, max_count);
//					count = 1;
//				}
//				prev = cur;
//			}
//		}
//	}
//	if (max_count > 1) cout << max_count;
//	else cout << "\n Извините, программа не сработала из-за: \n 1. Неверно введены числовые значения. \n 2. Нет максимальной последовательности или она равна 1. ";
//}


// ВАРИАНТ 2 ТОЛЬКО ДЛЯ 0

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU_ru");
//	int n;
//	int prev, cur, count = 1, max_count = INT_MIN;
//	cin >> n >> prev;
//	if (n <= 1000 && (prev == 0 || prev == 1)){
//		for (int i = 1; i < n; ++i) {
//			cin >> cur;
//			if (cur == 0 || cur == 1) {
//				if (prev == 0 && cur == 0) {
//					count++;
//				}
//				else {
//					max_count = max(count, max_count);
//					count = 1;
//				}
//				prev = cur;
//			}
//		}
//	}
//	if (max_count > 1) cout << max_count;
//	else cout << "\n Извините, программа не сработала из-за: \n 1. Неверно введены числовые значения. \n 2. Нет максимальной последовательности или она равна 1. ";
//}


// #3

//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	int cur, count = 0;
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		cur = i;
//		while (cur > 0) {
//			count++;
//			cur /= 10;
//		}
//	}
//	cout << count;
//}


// #4


// ВАРИАНТ 1 С SWITCH-CASE

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL,"RU_ru");
//    int n;
//    cout << "Введите число n: ";
//    cin >> n;
//    int num, digit;
//    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
//
//    for (int i = 1; i <= n; i++) {
//        num = i;
//        while (num > 0) {
//            digit = num % 10;
//            switch (digit) {
//            case 0: count0++; break;
//            case 1: count1++; break;
//            case 2: count2++; break;
//            case 3: count3++; break;
//            case 4: count4++; break;
//            case 5: count5++; break;
//            case 6: count6++; break;
//            case 7: count7++; break;
//            case 8: count8++; break;
//            case 9: count9++; break;
//            }
//            num /= 10;
//        } 
//    }
//
//    cout << "Количество цифры 0: " << count0 << endl;
//    cout << "Количество цифры 1: " << count1 << endl;
//    cout << "Количество цифры 2: " << count2 << endl;
//    cout << "Количество цифры 3: " << count3 << endl;
//    cout << "Количество цифры 4: " << count4 << endl;
//    cout << "Количество цифры 5: " << count5 << endl;
//    cout << "Количество цифры 6: " << count6 << endl;
//    cout << "Количество цифры 7: " << count7 << endl;
//    cout << "Количество цифры 8: " << count8 << endl;
//    cout << "Количество цифры 9: " << count9 << endl;
//}
//

// ВАРИАНТ 2 С IF

//#include <iostream>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "RU_ru");
//    int n;
//    cout << "Введите число n: ";
//    cin >> n;
//    int digit;
//    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
//
//    for (int i = 1; i <= n; i++) {
//        int num = i;
//        while (num > 0) {
//            digit = num % 10;
//            if (digit == 0) count0++;
//            if (digit == 1) count1++;
//            if (digit == 2) count2++;
//            if (digit == 3) count3++;
//            if (digit == 4) count4++;
//            if (digit == 5) count5++;
//            if (digit == 6) count6++;
//            if (digit == 7) count7++;
//            if (digit == 8) count8++;
//            if (digit == 9) count9++;
//            num /= 10;
//        }
//    }
//
//    cout << "Количество цифры 0: " << count0 << endl;
//    cout << "Количество цифры 1: " << count1 << endl;
//    cout << "Количество цифры 2: " << count2 << endl;
//    cout << "Количество цифры 3: " << count3 << endl;
//    cout << "Количество цифры 4: " << count4 << endl;
//    cout << "Количество цифры 5: " << count5 << endl;
//    cout << "Количество цифры 6: " << count6 << endl;
//    cout << "Количество цифры 7: " << count7 << endl;
//    cout << "Количество цифры 8: " << count8 << endl;
//    cout << "Количество цифры 9: " << count9 << endl;
//}