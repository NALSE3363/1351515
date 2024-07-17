//#include <stdio.h>
//
//void main()
//{
//	int aa[100], bb[100];
//	int i;
//
//	for (i = 0; i < 100; i++)
//	{
//		aa[i] = i * 2;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		bb[i] = aa[99 - i];
//	}
//	printf("bb[0]는 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
//}
//
//
//#include<stdio.h>
//
//void main()
//{
//	int aa[] = { 10,20,30,40,50 };
//	int count;
//
//	count = sizeof(aa) / sizeof(int);
//
//	printf("배열 aa[]의 요소의 개수는 %d 입니다\n", count);
//}

//#include<stdio.h>
//
//void main()
//{
//	char ss[8] = "Basic-C";
//	int i;
//
//	ss[5] = '#';
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("ss[%d] ==> %c\n", i, ss[i]);
//	}
//	printf("문자열배열 ss ==> %s\n", ss);
//}

//#include<stdio.h>
//
//void main()
//{
//	int a[5] = { 1,3,6,4,2 };
//
//	int max = a[0];
//	int min = a[0];
//	int sum = 0;
//	double avg = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (max < a[i])
//		{
//			max = a[i];
//		}
//		if (min > a[i])
//		{
//			min = a[i];
//		}
//		sum += a[i];
//	}
//	avg = (double)sum / 5;
//	printf("%d\n", max);
//	printf("%d\n", min);
//	printf("%d\n", sum);
//	printf("%.2lf\n", avg);
//}

#include<stdio.h>

// 주사위를 열 번 굴려서 나온 값이 저장된 a[10];
// 각 주사위 눈이 나온 횟수를 배열에 넣어 출력
	// 10번 반복 시도 
	// 1~6 i 반복을 돌려서 a[i] == i와 같으면 값 누적
/*
  출력결과
  눈금 1 = 3회
  눈금 2 = 1회
  눈금 3 = 2회
  눈금 4 = 2회
  눈금 5 = 1회
  눈금 6 = 1회

*/
//void main()
//{
//	int a[10] = { 1,1,4,5,6,2,3,3,4,1 }; // 결과값
//	//int dice[6] = { 1,2,3,4,5,6 }; // 주사위
//	int count[7] = {};
//
//	for (int j = 0; j < 10; j++)
//	{
//		count[a[j]]++; // value를 대신해서 dice사용
//	}
//	for (int i = 1; i <= 6; i++)
//	{
//		printf("%d 횟수는 %d\n", i, count[i]);
//	}
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char arr[2][3] = { '1', '2', '3', '4', '5', '6' };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { {1,2,3}, {4,5,6} };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//

//#include<stdio.h>
//
//void main()
//{
//	int arr2d[5][4] = {
//		{662,7,4,74},
//		{8,396,299,95},
//		{66,73,86,0},
//		{116,26,586,42},
//		{84,7,41,11}
//	};
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf("%3d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//
//void main()
//{
//	int arr2d[3][3] = {
//		{2,4,6}, {8,10,12}, {14,16,18}
//	};
//	int arr3d[3][3] = {};
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("\n");
//	/*for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			arr3d [i][j] = arr2d[j][i];
//		}
//	}*/
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr2d[j][i]);
//		}
//		printf("\n");
//	}
//
//}

