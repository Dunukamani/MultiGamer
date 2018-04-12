#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>
#include<pthread.h>
bool player1=false;
bool player2=false;
bool player3=false;
void *function()
{
	if(player1&&player2&&player3)
	{
		printf("Game has satrted\n");
	}
	else
	{
		printf("Game has not started\n");
	}
}
int main()
{
printf("Welcome to Snowflake Entertainment\n");
printf("This Game has only one Server\n");
int players;
printf("Enter no of players:");
scanf("%d",&players);
if(players==3)
{
	player1=true;
	player2=true;
	player3=true;
	pthread_t pid;
	pthread_create(&pid,NULL,&function,NULL);
    pthread_join(pid,NULL);
}
else if(players=2)
{
	player1=true;
	player2=true;
	player3=false;
	printf("only two players has entered game can't be started\n");
}
else if(players=1)
{
	player1=true;
	player2=false;
	player3=false;
	printf("only one has entered game can't be started\n");
}
else
{
	printf("not enough playersto start\n");
}
}
