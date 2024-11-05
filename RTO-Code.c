#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 51     
#define CODE_LENGTH 5    
#define AREA_LENGTH 100     

typedef struct {
    char code[CODE_LENGTH];   
    char area[AREA_LENGTH];     
} DirectoryEntry;

char searchDirectory(DirectoryEntry directory[], char n, const char* code) {
    for (char i = 0; i < n; i++) {
        if (strcmp(directory[i].code, code) == 0) {
            printf("Code Number: MH %s\n", directory[i].code);
            printf("Area: %s\n", directory[i].area);
            return 1;
        }
    }
    return 0;  
}

int main() {
    DirectoryEntry directory[MAX_ENTRIES] = {
        {"01", "Mumbai(South)"},
        {"02", "Mumbai(West)"},
        {"03", "Mumbai(East)"},
        {"04", "Thane"},
        {"05", "Thane"},
        {"06", "Pen"},
        {"07", "Sindhudurg"},
        {"08", "Ratnagiri"},
        {"09", "Kolhapur"},
        {"10", "Sangli"},
        {"11", "Satara"},
        {"12", "Pune"},
        {"13", "Solapur"},
        {"14", "PCMC"},
        {"15", "Nashik"},
        {"16", "Ahmadnagar"},
        {"17", "Shrirampur"},
        {"18", "Dhule"},
        {"19", "Jalgaon"},
        {"20", "Aurangabad"},
        {"21", "Jalna"},
        {"22", "Parbhani"},
        {"23", "Beed"},
        {"24", "Latur"},
        {"25", "Osmanabad"},
        {"26", "Naded"},
        {"27", "Amravati"},
        {"28", "Buldhana"},
        {"29", "Yavatmal"},
        {"30", "Akola"},
        {"31", "Nagpur"},
        {"32", "Wardha"},
        {"33", "Gadchiroli"},
        {"34", "Chandrapur"},
        {"35", "Gondia"},
        {"36", "Bhandara"},
        {"37", "Washim"},
        {"38", "Hingoli"},
        {"39", "Nandurbar"},
        {"40", "Wadi"},
        {"41", "Malegaon"},
        {"42", "Baramati"},
        {"43", "Navi Mumbai"},
        {"44", "Beed"},
        {"45", "Solapur"},
        {"46", "Panvel"},
        {"47", "Mumbai"},
        {"48", "Thane"},
        {"49", "Nagpur (east)"},
        {"50", "Karad"},
        {"51", "Nashik"},
      
    };

    char inputcode[CODE_LENGTH];

    printf("Enter a code number to search (e.g.12)\nMH ");
    if (scanf("%5s", inputcode) != 1) {
        printf("Invalid input! Please enter a valid code number.\n");
        return 1; 
    }

    if (!searchDirectory(directory, MAX_ENTRIES, inputcode)) {
        printf("code number %s is not found in the directory.\n", inputcode);
    }

    return 0;
}