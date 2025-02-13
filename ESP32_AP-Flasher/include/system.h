#include <Arduino.h>

#define WAKEUP_REASON_TIMED 0
#define WAKEUP_REASON_BOOT 1
#define WAKEUP_REASON_GPIO 2
#define WAKEUP_REASON_NFC 3
#define WAKEUP_REASON_FIRSTBOOT 0xFC
#define WAKEUP_REASON_NETWORK_SCAN 0xFD
#define WAKEUP_REASON_WDT_RESET 0xFE

void init_time();
void logLine(char* buffer);
void logLine(String text);
void logStartUp();
