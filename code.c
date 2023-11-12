#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library {
    char book_name[20];
    char author[20];
    int pages;
    float price;
    char book_genre[20];

};

struct library lib[100];
    int  count=0;
    
void AddBook();
void SearchByAuthor();
void Display();
void SearchByGenre();
int NumberOfBooks();



int main(){
    
    int option;
    printf("Welcome to the library!\n");
    printf("Choose an option :\n 1. Add book information\n 2.Display book information \n 3.Search by author \n 4.Search by genre \n 5.Number of books\n");
    scanf("%d",&option);

    switch(option){
        case 1 : AddBook();
        break;
        case 2 : Display();
        break;
        case 3 : SearchByAuthor();
        break;
        case 4 : SearchByGenre();
        break;
        case 5 : NumberOfBooks();
        break;   
    }
    return 0;
}

void Display(){
    printf("The books that we have are: ");
    for (int i=0; i<count; i++){
        printf("Book's name : %s",lib[i].book_name);
        printf("Book's author is : %s",lib[i].author);
        printf("Book's pages : %d",lib[i].pages);
        printf("Book's price : %f",lib[i].price);
        printf("Book's genre : %s",lib[i].genre);
        printf("---------------------------\n");
    }
}

void AddBook(){
   
    if (count < 100){ 
        for (int i = 0; i < count + 1; i++) {
        printf("Enter the book's name :");
        scanf("%s", lib[i].book_name);
        printf("Enter the author's name :");
        scanf("%s", lib[i].author);
        printf("Enter the book's pages :");
        scanf("%d", lib[i].pages);
        printf("Enter the book's price :");
        scanf("%f", lib[i].price);
        printf("Enter the book's genre :");
        scanf("%s", lib[i].book_genre);
        count++;}
    else { 
        printf("Library is full!\n");}
        }
}

void SearchByAuthor(){
    char auth[20];
    printf("Enter the author's name :");
    scanf("%s",auth);
    int authorFound = 0;
    for (int i=0; i<count+1;i++){
        if (strcmp(auth,lib[i].author) == 0){
            printf("Book's name: %s\n", lib[i].book_name);
            printf("Book's pages: %d\n", lib[i].pages);
            printf("Book's price: %f\n", lib[i].price);
            printf("Book's genre: %s\n", lib[i].book_genre);
            printf("---------------------------\n");
            authorFound = 1;
        }  
    }
    if (!authorFound){
        printf("No books found for the author: %s\n", auth);
    }
}


void SearchByGenre(){
    char genre[20];
    printf("Enter the book's genre :");
    scanf("%s",genre);
    int genreFound = 0;
    for (int i=0; i<count+1;i++){
        if (strcmp(genre,lib[i].genre) == 0){
            printf("Book's name: %s\n", lib[i].book_name);
            printf("Book's pages: %d\n", lib[i].pages);
            printf("Book's price: %f\n", lib[i].price);
            printf("Book's genre: %s\n", lib[i].book_genre);
            printf("---------------------------\n");
            genreFound = 1;
        }  
    }
    if (!genreFound){
        printf("No books found for this genre: %s\n", genre);
    }

}

int NumberOfBooks(){
    return count;
}
