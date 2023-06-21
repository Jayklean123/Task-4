// Congrats on coming till here, but don't get too excited yet.

// The real exploitation part begins now.....  ..... ....

// To run the test environment on localhost similar to original server download exec.sh from [https://bit.ly/anon_setup] and
// make sure the file is executable and is in same directory as script.c

// use following command
// bash ./exec.sh

// then use 'nc localhost 5134' to simulate server's environment locally.

// this script has some compilation errors, fix them......

#include <stdio.h>
#include <stdlib.h>
//#include "Report.h"

int Chatfilter(char* key){
    for(char bits = *key++; bits != '\x00'; bits = *key++) {
        switch(bits){
            case ':':
            case '\\':
            case 'U': case 'S': case 'E':
            case 'N': case 'O': case 'P': case '?':
            case '/':
                return 0;
        }
    }
    return 1;
}


void restartoncrash() {
    char key[16] = {0};  // the array size on the server will be different, first try locally using any value & then better find real one to gain full access.
    printf("\n\n\nAnon-IITK Chat Moderation firewall\n\n");
    printf("Enter your alloted key to proceed further :");
    gets(key);
    if(Chatfilter(key)){
        printf("%s", key);
        printf("\nWrong Key entered, stop sleeping and focus on keyboard while typing your key.\n");
    }
    else{
        printf("\n\nBe Carefull with the words!!\n");
        printf("This action will be reported to authorities.\n");
//        report();
        exit(-1);
    }
}

int main(int argc, char* argv[]) {
    printf("Welcome to the Anon-IITK server\n\n");
    printf("Use this link to download the source code of program running in this server [https://bit.ly/anon_script]");
    while(1) {
        restartoncrash();
    }
}
