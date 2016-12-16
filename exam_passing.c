#include <stdio.h>
#include <conio.h>
#include "input.h"
#icnlude "exam_passing.h"
#include <stdbool.h>
#include <stdlib.h>

//local functions decalarating
void dump__teacher_list (TEACHER_INFO* teacher_list);
void dump_student_list (STUDENT_INFO* student_list);


EXAM_INFO* exam_processing (char subject[50], STUDENT_INFO* student_list, TEACHER_INFO* teacher_list) {
    EXAM_INFO* new_exam = malloc(sizeof(EXAM_INFO));
    //adding here some data about students and their marks + passed;
    dump_student_list(student_list);
    dump__teacher_list(teacher_list);
    return new_exam;
}
