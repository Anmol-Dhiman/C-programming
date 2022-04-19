#include <stdio.h>
int main()
{
    long long nbela,i;
    scanf("%lld", &nbela);
    long long Dbela[nbela],dbela[nbela],pbela[nbela],qbela[nbela];
    for ( i = 0; i < nbela; i++)
    {
        scanf("%lld", &Dbela[i]);
        scanf("%lld", &dbela[i]);
        scanf("%lld", &pbela[i]);
        scanf("%lld", &qbela[i]);
    }
    long long cbela;
    long long fbela;
    long long sumbela;
    long long jbela;
    
    
    for ( i = 0; i < nbela; i++)
    {  
        
        jbela=Dbela[i]/dbela[i] - 1;
        cbela = dbela[i]*jbela*(jbela+1)/2;
        fbela = (Dbela[i] % dbela[i]) * (jbela+1);
        sumbela = qbela[i] * (cbela + fbela);
        
        printf("%lld\n", (pbela[i] *( (Dbela[i]/dbela[i]*dbela[i]) + Dbela[i] % dbela[i]) )+ sumbela);
        
        
    }
        
    return 0;
}