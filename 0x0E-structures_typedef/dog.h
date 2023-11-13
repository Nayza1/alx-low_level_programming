#ifndef DOG_H
#define DOG_H

// Structure declaration for a dog
struct dog
{
    char *name;
    float age;
    char *owner;
};

// Typedef for the dog structure
typedef struct dog dog_t;

// Function declarations
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
