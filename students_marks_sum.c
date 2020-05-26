#include<stdio.h>
#include<stdlib.h>
int marks_summation(int *marks,int num_st,char gender){
    int i,sum=0;
    if(gender=='b'){
        for(i=0; i<num_st; i=i+2){
            sum=sum+marks[i];
        }
    }
    else if(gender=='g'){
        for(i=1; i<num_st; i=i+2){
            sum=sum+marks[i];
        }
    }
    return sum;
}


int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);

    return 0;
}
