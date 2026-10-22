#include <stdio.h>

struct Books {
    int publish_year;
    char* name;
    char* author_name;
    int sold;
    float price;
};

void set_price_book(struct Books* book, float price) {
    if (price <= 0.0) {
        fprintf(stderr, "The price coudn't be negative");
        return;
    }
    book->price = price;
    fprintf(stderr, "The of %s is set to new price: %f\n", book->name, price);
}

int main (void) {
    struct Books the_lord_of_the_ring = {
        .author_name = "The lord of the ring",
        .publish_year = 2004,
        .name = "The lord of the ring",
        .sold = 1902345,
        .price = 12.41f
    };

    printf("The name of book: %s\n", the_lord_of_the_ring.name);
    printf("The author of book: %s\n", the_lord_of_the_ring.author_name);
    printf("Price of this book: %f\n", the_lord_of_the_ring.price);
    printf("Publish_year of this book: %d\n", the_lord_of_the_ring.publish_year);
    printf("Sold of this book: %d\n", the_lord_of_the_ring.sold);
    set_price_book(&the_lord_of_the_ring, 20.f);
    return 0;
}
