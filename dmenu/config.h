/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:bold:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	
    // Nord
    // [SchemeNorm] = { "#D8DEE9", "#2E3440" }, // change, --
	// [SchemeSel] = { "#ECEFF4", "#5E81AC" },  // --,    change 
	// [SchemeOut] = { "#ECEFF4", "#5E81AC" },  // change, --     7ED957

    // Gruvbox
    [SchemeNorm] = { "#ebdbb2", "#282828" }, // Normal text and background
    [SchemeSel]  = { "#282828", "#458588" }, // Selected item text and background
    [SchemeOut]  = { "#282828", "#b8bb26" }, // Output-specific item text and background
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
