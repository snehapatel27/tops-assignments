#include<stdio.h>
struct InstaProfile 
{
	char username[30];
	int followers;
	struct Bio
	{
		char discription[30];
		int age;
	}Bio;
};
main()
{
	struct InstaProfile p={"sneha",1000,"ghbnifxfhjhh",21};
	printf("\n USERNAME:=%s",p.username);
	printf("\n FOLLOWERS:=%d",p.followers);
	printf("\n DISCRIPTION:=%s",p.Bio.discription);
	printf("\n AGE:=%d",p.Bio.age);
}
