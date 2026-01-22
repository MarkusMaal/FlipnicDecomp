# Decompilation of Flipnic

This is a decompiled version of the machine code for Flipnic executable in C created with Ghidra. It is NOT a full decompilation,
I just made this to help with reverse engineering other file formats as well as finding cheat codes. Still, pull requests are
welcome in case you want to help.

Currently only PAL version is here, NTSC versions have some differences.

## Files

- SLES_520.65: Executable for the PAL version of the game (V1.01)

## Some points of interest

- func choose_main_menu_entry: runs when you confirm selection on the main menu
- func initializeBeforeRanksSaveData: generates save data before ranks (also includes the ranks themselves)
- func initializeAfterRanksSaveData: generates the save data after ranks
- func resetOriginalGame: resets current playthrough data, such as the score, difficulty level, etc.
- func maybe_play_sound: plays a sound effect with an ID specified
- debug nudge check in func FUN_001706c0