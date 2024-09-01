#define U_MOUSE_SCROLL_MAX 100                    /* <--- New max speed setting (default: 10) */

#undef SCROLL_UP
#undef SCROLL_DOWN
#undef SCROLL_LEFT
#undef SCROLL_RIGHT
#define SCROLL_UP SCROLL_Y(U_MOUSE_SCROLL_MAX)
#define SCROLL_DOWN SCROLL_Y(-U_MOUSE_SCROLL_MAX)
#define SCROLL_LEFT SCROLL_X(-U_MOUSE_SCROLL_MAX)
#define SCROLL_RIGHT SCROLL_X(U_MOUSE_SCROLL_MAX)

&mwh {
  time-to-max-speed-ms = <500>;                 /* <--- How long time until max speed is reached */
};
