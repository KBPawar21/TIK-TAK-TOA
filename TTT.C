



       #include<stdio.h>

       #include<conio.h>

	void  main()
	 {



	   int a[3][3], d[9],amt=0;
	   int z,c=1,i,j,k,n,x,temp,ply1,ply2,count=0;

	   char  sym, p1[10],p2[10];

     lable2:

	   c=1,amt=0;

	   for(j=0;j<3;j++)
	     {
	       for(k=0;k<3;k++)
	       {
		  count++;
		  a[j][k]=count;
	       }
	     }

	      for(k=0;k<9;k++)
	       {
		   d[k]=0;
	       }

	   clrscr();

	   printf("\n\n\t\t\t\t  TIK-TAK-TOE\n\n ");

	   printf("\n\t\t\tPLAY & ENJOY TIK-TAk-TOE game \n\n\n\n\t Press > 1 <   To play 2 players game \n\n\n\t Press > 2 <   To play 1 player game \n\n\n\t Press > Any key <  To exit \n\n\n\t >>> " );
	   scanf("%d",&z);

	   switch(z)
	   {
	     case 1: goto lable1;
	     case 2: goto lable2;
	     default  : goto lable3;

	   }

     lable1:

	   clrscr();

	   printf("\n\n\t\t\t    TIK-TAK-TOE\n\n ");

	   printf("\nPlyer 1 : Enter your name - ");
	   scanf("%s",&p1);

   lable4:

	   printf("\nPlayer 1 : Choose your symbol -\n\n\t\tPress > X <  or Press > O < : ");
	   scanf("%s",&sym);

	   switch(sym)
	   {
	      case 'X':
	      case 'x':  ply1=-1,ply2=0,sym='X',temp=1;  break;

	      case 'O':
	      case 'o':  ply1=0,ply2=-1,sym='O',temp=0;  break;

	      default :   printf("\nEnter the symbol correclty ...");
			  goto lable4;
	   }


	   printf("\nPlyer 2 : Enter your name - ");
	   scanf("%s",&p2);


    lable5:

	    clrscr();

	    switch(c)
		    {


	      case 1:
     goto lable6;

     lable7:

		       if(amt==9)
			  {
			     goto lable3;
			  }
		       if(c==2)
			{
			  printf("\n\t\t\tPosion is already choosed retry... \n");
			  c=1;
			}
		       else if(temp==1)
			{
			  temp=0;
			  printf("\n\n\t\t\t\t  %s\n      it's your turn  ",p1);

		       }
		       else if(temp==0)
		       {
			  temp=1;
			  printf("\n\n\t\t\t\t  %s\n      it's your turn  ",p2);
			}


		       printf("Enter postion where your want to place your symbol : ");
		       scanf("%d",&x);

			for(i=0;i<9;i++)
			{
			 if(d[i]==x)
			   {
			    c=2;
			    goto lable7;
			   }
			 }

			 if(x<=9)
			   d[amt] = x ;
			 else
			   goto lable7;
			  amt++;

			 switch(x)
			    {
				   case 1:

					  if(amt%2==0)
						a[0][0]=ply2;
					else
					       a[0][0]=ply1;

					   break;
				   case 2:

					  if(amt%2==0)
						a[0][1]=ply2;
					   else
						a[0][1]=ply1;
					    break;
				   case 3:

					  if(amt%2==0)

						a[0][2]=ply2;
					   else
						a[0][2]=ply1;

					   break;
				   case 4:

					  if(amt%2==0)
						a[1][0]=ply2;
					   else
						a[1][0]=ply1;

					   break;
				   case 5:

					  if(amt%2==0)
						a[1][1]=ply2;
					   else
						a[1][1]=ply1;

					   break;
				   case 6:

					  if(amt%2==0)
						a[1][2]=ply2;
					   else
						a[1][2]=ply1;

					   break;
				   case 7:

					  if(amt%2==0)
						a[2][0]=ply2;
					   else
						a[2][0]=ply1;

					   break;
				   case 8:

					  if(amt%2==0)
						a[2][1]=ply2;
					   else
						a[2][1]=ply1;

					   break;
				  default:

					  if(amt%2==0)
						a[2][2]=ply2;
					   else
						a[2][2]=ply1;

					   break;


			     }//switch

		  default : break;
		} //switch


 lable6:

	clrscr();

	printf("\n\n\t\t\t       TIK-TAK-TOE\n ");

	printf("\n\t\t\t");


      for(n=0;n<3;n++)
	{
	     if(n==0)
		   printf(". . . . . . . . . . . . .");


	    for(j=0;j<3;j++)
	     {
		printf("\n\t\t\t.");
		for(k=0;k<3;k++)
	       {
		  if(j==1)
		  {
		     if(a[n][k]==-1)
		     {
			if(ply1==-1)
			  printf("   X   .");
			else
			   printf("   O   .");
		     }
		     else if(a[n][k]==0)
		      {
		       if(ply1==-1)
			  printf("   O   .");
			else
			   printf("   X   .");

		      }

		     else
			 printf("   %d   .",a[n][k]);


		     if(a[n][k] == a[n][k+1] && a[n][k+1]==a[n][k+2])
			 { c=2; goto lable8; }
		      else if(a[n][k]==a[n+1][k] && a[n+1][k]==a[n+2][k])
			 { c=2;goto lable8; }
		      else if(a[0][0]==a[1][1] && a[0][0]==a[2][2])
			 { c=2;goto lable8; }
		      else if(a[2][0]==a[1][1] && a[1][1]==a[0][2])
			 { c=2;goto lable8; }//Cheaking machanisam
		      else
			 { }

		      }
		  else
		    printf("       .");

		 }

	       }


		printf("\n\t\t\t");

	      printf(". . . . . . . . . . . . .");

	     }

   goto lable7;



   lable8:



			clrscr();
			printf("\n\n\t\t\t       TIK-TAK-TOE\n ");


		       if(a[n][k]==-1&&c==2)
			   {
			    printf("\n\n\n\n\n\t\t\t   CONGRATULATIONS !!! ");
			    printf("\n\n\n\t\t\t          %s   \n\n\t\t   >>>      Y O U    W I N    !     <<<",p1);
			   }
		       else if(a[n][k]==0&&c==2)
			  {
			    printf("\n\n\n\n\n\t\t\t    CONGRATULATIONS !!! ");
			    printf("\n\n\n\t\t\t          %s   \n\n\t\t   >>>      Y O U    W I N    !     <<<",p2);
			 }
		       else
			 {
			    printf("\n\n\n\n\n\t\t\t   CONGRATULATIONS !!! ");
			    printf("\n\n\n\n\n\t\t  G A M E    D R O W  ! ");
			 }




    getch();

   goto lable2;
   lable3:
		getch();


      }




























   /*

       #include<stdio.h>

       #include<conio.h>

	void  main()
	 {



	   int a[3][3], d[9],amt=0;
	   int z,c=1,i,j,k,n,x,temp,count;

	   char  sym, p1[10],p2[10],ply1,ply2;

	   lable2:
	   c=1,amt=0,count=0;

	   for(i=0;i<3;i++)
	   { for(j=0;j<3;j++)
	    {
	      count++;
	      d[count]=0;
	      a[3][3]=count;
	    }}

	   clrscr();

	   printf("\n\n\t\t\t\t  TIK-TAK-TOE\n\n ");

	   printf("\n\t\t\tPLAY & ENJOY TIK-TAk-TOE game \n\n\n\n\t Press > 1 <   To play 2 players game \n\n\n\t Press > 2 <   To play 1 player game \n\n\n\t Press > Any key <  To exit \n\n\n\t >>> " );
	   scanf("%d",&z);

	   switch(z)
	   {
	     case 1: goto lable1;
	     case 2: goto lable2;
	     default  : goto lable10;

	   }

	   lable1:

	   clrscr();

	   printf("\n\n\t\t\t    TIK-TAK-TOE\n\n ");

	   printf("\nPlyer 1 : Enter your name - ");
	   scanf("%s",&p1);

	   lable4:

	   printf("\nPlayer 1 : Choose your symbol -\n\n\t\tPress > X <  or Press > O < : ");
	   scanf("%s",&sym);

	   switch(sym)
	   {
	      case 'X':
	      case 'x':  ply1=-1,ply2=0,sym='X',temp=1;  break;

	      case 'O':
	      case 'o':  ply1=0,ply2=-1,sym='O',temp=0;  break;

	      default :   printf("\nEnter the symbol correclty ...");
			  goto lable4;
	   }


	   printf("\nPlyer 2 : Enter your name - ");
	   scanf("%s",&p2);


	lable5:

	    clrscr();

	    switch(c)
	    {


	      case 1:
		       goto lable6;

		 lable7:

		       if(amt==9)
			  {

			   amt=0;
			   goto lable10;
			  }
		       if(c==2)
			{
			  printf("\n\t\t\tPosion is already choosed retry... \n");
			  c=1;
			}
		       else if(temp==1)
			{
			  temp=0;
			  printf("\n\n\t\t\t\t  %s\n      it's your turn  ",p1);

		       }
		       else if(temp==0)
		       {
			  temp=1;
			  printf("\n\n\t\t\t\t  %s\n      it's your turn  ",p2);
			}


		       printf("Enter postion where your want to place your symbol : ");
		       scanf("%d",&x);

			for(i=0;i<9;i++)
			{
			 if(d[i]==x)
			   {  c=2;
			      goto lable7;
			   }
			 }


			  d[amt] = x ;

			  amt++;

			   switch(x)
			    {
				   case 1:

					  if(amt%2==0)
						a[0][0]=ply2;
					else
					       a[0][0]=ply1;

					   break;
				   case 2:

					  if(amt%2==0)
						a[0][1]=ply2;
					   else
						a[0][1]=ply1;
					    break;
				   case 3:

					  if(amt%2==0)

						a[0][2]=ply2;
					   else
						a[0][2]=ply1;

					   break;
				   case 4:

					  if(amt%2==0)
						a[1][0]=ply2;
					   else
						a[1][0]=ply1;

					   break;
				   case 5:

					  if(amt%2==0)
						a[1][1]=ply2;
					   else
						a[1][1]=ply1;

					   break;
				   case 6:

					  if(amt%2==0)
						a[1][2]=ply2;
					   else
						a[1][2]=ply1;

					   break;
				   case 7:

					  if(amt%2==0)
						a[2][0]=ply2;
					   else
						a[2][0]=ply1;

					   break;
				   case 8:

					  if(amt%2==0)
						a[2][1]=ply2;
					   else
						a[2][1]=ply1;

					   break;
				   case 9:

					  if(amt%2==0)
						a[2][2]=ply2;
					   else
						a[2][2]=ply1;

					   break;

				   default: goto lable3;
			     }//switch

		       goto lable6;//
		  case 2: break;
		  default : break;
		}




    if(c==1)
    {

      lable6:

	clrscr();

	printf("\n\n\t\t\t       TIK-TAK-TOE\n ");

	printf("\n\t\t\t");


      for(n=0;n<3;n++)
	{
	     if(n==0)
	      {
		for(i=0;i<13;i++)
		  {
			printf(". ");

		  }

	       }

	    for(j=0;j<3;j++)
	     {
		printf("\n\t\t\t.");
		for(k=0;k<3;k++)
	       {
		  if(j==1)
		  {
		     if(a[n][k]==-1)
		     {
			if(ply1==-1)
			  printf("   X   .");
			else
			   printf("   O   .");
		     }
		     else if(a[n][k]==0)
		      {
		       if(ply1==-1)
			  printf("   O   .");
			else
			   printf("   X   .");

		      }

		     else
		      {
			 printf("   %d   .",a[n][k]);
		      }

		      if(a[n][k]==a[n][k+1] && a[n][k+1]==a[n][k+2])
			  goto lable8;
		      else if(a[n][k]==a[n+1][k] && a[n+1][k]==a[n+2][k])
			   goto lable8;
		      else if(a[n][k]==a[n+1][k+1] && a[n+1][k+1]==a[n+2][k+2])
			  goto lable8;
		      else if(a[n-1][k+1]==a[n][k] && a[n][k]==a[n+1][k-1])
			   goto lable8; //Cheaking machanisam


		    }
		  else
		    printf("       .");

		 }

	       }


		printf("\n\t\t\t");

	       for(i=0;i<13;i++)
	       {
		printf(". ");
	       }


	     }

	   goto lable7;

	  }



       lable8:



			 if(amt==9)
			  {
			    clrscr();
			    amt=0;
			    printf("\n\n\t\t\t       TIK-TAK-TOE\n ");
			    zprintf("\n\n\n\n\n\t\t  G A M E    D R O W  ! ");
			    goto  lable3;
			  }
		       if(a[n][k]==-1)
			  {
			    clrscr();
			    printf("\n\n\t\t\t       TIK-TAK-TOE\n ");
			    printf("\n\n\n\n\n\t\t\t    CONGRATULATIONS !!! ");
			    printf("\n\n\n\t\t\t         %s   \n\n\n\n\t\t   >>>      Y O U    W I N    !     <<<",p1);
			    goto lable3;
			  }
		       else if(a[n][k]==0)
			  {
			    clrscr();
			    printf("\n\n\t\t\t       TIK-TAK-TOE\n ");
			    printf("\n\n\n\n\n\t\t\t    CONGRATULATIONS !!! ");
			    printf("\n\n\n\t\t\t         %s   \n\n\n\n\t\t   >>>      Y O U    W I N    !     <<<",p2);
			    goto lable3;
			  }

	   lable3:
		getch();
		goto lable2;
	   lable10:
		getch();
      }























/*     #include<stdio.h>

     #include<conio.h>

     void  main()
      {


       /*	int i,j,k,n,x=0;

	clrscr();


	printf("\n\n\n\n\t  ");

	for(n=0;n<3;n++)
	{
	      /*if(x==0)
	      {
		for(i=0;i<13;i++)
		  {
			printf(". ");

		  }
		  x=1;
	       }*

	      //if()
	      for(j=0;j<3;j++)
	       {
		printf("\n           ");
		for(k=0;k<3;k++)
		{
		 if(k<2)
		 {
		  if(j==1)
		  {
			   //printf("n%dj%d k%d|",n,j,k);
		     printf("   X   .");
		  }
		  else
		    printf("       .");
	       }

	       if(k==1)
	       {

		if(j==1)

		  {
		     //printf("n%dj%d k%d|",n,j,k);
		     printf("   X    ");
		  }

	       }
	       }
	      }

		  printf("\n\t ");

	     if(n<2)
	     {
	     for(i=0;i<13;i++)
	      {
		printf(" .");
	      }
	     }
	 }

	 getch();

      }	*/






