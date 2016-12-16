#include <stdio.h>
#include <conio.h>
#include "input.h"
#include <stdbool.h>
#include <stdlib.h>

int input_text (char string_input []) {
    gets(string_input);
    return 1;
}

float input_mark() {
    float mark;
    scanf("%f", &mark);
    return mark;
}
bool input_exam_passed() {
    bool passed = true;
    //ask for pass
    return passed;
}

STUDENT_INFO* student_list_create() {
    STUDENT_INFO* new_student_list = malloc(sizeof(STUDENT_INFO));
    return new_student_list;
}

TEACHER_INFO* teacer_list_create() {
    TEACHER_INFO* new_student_list = malloc(sizeof(TEACHER_INFO));
    return new_student_list;
}

EXAM_INFO* exam_list_create() {
    EXAM_INFO* new_exam_list = malloc(sizeof(EXAM_INFO));
    return new_exam_list;
}
