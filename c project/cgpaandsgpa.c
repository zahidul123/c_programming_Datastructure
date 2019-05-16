//cgpa calculate
#include<stdio.h>
int main()
{
	float cse101,phy101,eng101,ged101,ged102,cse103,cse104,phy103,phy104,math101;
	float cse101cp,phy101cp,eng101cp,ged101cp,ged102cp,firsttotalcp,firstcgpa;
	float cse103cp,cse104cp,phy103cp,phy104cp,math101cp,secondtotalcp,secondcgpa,cgpa;
	printf("1st semister\n");
	printf("enter marks:\n");

	printf("	CSE 101:");
	scanf("%f",&cse101);
	if(cse101>100)

	{
		printf("invalid marks\n");
	}
	if(cse101>=80)
	if(cse101<=100)
	{
		printf("grade: A+ , point: 4.00\n");
		cse101cp=4.00*3;
	}
	if(cse101>=75)
	if(cse101<80)
	{
		printf("grade: A , point: 3.75\n");
		cse101cp=3.75*3;
	}
	if(cse101>=70)
	if(cse101<75)
	{
		printf("grade: A- , point: 3.50\n");
		cse101cp=3.50*3;
	}
	if(cse101>=65)
	if(cse101<70)
	{
		printf("grade: B+ , point: 3.25\n");
		cse101cp=3.25*3;
	}
	if(cse101>=60)
	if(cse101<65)
	{
		printf("grade: B , point: 3.00\n");
		cse101cp=3.00*3;
	}
	if(cse101>=55)
	if(cse101<60)
	{
		printf("grade: B- , point: 2.75\n");
		cse101cp=2.75*3;
	}
	if(cse101>=50)
	if(cse101<55)
	{
		printf("grade: C+ , point: 2.50\n");
		cse101cp=2.50*3;
	}
	if(cse101>=45)
	if(cse101<50)
	{
		printf("grade: C- , point: 2.25\n");
		cse101cp=2.25*3;
	}
	if(cse101>=40)
	if(cse101<45)
	{
		printf("grade: D , point: 2.00\n");
		cse101cp=2.00*3;
	}
	if(cse101<40)
	{
		printf("grade: F , point: 0.00\n");
		cse101cp=0.00*3;
	}

	printf("	PHY 101:");
	scanf("%f",&phy101);
	if(phy101>100)
	{
		printf("invalid marks\n");
	}
	if(phy101>=80)
	{
		printf("grade: A+ , point: 4.00\n");
		phy101cp=4.00*3;
	}
	if(phy101>=75)
	if(phy101<80)
	{
		printf("grade: A , point: 3.75\n");
		phy101cp=3.75*3;
	}
	if(phy101>=70)
	if(phy101<75)
	{
		printf("grade: A- , point: 3.50\n");
		phy101cp=3.50*3;
	}
	if(phy101>=65)
	if(phy101<70)
	{
		printf("grade: B+ , point: 3.25\n");
		phy101cp=3.25*3;
	}
	if(phy101>=60)
	if(phy101<65)
	{
		printf("grade: B , point: 3.00\n");
		phy101cp=3.00*3;
	}
	if(phy101>=55)
	if(phy101<60)
	{
		printf("grade: B- , point: 2.75\n");
		phy101cp=2.75*3;
	}
	if(phy101>=50)
	if(phy101<55)
	{
		printf("grade: C+ , point: 2.50\n");
		phy101cp=2.50*3;
	}
	if(phy101>=45)
	if(phy101<50)
	{
		printf("grade: C- , point: 2.25\n");
		phy101cp=2.25*3;
	}
	if(phy101>=40)
	if(phy101<45)
	{
		printf("grade: D , point: 2.00\n");
		phy101cp=2.00*3;
	}
	if(phy101<40)
	{
		printf("grade: F , point: 0.00\n");
		phy101cp=0.00*3;
	}

	printf("	ENG 101:");
	scanf("%f",&eng101);
	if(eng101>100)
	{
		printf("invalid marks\n");
	}
	if(eng101>=80)
	{
		printf("grade: A+ , point: 4.00\n");
		eng101cp=4.00*3;
	}
	if(eng101>=75)
	if(eng101<80)
	{
		printf("grade: A , point: 3.75\n");
		eng101cp=3.75*3;
	}
	if(eng101>=70)
	if(eng101<75)
	{
		printf("grade: A- , point: 3.50\n");
		eng101cp=3.50*3;
	}
	if(eng101>=65)
	if(eng101<70)
	{
		printf("grade: B+ , point: 3.25\n");
		eng101cp=3.25*3;
	}
	if(eng101>=60)
	if(eng101<65)
	{
		printf("grade: B , point: 3.00\n");
		eng101cp=3.00*3;
	}
	if(eng101>=55)
	if(eng101<60)
	{
		printf("grade: B- , point: 2.75\n");
		eng101cp=2.75*3;
	}
	if(eng101>=50)
	if(eng101<55)
	{
		printf("grade: C+ , point: 2.50\n");
		eng101cp=2.50*3;
	}
	if(eng101>=45)
	if(eng101<50)
	{
		printf("grade: C- , point: 2.25\n");
		eng101cp=2.25*3;
	}
	if(eng101>=40)
	if(eng101<45)
	{
		printf("grade: D , point: 2.00\n");
		eng101cp=2.00*3;
	}
	if(eng101<40)
	{
		printf("grade: F , point: 0.00\n");
		eng101cp=0.00*3;
	}

	printf("	GED 101:");
	scanf("%f",&ged101);
	if(ged101>100)
	{
		printf("invalid marks\n");
	}
	if(ged101>=80)
	if(ged101<=100)
	{
		printf("grade: A+ , point: 4.00\n");
		ged101cp=4.00*3;
	}
	if(ged101>=75)
	if(ged101<80)
	{
		printf("grade: A , point: 3.75\n");
		ged101cp=3.75*3;
	}
	if(ged101>=70)
	if(ged101<75)
	{
		printf("grade: A- , point: 3.50\n");
		ged101cp=3.50*3;
	}
	if(ged101>=65)
	if(ged101<70)
	{
		printf("grade: B+ , point: 3.25\n");
		ged101cp=3.25*3;
	}
	if(ged101>=60)
	if(ged101<65)
	{
		printf("grade: B , point: 3.00\n");
		ged101cp=3.00*3;
	}
	if(ged101>=55)
	if(ged101<60)
	{
		printf("grade: B- , point: 2.75\n");
		ged101cp=2.75*3;
	}
	if(ged101>=50)
	if(ged101<55)
	{
		printf("grade: C+ , point: 2.50\n");
		ged101cp=2.50*3;
	}
	if(ged101>=45)
	if(ged101<50)
	{
		printf("grade: C- , point: 2.25\n");
		ged101cp=2.25*3;
	}
	if(ged101>=40)
	if(ged101<45)
	{
		printf("grade: D , point: 2.00\n");
		ged101cp=2.00*3;
	}
	if(ged101<40)
	{
		printf("grade: F , point: 0.00\n");
		ged101cp=0.00*3;
	}

	printf("	GED 102:");
	scanf("%f",&ged102);
	if(ged102>100)
	{
		printf("invalid marks\n");
	}
	if(ged102>=80)
	if(ged102<=100)
	{
		printf("grade: A+ , point: 4.00\n");
		ged102cp=4.00*3;
	}
	if(ged102>=75)
	if(ged102<80)
	{
		printf("grade: A , point: 3.75\n");
		ged102cp=3.75*3;
	}
	if(ged102>=70)
	if(ged102<75)
	{
		printf("grade: A- , point: 3.50\n");
		ged102cp=3.50*3;
	}
	if(ged102>=65)
	if(ged102<70)
	{
		printf("grade: B+ , point: 3.25\n");
		ged102cp=3.25*3;
	}
	if(ged102>=60)
	if(ged102<65)
	{
		printf("grade: B , point: 3.00\n");
		ged102cp=3.00*3;
	}
	if(ged102>=55)
	if(ged102<60)
	{
		printf("grade: B- , point: 2.75\n");
		ged102cp=2.75*3;
	}
	if(ged102>=50)
	if(ged102<55)
	{
		printf("grade: C+ , point: 2.50\n");
		ged102cp=2.50*3;
	}
	if(ged102>=45)
	if(ged101<50)
	{
		printf("grade: C- , point: 2.25\n");
		ged102cp=2.25*3;
	}
	if(ged102>=40)
	if(ged102<45)
	{
		printf("grade: D , point: 2.00\n");
		ged102cp=2.00*3;
	}
	if(ged102<40)
	{
		printf("grade: F , point: 0.00\n\n");
		ged102cp=0.00*3;
	}
	
	firsttotalcp=cse101cp+phy101cp+eng101cp+ged101cp+ged102cp;
	firstcgpa=firsttotalcp/15;
	printf("1st semister CGPA= %0.2f\n\n",firstcgpa);
	

	printf("2nd semister\n");
	printf("enter mark:\n");

	printf("	CSE 103:");
	scanf("%f",&cse103);
	if(cse103>100)
	{
		printf("invalid marks\n");
	}
	if(cse103>=80)
	if(cse103<=100)
	{
		printf("grade: A+ , point: 4.00\n");
		cse103cp=4.00*3;
	}
	if(cse103>=75)
	if(cse103<80)
	{
		printf("grade: A , point: 3.75\n");
		cse103cp=3.75*3;
	}
	if(cse103>=70)
	if(cse103<75)
	{
		printf("grade: A- , point: 3.50\n");
		cse103cp=3.50*3;
	}
	if(cse103>=65)
	if(cse103<70)
	{
		printf("grade: B+ , point: 3.25\n");
		cse103cp=3.25*3;
	}
	if(cse103>=60)
	if(cse103<65)
	{
		printf("grade: B , point: 3.00\n");
		cse103cp=3.00*3;
	}
	if(cse103>=55)
	if(cse103<60)
	{
		printf("grade: B- , point: 2.75\n");
		cse103cp=2.75*3;
	}
	if(cse103>=50)
	if(cse103<55)
	{
		printf("grade: C+ , point: 2.50\n");
		cse103cp=2.50*3;
	}
	if(cse103>=45)
	if(cse103<50)
	{
		printf("grade: C- , point: 2.25\n");
		cse103cp=2.25*3;
	}
	if(cse103>=40)
	if(cse103<45)
	{
		printf("grade: D , point: 2.00\n");
		cse103cp=2.00*3;
	}
	if(cse103<40)
	{
		printf("grade: F , point: 0.00\n");
		cse103cp=0.00*3;
	}

	printf("	 CSE 104:");
	scanf("%f",&cse104);
	if(cse104>50)
	{
		printf("invalid marks\n");
	}
	if(cse104>=40)
	{
		printf("grade: A+ , point: 4.00\n");
		cse104cp=4.00*1;
	}
	if(cse104>=37.5)
	if(cse104<40)
	{
		printf("grade: A , point: 3.75\n");
		cse104cp=3.75*1;
	}
	if(cse104>=35)
	if(cse104<37.5)
	{
		printf("grade: A- , point: 3.50\n");
		cse104cp=3.50*1;
	}
	if(cse104>=32.5)
	if(cse104<35)
	{
		printf("grade: B+ , point: 3.25\n");
		cse104cp=3.25*1;
	}
	if(cse104>=30)
	if(cse104<32.5)
	{
		printf("grade: B , point: 3.00\n");
		cse104cp=3.00*1;
	}
	if(cse104>=27.5)
	if(cse104<30)
	{
		printf("grade: B- , point: 2.75\n");
		cse104cp=2.75*1;
	}
	if(cse104>=25)
	if(cse104<27.5)
	{
		printf("grade: C+ , point: 2.50\n");
		cse104cp=2.50*1;
	}
	if(cse104>=22.5)
	if(cse104<25)
	{
		printf("grade: C- , point: 2.25\n");
		cse104cp=2.25*1;
	}
	if(cse104>=20)
	if(cse104<22.5)
	{
		printf("grade: D , point: 2.00\n");
		cse104cp=2.00*1;
	}
	if(cse104<20)
	{
		printf("grade: F , point: 0.00\n");
		cse104cp=0.00*1;
	}

	printf("	PHY 103:");
	scanf("%f",&phy103);
	if(phy103>100)
	{
		printf("invalid marks\n");
	}
	if(phy103>=80)
	{
		printf("grade: A+ , point: 4.00\n");
		phy103cp=4.00*3;
	}
	if(phy103>=75)
	if(phy103<80)
	{
		printf("grade: A , point: 3.75\n");
		phy103cp=3.75*3;
	}
	if(phy103>=70)
	if(phy103<75)
	{
		printf("grade: A- , point: 3.50\n");
		phy103cp=3.50*3;
	}
	if(phy103>=65)
	if(phy103<70)
	{
		printf("grade: B+ , point: 3.25\n");
		phy103cp=3.25*3;
	}
	if(phy103>=60)
	if(phy103<65)
	{
		printf("grade: B , point: 3.00\n");
		phy103cp=3.00*3;
	}
	if(phy103>=55)
	if(phy103<60)
	{
		printf("grade: B- , point: 2.75\n");
		phy103cp=2.75*3;
	}
	if(phy103>=50)
	if(phy103<55)
	{
		printf("grade: C+ , point: 2.50\n");
		phy103cp=2.50*3;
	}
	if(phy103>=45)
	if(phy103<50)
	{
		printf("grade: C- , point: 2.25\n");
		phy103cp=2.25*3;
	}
	if(phy103>=40)
	if(phy103<45)
	{
		printf("grade: D , point: 2.00\n");
		phy103cp=2.00*3;
	}
	if(phy103<40)
	{
		printf("grade: F , point: 0.00\n");
		phy103cp=0.00*3;
	}

	printf("	PHY 104:");
	scanf("%f",&phy104);
	if(phy104>50)
	{
		printf("invalid marks\n");
	}
	if(phy104>=40)
	{
		printf("grade: A+ , point: 4.00\n");
		phy104cp=4.00*1;
	}
	if(phy104>=37.5)
	if(phy104<40)
	{
		printf("grade: A , point: 3.75\n");
		phy104cp=3.75*1;
	}
	if(phy104>=35)
	if(phy104<37.5)
	{
		printf("grade: A- , point: 3.50\n");
		phy104cp=3.50*1;
	}
	if(phy104>=32.5)
	if(phy104<35)
	{
		printf("grade: B+ , point: 3.25\n");
		phy104cp=3.25*1;
	}
	if(phy104>=30)
	if(phy104<32.5)
	{
		printf("grade: B , point: 3.00\n");
		phy104cp=3.00*1;
	}
	if(phy104>=27.5)
	if(phy104<30)
	{
		printf("grade: B- , point: 2.75\n");
		phy104cp=2.75*1;
	}
	if(phy104>=25)
	if(phy104<27.5)
	{
		printf("grade: C+ , point: 2.50\n");
		phy104cp=2.50*1;
	}
	if(phy104>=22.5)
	if(phy104<25)
	{
		printf("grade: C- , point: 2.25\n");
		phy104cp=2.25*1;
	}
	if(phy104>=20)
	if(phy104<22.5)
	{
		printf("grade: D , point: 2.00\n");
		phy104cp=2.00*1;
	}
	if(phy104<20)
	{
		printf("grade: F , point: 0.00\n");
		phy104cp=0.00*1;
	}

	printf("	MATH 101:");
	scanf("%f",&math101);
	if(math101>100)
	{
		printf("invalid marks\n");
	}
	if(math101>=80)
	if(math101<=100)
	{
		printf("grade: A+ , point: 4.00\n");
		math101cp=4.00*3;
	}
	if(math101>=75)
	if(math101<80)
	{
		printf("grade: A , point: 3.75\n");
		math101cp=3.75*3;
	}
	if(math101>=70)
	if(math101<75)
	{
		printf("grade: A- , point: 3.50\n");
		math101cp=3.50*3;
	}
	if(math101>=65)
	if(math101<70)
	{
		printf("grade: B+ , point: 3.25\n");
		math101cp=3.25*3;
	}
	if(math101>=60)
	if(math101<65)
	{
		printf("grade: B , point: 3.00\n");
		math101cp=3.00*3;
	}
	if(math101>=55)
	if(math101<60)
	{
		printf("grade: B- , point: 2.75\n");
		math101cp=2.75*3;
	}
	if(math101>=50)
	if(math101<55)
	{
		printf("grade: C+ , point: 2.50\n");
		math101cp=2.50*3;
	}
	if(math101>=45)
	if(math101<50)
	{
		printf("grade: C- , point: 2.25\n");
		math101cp=2.25*3;
	}
	if(math101>=40)
	if(math101<45)
	{
		printf("grade: D , point: 2.00\n");
		math101cp=2.00*3;
	}
	if(math101<40)
	{
		printf("grade: F , point: 0.00\n");
		math101cp=0.00*3;
	}
	
	secondtotalcp=cse103cp+cse104cp+phy103cp+phy104cp+math101cp;
	secondcgpa=secondtotalcp/11;
	printf("2ndst semister CGPA= %0.2f\n\n\n",secondcgpa);
	cgpa=(firsttotalcp+secondtotalcp)/26;
	printf("Your CGPA= %0.2f\n",cgpa);
	
	return 0;

}
