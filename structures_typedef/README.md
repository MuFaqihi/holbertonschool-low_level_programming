#C - Structures, typedef
# Dog Structure Project

This project demonstrates how to define and manipulate a structure representing a dog, along with functions to handle its data and memory management.
The code provides a simple example of creating, initializing, printing, and freeing a dog struct in C.

## Description

In this project, we define a `dog` structure with the following elements:
- `name`: A pointer to a string representing the dog's name.
- `age`: A floating-point number representing the dog's age.
- `owner`: A pointer to a string representing the dog's owner's name.

### Key Functions

1. **Define a Dog Structure**  
   The `dog.h` header file defines the structure `struct dog` with three members: `name`, `age`, and `owner`. 
Additionally, a new type `dog_t` is created as an alias for `struct dog`.

2. **Initialize a Dog**  
   The function `init_dog()` initializes a `struct dog` variable with given values for `name`, `age`, and `owner`.

3. **Print Dog Information**  
   The function `print_dog()` takes a pointer to a `struct dog` and prints its information. 
If any element (like `name` or `owner`) is `NULL`, it prints `(nil)` instead of the value. It also handles the case where the pointer to the dog struct itself is `NULL`.

4. **Create a New Dog**  
   The function `new_dog()` dynamically allocates memory for a new dog and copies the provided name and owner strings. It returns a pointer to the newly created `dog_t` struct.

5. **Free Dog Memory**  
   The function `free_dog()` frees the dynamically allocated memory for the dog's name, owner, and the dog struct itself to avoid memory leaks.

