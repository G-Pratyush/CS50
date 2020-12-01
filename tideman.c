#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(int argc, string argv[])
{
    if (argc>1)
    {
        int voters=get_int("Number of voters: ");
        int contestants=argc-1;
        int count[argc-1];
        for(int o=0;o<contestants;o++)
            count[o]=0;
        string vote[voters][contestants];
        for (int i=0;i<voters;i++)
            {
                for (int j=0;j<contestants;j++)
                {
                    printf("Rank %d: ",j+1);
                    vote[i][j]=get_string(" "); 
                    int f=0;                                    
                    for(int m=0;m<j;m++)
                    {
                        if (strcmp(vote[i][j],vote[i][m])==0)
                        {
                            printf("Invalid Vote!\n");
                            return 1;
                        }
                    }                                         
                        for (int k=1;k<=contestants;k++)
                            {
                                if(strcmp(vote[i][j],argv[k])==0)
                                    {count[k-1]=(count[k-1]+j);
                                    f=1;}
                                
                            }
                            if (f==0)
                            printf("Invalid Vote! \n");
                       
                }
                printf("\n");


            }
            int min=32767;
        for(int l=0;l<contestants;l++)
        {
            if (count[l]<min)
                min =count[l];
        }
        for(int n=0;n<contestants;n++)
        {
            if(min==count[n])
            {
               printf("%s\n",argv[n+1]);
            }
        }

    }
    else
    {
        printf("Enter correct contestant! \n");
        return 1;
    }   
    return 0; 
}

