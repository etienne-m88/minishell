/*
** EPITECH PROJECT, 2023
** library
** File description:
** str_to_word_array
*/
#include "../include/my.h"

int count_separator(char const *str, char deli)
{
    int i = 0;
    int count = 0;

    for (; str[i];) {
        for (; str[i] == deli; i++);
        count += (str[i] != '\0') ? 1 : 0;
        for (; str[i] && str[i] != deli; i++);
    }
    return (count);
}

char **my_str_to_word_array(char *str, char deli)
{
    int count = 0;
    int size_array = count_separator(str, deli);
    char **array = NULL;
    int index = 0;
    int j = 0;

    if (str[0] == '\0')
        return NULL;
    array = malloc(sizeof(char *) * (size_array + 1));
    for (int i = 0; i < size_array; i++) {
        for (; str[index] == deli; index++);
        for (count = index; str[count] != '\0' && str[count] != deli; count++);
        array[i] = malloc(sizeof(char) * (count - index) + 1);
        for (j = 0; index < count; j++) {
            array[i][j] = str[index];
            index++;
        }
        array[i][j] = '\0';
    }
    array[size_array] = NULL;
    return (array);
}
