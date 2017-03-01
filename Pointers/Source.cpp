// Question 5 A //
//#include <iostream>
//
//using namespace std;
//
//void RevString(char* text)
//{
//	int length = strlen(text);
//	char* start = text;
//	char* end = start + (length - 1);
//
//	while (start != end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		++start;
//		--end;
//	}
//}
//
//void main()
//{
//	char text[] = { "Hello_Cat" };
//	RevString(text);
//
//	cout << text;
//
//	system("pause");
//}
// Question 5 A //

// Question 5 B //
//#include <iostream>
//
//using namespace std;
//
//int CountEven(int* num, int nums)
//{
//	int even = 0;
//
//	for (int i = 0; i < nums; i++)
//	{
//		if (*(nums + i) % 2 == 0)
//		{
//			even++;
//		}
//	}
//
//	cout << even;
//
//	return 0;
//}
//
//void main()
//{
//	int num[4] = { 1,2,3,4 };
//	CountEven(num, 4);
//
//	system("pause");
//}
// Question 5 B //

// Question 5 C //
//#include <iostream>
//
//using namespace std;
//
//double* Maximum(double* nums, int array_size)
//{
//	double CurrentMax = 0;
//	double* anwser = nullptr;
//
//	for (int i = 0; i < array_size; i++)
//	{
//		if (*(nums + i) > CurrentMax)
//		{
//			CurrentMax = *(nums + i);
//			anwser = nums + i;
//		}
//	}
//
//	return anwser;
//}
//
//void main()
//{
//	double num[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	Maximum(num, 9);
//
//	system("pause");
//}
// Question 5 C //

// Question 5 D //
//#include <iostream>
//
//using namespace std;
//
//bool Contains(char* text, char search)
//{
//	int length = strlen(text);
//
//	for (int i = 0; i < length; i++)
//	{
//		if (*(text + i) == search)
//		{
//			return true;
//		}
//	}
//
//	return false;
//}
//
//void main()
//{
//	char text[] = { "Hello Word" };
//	Contains(text, 1);
//
//	system("pause");
//}
// Question 5 D //