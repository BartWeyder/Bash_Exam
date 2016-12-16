#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
#include <stdbool.h>

//structure for student
typedef struct student {
    char student_name [50];
    char student_surname [50];
    char student_group_code [4];
    float student_mark;
    bool student_exam_passed;
    struct student* student_next;
} STUDENT_INFO;

//structure for teacher
typedef struct teacher {
    char teacher_name [50];
    char teacher_surname[50];
    char teacher_subject [50];
    struct teacher* teacher_next;
} TEACHER_INFO;

//structure for exam
typedef struct exam {
    char exam_subject [50];
    struct student *exam_student_list;
    struct teacher *exam_teacher_list;
} EXAM_INFO;

//input functions

int input_text (char string_input[]);
float input_mark();
bool input_exam_passed();
STUDENT_INFO* student_list_create();
TEACHER_INFO* teacer_list_create();
EXAM_INFO* exam_list_create();

#endif // STRUCT_H_INCLUDED
