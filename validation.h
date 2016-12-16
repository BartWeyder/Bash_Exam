#ifndef VALIDATION_H_INCLUDED
#define VALIDATION_H_INCLUDED
#include <stdbool.h>

bool validate_name_surname (char text[50]);
bool validate_subject (char subject[50]);
bool validate_group (char group[4]);
bool validate_mark (float mark);

#endif // VALIDATION_H_INCLUDED