//#include <stdio.h>
//
//void main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			data[i][j] = i + j;
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf(" %3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//문제2

//#include <stdio.h>
//
//void main()
//{
//	const int m = 5;
//	int k = 1;
//	long data[m][m];
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			data[i][j] =k++;
//
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf(" %3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//void main()
//{
//	const int m = 5;
//	int k = 1;
//	long data[m][m];
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			data[i][j] = k++;
//
//		}
//	}
//	for (int i = m-1; i >= 0; i--)
//	{
//		for (int j = m-1; j >= 0; j--)
//		{
//			printf(" %3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//void main()
//{
//	const int m = 5;
//	long data[m][m];
//	int k = 1;
//	long onedata[m*m];
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			data[i][j] = k++;
//		}
//	}
//	k = 0;
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			onedata[k++] = data[i][j];
//		}
//	}
//	
//
//	for (int i = 0; i < m * m; i++)
//	{
//		printf("%3d ", onedata[i]);
//	}
//
//}

//#include <stdio.h>
//
//void main()
//{
//	int arr[10];
//	int n;
//	char data[10][10] = {};
//	scanf("%d", &n);//4 2 4 3 1
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		for (int i = 0; i < arr[j]; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//}
//#include <stdio.h>
//
//void main()
//{
//	int arr[10];
//	int n;
//	char data[10][10] = {};
//	scanf("%d", &n);//4 2 4 3 1
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		for (int i = 0; i < arr[j]; i++)
//		{
//			data[i][j] = '*';
//		}
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if(data[j][i] == 0)printf(" ");
//			else printf("%c", data[j][i]);
//		}
//		printf("\n");
//	}
//}

//
//#include <stdio.h>
//
//void main()
//{
//	int b = 100;
//	int* pB = &b;
//
//	printf("b = %d\n", b); // 값 
//	printf("b = %x\n", &b); // 주소
//	printf("b = %d\n", *pB); // 값
//	printf("b = %x\n\n", pB); // 주소
//}

//#include <stdio.h>
//
//void main()
//{
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC)); //
//
//	printf("*pA의 크기 : %d byte\n", sizeof(*pA)); //값 
//	printf("*pB의 크기 : %d byte\n", sizeof(*pB)); //값
//	printf("*pC의 크기 : %d byte\n", sizeof(*pC)); //값
//}

//#include <stdio.h>
//
//void main()
//{
//	char str[] = "programing";
//	char* ptr1, *ptr2;
//
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("두 포인터 간의 차는 %d 입니다\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n\n", *(ptr1 + 3));
//
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int* numPtr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numPtr = &num1;
//	printf("%d\n", *numPtr);
//	numPtr = &num2;
//	printf("%d\n", *numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number[2] = { 1,2 };
//	void* p = number;  // 주소
//	printf("%d\n", *(int*)p); 
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo; 
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf(">%d-%d", *ptrFibo4, *ptrFibo1);
//	printf(">> %d\n", ptrFibo4 - ptrFibo1); // 칸수
//
//	printf("%d ", ptrFibo[1]); // 값
//	printf("%d ", ptrFibo1[0]);
//	printf("%d ", ptrFibo4[-1]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int numArr[5] = { 11,22,33,44,55 };
//	int* numPtrA;
//	void* ptr;
//
//	numPtrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n",*(numPtrA-1));
//	printf("%d\n", *((int*)ptr+4));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = {};
//	int* ptr;
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	ptr = arr;
//	ptr += 2;
//	printf("%d", *ptr);
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { {1,2,3}, {4,5,6} };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//	pt--;
//	*pt++ += 20;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "기울어진 운동장 : 애초부터 공정한 경쟁을 할 수 없는 상황을 비유적으로 이르는 말.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//}


//#include <stdio.h>
//
//void main()
//{
//	char ch;
//	char* p;
//
//	ch = 'A';
//	p = &ch;
//
//	printf("ch가 가지고 있는 값: ch ==> %c\n", ch);
//	printf("ch의 주소 (address): &ch ==> %d\n", &ch);
//	printf("p가 가지고 있는 값 : p ==> %d\n", p);
//	printf("p가 가리키는 곳의 실제 값 : *p ==> %c\n", *p);
//}

//#include <stdio.h>
//
//void main()
//{
//	char ch;
//	char* p;
//	char* q;
//
//	ch = 'A';
//	p = &ch;
//	q = p;
//
//	*q = 'Z';
//	printf("ch가 가지고 있는 값 : ch ==> %c \n\n", ch);
//}

//#include <stdio.h>
//
//void main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//
//	p = s;
//
//	printf("&s[3] ==> %s\n", &s[3]);
//	printf("p+3 ==> %s\n\n", p + 3);
//
//	printf("s[3] ==> %c\n", s[3]);
//	printf("*(p+3) ==> %c\n", *(p + 3));
//}

//#include <stdio.h>
//
//void main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//	int i;
//
//	p = s;
//
//	for (i = sizeof(s) - 2; i >= 0; i--)
//	{
//		printf("%c", *(p+i));
//	}
//	printf("\n");
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b, tmp;
//	int* p1, * p2;
//
//	printf("a값 입력 : ");
//	scanf("%d", &a);
//	printf("b값 입력 : ");
//	scanf("%d", &b);
//
//	p1 = &a;
//	p2 = &b;
//
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//
//	printf("바뀐 값 a = 는 %d, b는 %d\n", a, b);
//}

//#include <stdio.h>
//
//void main()
//{
//	int s[10] = { 1,0,3,2,5,4,7,6,9,8 };
//	int tmp;
//	int i, k;
//
//	int* p;
//
//	p = s;
//
//	printf("정렬 전 배열 s ==> ");
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//
//	for (i = 0; i < 9; i++)
//	{
//		for (k = i + 1; k < 10; k++)
//		{
//			if (*(p + i) > *(p + k)) 
//			{
//				tmp = *(p + i);
//				*(p + i) = *(p + k);
//				*(p + k) = tmp;
//			}
//		}
//	}
//
//	printf("정렬 후 배열 s ==> ");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "기울어진 운동장 : 어느 한 쪽으로 기울어진 운동장에서는 아무리 뛰어난 사람이라도 경기에서 이길 수 없다는 데서 유래.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';
//	str[23] = 'b';
//	str[25] = 'c';
//	printf("%s\n\n", ptr);
//}

#include <stdio.h>

int main()
{
	const int value = 10;
	int arr[value] = {};
	
	for (int i = 0; i < value; i++)
	{
		arr[i] = i+1;
	}
	int* p;
	p = &arr[9];
	//for문안에 배열안쓰고 문제2번 풀기
	for (int i = value; i > 0; i--)
	{
		printf("%d ", *p);
		p-=1;
	}
}