#include<stdio.h>
struct student {
    int roll_no;
    char name[100];
    float mark[3];
    float total;
    float perc;
};
void read_student(struct student *s){
    printf("Enter the roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter the full name: ");
    scanf("%s", s->name);

    printf("Enter mark of math: ");
    scanf("%f", &s->mark[0]);

    printf("Enter the mark of chemistry: ");
    scanf("%f", &s->mark[1]);

    printf("Enter the mark of physics: ");
    scanf("%f", &s->mark[2]);
}
void calculate(struct student *s){
    s->total=s->mark[0]+s->mark[1]+s->mark[2];
    s->perc= (s->total / 300.0) * 100;
}
void print_summary(struct student *s){
    printf("Roll number: %d\n", s->roll_no);
    printf("Name: %s\n", s->name);
    printf("Total marks: %.2f\n", s->total);
    printf("Percentage: %.2f%%\n", s->perc);
}
int main(){
    struct student s;
    read_student(&s);
    calculate(&s);
    print_summary(&s);

    return 0;
}