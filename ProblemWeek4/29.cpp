 //29 . จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
// 64010860 ศุภพล อารีวัฒนวงศ์

#include<iostream>

int main()
{
	int h[10],i,sum=0;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &h[i]);
		sum += h[i];
	}

	for (i = 0; i < 10; i++)
	{
		printf("Student Height %d = %d",i+1,h[i]);
	}
	printf("\nAverage Height = %d", sum / 10);


	return 0;
}