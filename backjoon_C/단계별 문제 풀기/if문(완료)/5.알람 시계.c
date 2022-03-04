#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hh, mm = 0;
	scanf("%d %d", &hh, &mm);

	if (mm - 45 < 0)
	{
		if (hh == 0)
			hh = 23;
		else
			hh -= 1;

		mm = 60 + mm - 45;
	}
	else
		mm -= 45;
	printf("%d %d", hh, mm);
	
	return 0;
}