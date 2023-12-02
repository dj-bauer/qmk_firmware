// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md
// #define PERMISSIVE_HOLD
#define TAPPING_TERM 200
#define TAP_CODE_DELAY 50
// #define IGNORE_MOD_TAP_INTERRUPT // apparently this allows HOLD_ON_OTHER_KEY_PRESS to work with mod keys and decreases the delay
#define HOLD_ON_OTHER_KEY_PRESS 
#define TAPPING_FORCE_HOLD
#define QUICK_TAP_TERM 0

#define MASTER_LEFT