#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void handle_alarm() {
    printf("Beep\n");
    exit(0);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <seconds>\n", argv[0]);
        return 1;
    }

    int seconds = atoi(argv[1]);

    // Create a timer to trigger the alarm
    SetTimer(NULL, 0, seconds * 1000, (TIMERPROC)handle_alarm);

    // Main loop (do other work here if needed)
    while (1) {
        // Sleep or perform other tasks
        Sleep(1000); // Sleep for 1 second
    }

    return 0;
}
