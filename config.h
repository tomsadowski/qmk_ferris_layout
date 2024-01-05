// tsadowski

#pragma once

// The default is 50. This makes the mouse ~3 times faster and more accurate
#define MOUSEKEY_INTERVAL 16
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#define MOUSEKEY_TIME_TO_MAX 80
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_DELAY 100
// It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_DELAY 100
// The default is 100
#define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

// recognize primary/secondary halves
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500

// combo reference layer
#define COMBO_ONLY_FROM_LAYER 0
#define COMBO_SHOULD_TRIGGER
// combo shapes should make it easy to hit keys at the same time,
// a narrow activation window minimizes accidental triggering
#define COMBO_STRICT_TIMER
#define COMBO_TERM 45

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
