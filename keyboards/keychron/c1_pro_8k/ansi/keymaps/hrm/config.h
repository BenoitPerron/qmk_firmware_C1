/* Keychron C1 Pro 8K ANSI - home row mods (Windows layer)
 * Keymap "hrm" for Keychron/qmk_firmware, branch 2025q3.
 */
#pragma once

/* Hold longer than this = modifier. Tuned per key in keymap.c. */
#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY

/* Press AND release another key while a home row key is held = modifier,
 * even before TAPPING_TERM. Applies to opposite-hand chords (see CHORDAL_HOLD). */
#define PERMISSIVE_HOLD

/* Same-hand rolls (e.g. "sd", "as") stay letters unless you hold past
 * TAPPING_TERM. Opposite-hand chords (F + J...) resolve as mods right away. */
#define CHORDAL_HOLD

/* Tap then re-press within this window = repeat the letter ("ffff"). */
#define QUICK_TAP_TERM 120

/* Typing-streak protection: a home row key pressed within this many ms of
 * the previous letter is always a letter. Shift keys use a shorter value
 * in keymap.c so capitals mid-sentence still work. */
#define FLOW_TAP_TERM 150