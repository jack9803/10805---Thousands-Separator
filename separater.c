#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char S[100010];
char ans[200000];
int main(){
int N,i,j,len;
char tmp;
int flag;
int len_ans;
int count_ans,count_A;

scanf("%d",&N);
tmp=getchar();
for(i=0;i<N;i++){
    scanf("%s",&S);
    len=strlen(S);
    flag=0;
    for(j=0;j<len;j++){
        if(isdigit(S[j])==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("NaN\n");
    }else{
        if(len<=3){
            printf("%s\n",S);

        }else{
            len_ans = len+(len/3);
            count_ans=len_ans-1;
            count_A=len-1;
            while(count_ans>=0){
                for(j=0;j<3;j++){
                    if(count_ans-j>=0){
                        ans[count_ans-j]=S[count_A-j];
                    }else{
                        break;
                    }
                }
                count_ans=count_ans-3;
                count_A=count_A-3;
                ans[count_ans]=',';
                count_ans--;
            }
            ans[len_ans]='\0';
            printf("%s\n",ans);
        }
    }
}


return 0;
}
