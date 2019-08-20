#include <stdint.h>
#include <stdio.h>

// tests/test1-other.rio

const char* const tests_test1_other_message = "Hello";

// tests/test1.rio

typedef struct tests_test1_Person {
  const char* name;
  int_fast32_t age;
} tests_test1_Person;

typedef struct rio_Span_int {
  int_fast32_t* items;
  int_fast32_t len;
} rio_Span_int;

typedef struct rio_Span_string {
  const char** items;
  int_fast32_t len;
} rio_Span_string;

void tests_test1_greet(const char* const name, int_fast32_t const age);
void tests_test1_greet_person(tests_test1_Person const person);

int main() {
  const char* const name = "world";
  int_fast32_t const age = 75;
  rio_Span_int const scores = {(int_fast32_t[]){45, 63, 22, -8}, 4};
  rio_Span_int const mores = {(int_fast32_t[]){1}, 1};
  rio_Span_string const words = {(const char*[]){"hi", "there"}, 2};
  {
    rio_Span_string rio_span = words;
    for (int_fast32_t rio_index = 0; rio_index < rio_span.len; rio_index += 1) {
      const char* word = rio_span.items[rio_index];
      printf("word: %s\n", word);
    }
  }
  {
    rio_Span_string rio_span = words;
    for (int_fast32_t rio_index = 0; rio_index < rio_span.len; rio_index += 1) {
      printf("hi\n");
    }
  }
  tests_test1_greet(name, age);
  tests_test1_greet_person((tests_test1_Person){.name = name, .age = 80});
}

void tests_test1_greet(const char* const name, int_fast32_t const age) {
  printf("%s, %s!\n", tests_test1_other_message, name);
  printf("You are %d years old.\n", age);
}

void tests_test1_greet_person(tests_test1_Person const person) {
  printf("%s is %d years old.\n", person.name, person.age);
}
