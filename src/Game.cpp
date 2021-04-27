#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int modeA(){
  int points = 0;
  while (points == 0) {
    printf("This first game is called: Fill in the verse! All you have to do is fill in the missing word(s). When you chose a mode this one is 'A'\n");
    string q1 = get_string("For God so ___ the world that he gave his one and only ___, that whoever believes in him shall not perish but have ____ life. John 3:16 niv \n");
    if (strstr(q1, "loved") != NULL) {
      if (strstr(q1, "Son") != NULL) {
        if (strstr(q1, "eternal") != NULL) {
          points++;
          printf("Correct, and you have %i point.\n", points);
        }
      }
    }

    string q2 = get_string("Be ___ and courageous. Do not be ____ or terrified because of them, for the Lord your God goes with you; he will ____ leave you nor forsake you. Deutoronomy 31:6\n");
    if (strstr(q2, "strong") != NULL) {
      if (strstr(q2, "afraid") != NULL) {
        if (strstr(q2, "never") != NULL) {
          printf("Correct! You now have one more point.\n");
          points++;
        }
      }
    }

    string q3 = get_string("What, then, shall we say in response to these things? If God is for us, who can be _____ us? Romans 8:31 niv\n   ");
    if (strstr(q3, "against") != NULL) {
      printf("You are correct!! Another point has been added.\n");
      points++;
    }

    string q4 = get_string("So do not ___, for I am with you; do not be ______, for I am your God. I will strengthen you and help you; I will uphold you with my righteous right hand. Isaiah 41:10\n    ");
    if (strstr(q4, "fear") != NULL) {
      if (strstr(q4, "dismayed") != NULL) {
        printf("Correct! Another point has been added!\n");
        points++;
      }
    }


  }
  return points;
}

int modeB() {
  int points = 0;
  while (points == 0) {
    string t2 = get_string("Mode B for future reference. This mode is called: Guess the person. This first person hung on a cross for our sins. This person was born in a manger to a virgin. Names need to be capital to work.  ");
    if (strstr(t2, "Jesus") != NULL) {
      points++;
      printf("Correct! +1 point\n");
    }

    string bq2 = get_string("Guess the person: Killed Christians and got blinded then his name changed to this. \n");
    if (strstr(bq2, "Paul") != NULL){
      printf("That is correct!");
      points++;
    }
    string bq3 = get_string("Guess the person: This king was killed whie in the bathroom. ");
    if (strstr(bq3, "Eglon") != NULL){
      printf("Correct!");
      points++;
    }
    string bq4 = get_string("Guess the person: This was the 3rd child of Adam and Eve. ");
    if (strstr(bq4, "Seth") != NULL){
      printf("Correct!");
      points++;
    }
    string bq5 = get_string("Guess the person This person became king when he was only 8 years old. ");
    if (strstr(bq5, "Josiah")) {
      printf("Correct!");
      points++;
    }
  }
  return points;
}

int main(void) {
  string user = get_string("Hello user! What would you like to be called?  ");
  int points = 0;
  printf("%s, welcome to my text based Bible game!\n", user);
  printf("Modes:\n A: Fill in the verse\nB: Guess the person\n");
  string mode = get_string("Which mode would you like to play: ");

  if (strstr(mode, "A") != NULL) {
    points = modeA();
  }
  else if (strstr(mode, "B") != NULL) {
    points = modeB();
  }
}
