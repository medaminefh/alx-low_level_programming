#ifndef DOG
#define DOG

/**
 * struct dog - dog class
 *
 * @name: The dog's name
 *
 * @age: The dog's age
 *
 * @owner: The dog's owner
 */
struct dog {
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
