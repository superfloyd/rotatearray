nclude <iostream>
#include <cmath>

using namespace std;
int main(int argc, const char * argv[])
{
    const int SIZE = 4;
 
    int myAr[SIZE][SIZE] = { {1,2,3,4 },
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}
                     };
    
    
    for ( unsigned i = 0 ; i< SIZE; i++ )
    {
        for (unsigned j = 0 ; j < SIZE; j++)
            printf("%d\t", myAr[i][j]);
        printf("\n");
    }
    
    
    //rotate
    int tempa;
    int tempb;
    int tempc;
    int tempd;
    int layers = 4/2;
    int n = 4;
    
    int start= n-1;
   // int size_t = 4;
    
    for ( int i = 0; i< layers; i++ )
    {
        //start = n-1;
        for ( int j=i; j <= n/2; j++ )
        {
            
            tempa = myAr[i][j];
            tempb = myAr[j][start-i];
            tempc = myAr[start-i][start-j];
            tempd = myAr[start-j][i];

            myAr[start-j][i] = tempc;
            myAr[start-i][start-j] = tempb;
            myAr[j][start-i]= tempa;
            myAr[i][j] = tempd;
            
            
        }
    
        n/=2;
        
    }
    
    
    printf("after rotation... \n");
    
    for ( unsigned i = 0 ; i< SIZE; i++ )
    {
        for (unsigned j = 0 ; j < SIZE; j++)
            printf("%d\t", myAr[i][j]);
        printf("\n");
    }


    return 0;
}


