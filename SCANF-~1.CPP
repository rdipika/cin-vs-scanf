#include<fstream.h>
#include<stdio.h>
#include<time.h>

int main()
{
     int no;
    FILE *fp;
   clock_t time=clock();
   const char *filename ="c:/tc/bin/rand.txt";
if( (fp = fopen(filename, "r")) == NULL)
{
    printf("No such file\n");
    exit(1);
}  

else{
while(fscanf(fp,"%d",&no)==1)
{
printf("%d\n",no);
 }

double diff=double(clock()-time);
diff=diff/double(CLK_TCK);
printf("%f",diff);
}

return 0;
}

      



