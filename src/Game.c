#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int modeA() {
  int points = 0;
  while (points == 0) {

    string version = get_string("What version would you like? Currently supported are: NIV HCSB (Note: the verses used may not be the same.)\n ");

    if (strstr(version, "HCSB") != NULL){
      printf("Fill in the verse! All you have to do is fill in the missing word(s).'\n");
      string hcsb1 = get_string("We know that all things work together for the ____ of those who -____ God: of those who are called according to His purpose. Romans 8:28 hcsb\n  ");
      if (strstr(hcsb1, "good") != NULL){
        if (strstr(hcsb1, "love") != NULL){
          printf("Correct! +1\n");
          points++;
        }
      }
      string hcsb2 = get_string("For I know the ___ I have for you' this is the Lord's declaration 'plans for your _____, not for disaster, to give you a future and a hope. Jeremiah 29:11 hcsb\n ");
      if (strstr(hcsb2, "plans") != NULL){
        if (strstr(hcsb2, "welfare") != NULL){
          printf("Correct!\n");
          points++;
        }
      }
      string hcsb3 = get_string("You are the ____ of the world. A city on a hill cannot be hidden. Matthew 5:14 hcsb\n ");
      if (strstr(hcsb3, "light") != NULL){
        printf("Correct! +1\n");
        points++;
      }
      string hcsb4 = get_string("Keep ____ and it will be given to you. Keep ____ and you will find. Keep ____ and the door will be opened to you. Matthew 7:7 hcsb\n ");
      if (strstr(hcsb4, "asking") != NULL){
        if (strstr(hcsb4, "searching") != NULL){
          if (strstr(hcsb4, "knocking") != NULL){
            printf("Correct +1\n");
            points++;
          }
        }
        string hcsb5 = get_string("Love the Lord your God with all your ____, with all your ___, with all your ____, and with all your strength. Mark 12:30 hcsb\n ");
        if (strstr(hcsb5, "heart") != NULL){
          if (strstr(hcsb5, "soul") != NULL){
            if (strstr(hcsb5, "mind") != NULL){
              printf("Correct! +1");
              points++;
            }
          }
        }
      }
    }
    if (strstr(version, "NIV") != NULL) {
      printf("Fill in the verse! All you have to do is fill in the missing word(s).'\n");
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
      string q5 = get_string("The Lord is my _____ and my salvation whom shall I fear? The Lord is the stronghold of my ____ of whom shall I be afraid? Psalm 27:1 niv ");
      if (strstr(q5, "light") != NULL){
        if (strstr(q5, "life") != NULL){
          printf("Correct! +1");
        }
      }
      string q6 = get_string("He replied, 'If you have faith as small as a _____ seed, you can say to this mulberrytree, 'Be uprooted and planted in the sea', and it will obey you'");
      if (strstr(q6, "mustard") != NULL){
        printf("Correct! ");
      }

    }
    return points;
    printf("Points: %i", points);
  }
  return 0;
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
    if (strstr(bq2, "Paul") != NULL) {
      printf("That is correct!");
      points++;
    }
    string bq3 = get_string("Guess the person: This king was killed while in the bathroom. ");
    if (strstr(bq3, "Eglon") != NULL) {
      printf("Correct!\n");
      points++;
    }
    string bq4 = get_string("Guess the person: This was the 3rd child of Adam and Eve. \n");
    if (strstr(bq4, "Seth\n") != NULL) {
      printf("Correct!");
      points++;

    }

    printf("You said: %s The answer is: Jesus\n You said %s The answer is: Paul\n You said: %s The answer is: Eglon\n You said: %s The answer is: Seth", t2, bq2, bq3, bq4);

  }

  return points;
}

int modeC() {
  int points = 0;
  while (points == 0){
    string cq1 = get_string("True or False chose one and make sure the first letter is capital: There is a talking donkey in the Bible. ");
    if (strstr(cq1, "True") != NULL){
      printf("Correct!");
      points ++;
    }
    string cq2 = get_string("True or False: The Bible has 60 books total.\n ");
    if (strstr(cq2, "False") != NULL){
      printf("Correct! +1");
      int bonusc1 = get_int("As a bonus do you know how many books it has?\n ");
      if (bonusc1 == 66){
        printf("Wow! That is correct! +2");
        points++;
        points++;
      }
    }
    else if (strstr(cq2, "True") != NULL){
      printf("Incorrect. The answer is False. It has 66 books.");
    }
  }
  return 0;
}


int main(void) {
  string user = get_string("Hello user! What would you like to be called?  ");
  int points = 0;
  printf("%s, welcome to my text based Bible game!\n", user);
  printf("Modes:\n A: Fill in the verse\nB: Guess the person\n");
  string mode = get_string("Which mode would you like to play: ");
  if (strstr(mode, "A") != NULL) {
    points = modeA();
  } if (strstr(mode, "B") != NULL) {
    points = modeB();
  } if (strstr(mode, "C") != NULL) {
    points = modeC();
  }
}
