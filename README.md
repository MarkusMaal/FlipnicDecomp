# Decompilation of Flipnic

This is a decompiled version of the machine code for Flipnic executable in C created with Ghidra. It is NOT a full decompilation,
I just made this to help with reverse engineering other file formats as well as finding cheat codes. Still, pull requests are
welcome in case you want to help.

Currently only PAL version is here, NTSC versions have some differences.

## Files

- SLES_520.65: Executable for the PAL version of the game (V1.01)
- Flipnic_YYYY_MM_DD.gar: Ghidra project archive

## Naming conventions

- Any function or variable named in lower snake_case means its purpose is not 100% certain
- Any variable with an @ signifies a global variable and the value after the @ symbol is the memory address
- ResetFlag signifies a variable where changing its value to zero resets some specific value back to default and the reset flag itself will instantly become 1 again
- Any function named in PascalCase I'm fairly confident about
- Add<Number> is a function returns passed parameter with Number added to it
- NullVoid is a function which performs no operations

## Some points of interest

- func main: the main function for game-specific code, last call inside entrypoint
- func GetStagePlayabilityStatus: determines which menu card to display for the stage
- func AreAllMissionsCompleted: checks if all missions for a stage are complete
- func InitializeVideoMode: runs at startup, sets the video mode as specified by SetGsCrt syscall
- func Trigger_PauseMenu: called when you pause the game
- func AbsValue: gets absolute value for a number (i.e. makes negative numbers become positive)
- func Trigger_StageStatus: called when you open stage status in-game
- func choose_main_menu_entry: runs when you confirm selection on the main menu
- func initializeBeforeRanksSaveData: generates save data before ranks (also includes the ranks themselves)
- func initializeAfterRanksSaveData: generates the save data after ranks
- func resetOriginalGame: resets current playthrough data, such as the score, difficulty level, etc.
- func maybe_play_sound: plays a sound effect with an ID specified
- debug nudge check in func FUN_001706c0
- tick_rate - speed multiplier for the game
- SavedataPtr@0x22ca84 - that's the memory address that stores the pointer to where save data is located
- unkPtrOffset@0x22c588 - you can use this to find various in-game things (e.g. toggle for OSD visibility)