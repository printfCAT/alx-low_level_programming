#ifndef DOG
#define DOG

/**
* dog_t - alias for struct dog
*
*/
typedef struct dog dog_t;

/**
* struct dog - defines elements for dog
* @name: name of dog
* @age: age of dog
* @owner: name of dog owner
*
* Description: provides details about the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
