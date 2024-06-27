#include<stdio.h>

enum Bitstate
{
	Base = 0,			//通常状態			//00000000
	Poison = 1 << 0,	//毒状態			//00000001
	Sleep = 1 << 1,		//眠り状態			//00000010
	Paralysis = 1 << 2,	//麻痺状態			//00000100
	Burn = 1 << 3,		//火傷状態			//00001000
	AtkUp = 1 << 4,		//攻撃力アップ状態	//00010000
	AtkDown = 1 << 5	//攻撃力ダウン状態	//00100000
};

typedef unsigned int UINT;

void DisplayStatus(UINT* s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = Base;

	ChangeFlag(&MyState);
	ClearFlag(&MyState);
}

void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");

	if (s & Poison)
	{
	printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("眠り\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == Base)
	{
		printf("状態変化なし\n");
	}

	printf("******************\n");

}

void ChangeFlag(UINT* s)
{
	int a;

	while (1)
	{
		DisplayStatus(*s);
		
		printf("どの状態を付与しますか？\n");

		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>");
		scanf("%d", &a);

		if(a == 0)
		{
			break;
		}

		switch (a)
		{
		case 1:
			*s |= Poison; break;
		case 2:
			*s |= Sleep; break;
		case 3:
			*s |= Paralysis; break;
		case 4:
			*s |= Burn; break;
		case 5:
			*s |= AtkUp; break;
		case 6:
			*s |= AtkDown; break;
		default:
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	
	while (1)
	{
		DisplayStatus(*s);
		
		printf("どの状態を解除しますか？\n");

		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>");
		scanf("%d", &a);

		if (a == 0)
		{
			break;
		}

		switch (a)
		{
		case 1:
			*s &= ~Poison; break;
		case 2:
			*s &= ~Sleep; break;
		case 3:
			*s &= ~Paralysis; break;
		case 4:
			*s &= ~Burn; break;
		case 5:
			*s &= ~AtkUp; break;
		case 6:
			*s &= ~AtkDown; break;
		default:
			break;
		}
	}
}