#include <stdio.h>
#define M 100000
//积分赛第一场C
int main()
{
    int n;
    scanf("%d", &n);
    char s[M];
    scanf("%s", s);
    int a[M];
    for(int i = 0; i < n ; i++)
         scanf("%d", &a[i]);
     long long jmp = 0;
     int flag[M] = {0};
     int ans = 0;
    int i = 0;
     while(true)
     {
         if(s[i] == '>') jmp+= a[i];
         else jmp-= a[i];
         if(jmp >= 0 && jmp < n)
         {
            // i = (int)jmp;
            i = jmp;
            if(flag[i] == 0) flag[i] = 1;
            else    break;
         }
         else
         {
             ans = 1;
             break;
         }
     }
     if(ans) printf("FINITE\n");
     else printf("INFINITE\n");
     return 0;

}
