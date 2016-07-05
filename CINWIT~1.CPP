#include<iostream.h>
#include<fstream.h>
#include<time.h>
int main()
{  
std::ios::sync_with_stdio(false);
clock_t time=clock();
int no;
ifstream filename("rand.txt");
streambuf *cinbuf = cin.rdbuf();
cin.rdbuf(filename.rdbuf());
while (cin>> no)
    {
	cout << no<<endl;
    }
double diff=double(clock()-time);
diff=diff/double(CLK_TCK);
cout<<diff;
cin.rdbuf(cinbuf);
filename.close();
return 0;
}

           
	    
 

           
	    
 


     

