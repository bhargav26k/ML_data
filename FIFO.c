#include<stdio.h>

void main()

{

	int pg[20],pgs,frm,frms[10],i=0,j=0,k=0,hit=0,flag=0,l;
	float hitrt,missrt;

	printf("ENTER THE NO. OF PAGES:-\t");

	scanf("%d",&pgs);

	for(i=0;i<pgs;i++){

	printf("ENTER THE PAGE VALUES FOR %d :-\t",i+1);

	scanf("%d",&pg[i]);

	}

	printf("\nENTER THE FRAME SIZE:-\t");

	scanf("%d",&frm);

	printf("\nINITIAL PAGE VALUES =>\t");

	for(i=0;i<frm;i++)	

	frms[i]=-1;	

	for(i=0;i<frm;i++)

	printf("%d\t",frms[i]);

	printf("\n");	

	for(i=0;i<pgs;i++)

	{	

		for(j=0;j<frm;j++)

		{	

			if(pg[i]==frms[j])	

			{	

				printf("HIT:\t");

				hit++;

				flag=1;

			}

		}

		if(flag==0)

		{

			frms[k]=pg[i];

			k++;

			printf("MISS:\t");		

		}

		if(k==frm)

		k=0;

		for(l=0;l<frm;l++)

		printf("%d\t",frms[l]);

		printf("\n");

		flag=0;

	}

	printf("NO. OF HITS = %d",hit);

	hitrt=(float)hit/(float)pgs;

	missrt=1-hitrt;

	printf("\nHIT RATIO = %f",hitrt);

	printf("\nMISS RATIO = %f\n",missrt);

	

}
