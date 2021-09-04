// จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปนาฬิกาทรายที่มีขนาดความสูงของกระเปาะแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)
// 5 (input)
// ********* (output)
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********
// 64010860 ศุภพล อารีวัฒนวงศ์


#include<iostream>
int main()
{
	int a, i, j, k;
	scanf_s("%d", &a);
	int starup = (a * 2) - 1;
	int stardown = a - (a - 1);
	int blankup = 0;
	int blankdown = a - stardown;

	for (i = 1; i <= a-1; i++)
	{
		for (k = 1; k <= blankup; k++)
		{
			//print blank
			printf(" ");
		}

		for (j = 1; j <= starup; j++)
		{
			printf("*");
		}

		starup -= 2;
		blankup += 1;
		printf("\n");

	}



	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= blankdown; j++)
		{
			//print blank
			printf(" ");
		}
		for (k = 1; k <= stardown; k++)
		{
			printf("*");
		}
		blankdown -= 1;
		stardown += 2;
		printf("\n");
	}
	return 0;

}