#include <stdio.h>
//int (tests,letter gardes) //float(score,total_scores,average)//mabda2iyan we will use that
int Get_test()
{
    int test;
 do{
    printf("enter the number of your tests:\n");
    scanf("%d",&test);}while(test<1 || test>10);
return test;
}
float calcul_TOTALEOfScorres(float score[],int test)
{
    float total_scores=0;
    for(int i=0;i<test;i++)
    total_scores+=score[i];
 return total_scores;
}
//calcul average=tatale_sccores/tests.
float CALCULE_average(float score[],int test)
{
 float average=0;
 float total_scores=calcul_TOTALEOfScorres(score,test);
  return average=total_scores/test;
}
char getLetterGrade(float average)
{
    if(average>=90 ) return 'A';
    else if (average>=80  && average<=89) return 'B';
    else if (average>=70 && average<=79) return 'C';
    else if(average>=60 && average<=69) return 'D';
    else if (average<60) return 'E';
}
//now we will go to the main function
int main()
{
    int test=Get_test();
    float score[test];
    float total=0;
    for(int i=0;i<test;i++)
    {
    do{
        printf("enter the scores of your tests:\n");
        scanf("%f",&score[i]);}while(score[i]<0 || score[i]>100);
        total=calcul_TOTALEOfScorres(score,test);
}
    float average=CALCULE_average(score,test);
    char resultat=getLetterGrade(average);
    printf("The average is %f and the grade letter is %c",average,resultat);
}
