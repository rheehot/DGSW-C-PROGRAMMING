// goto 庚 
#include <stdio.h>
int main(void)
{
	int num;
	printf("切尻呪 脊径 : ");
	scanf("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1聖 脊径梅劃? せせせせせせ!\n");
	goto END;
TWO:
	printf("2研 脊径馬写浦推!\n");
	goto END;
OTHER:
	printf("3 箸精 陥献 収切研 脊径馬写浦推!\n");

END:
	return 0;
}