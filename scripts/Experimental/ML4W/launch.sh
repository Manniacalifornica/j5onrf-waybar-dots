#!/bin/bash
#  ____  _             _    __        __          _                 
# / ___|| |_ __ _ _ __| |_  \ \      / /_ _ _   _| |__   __ _ _ __  
# \___ \| __/ _` | '__| __|  \ \ /\ / / _` | | | | '_ \ / _` | '__| 
#  ___) | || (_| | |  | |_    \ V  V / (_| | |_| | |_) | (_| | |    
# |____/ \__\__,_|_|   \__|    \_/\_/ \__,_|\__, |_.__/ \__,_|_|    
#                                           |___/                   
# ML4W
# Edited by j5onrf (12-3-2024)
# Potentially better script for custom themes *Experimental*

# ----------------------------------------------------- 
# Quit all running waybar instances
# ----------------------------------------------------- 
killall waybar
sleep 0.5

# ----------------------------------------------------- 
# Read the current theme path from ~/.config/ml4w/settings/waybar-theme.sh
# ----------------------------------------------------- 
THEME_FILE="$HOME/.config/ml4w/settings/waybar-theme.sh"
if [ -f "$THEME_FILE" ]; then
    themestyle=$(cat "$THEME_FILE")
else
    echo "Theme configuration file not found! Using default theme."
    themestyle="/ml4w-blur;/ml4w-blur/white"  # Default theme if no custom theme is set
fi

# ----------------------------------------------------- 
# Split the theme string into base and variation parts
# ----------------------------------------------------- 
IFS=';' read -ra arrThemes <<< "$themestyle"
echo ":: Theme: ${arrThemes[0]}"

# ----------------------------------------------------- 
# Define paths to the theme configuration and style files
# ----------------------------------------------------- 
THEME_PATH="$HOME/.config/waybar/themes${arrThemes[0]}"  # Using the base part of the theme
CONFIG_FILE="config"
STYLE_FILE="style.css"

# ----------------------------------------------------- 
# Override with custom config or style if available
# ----------------------------------------------------- 
if [ -f "$THEME_PATH/config-custom" ]; then
    CONFIG_FILE="config-custom"
fi

if [ -f "$THEME_PATH/style-custom.css" ]; then
    STYLE_FILE="style-custom.css"
fi

# ----------------------------------------------------- 
# Launch Waybar with the selected theme configuration
# ----------------------------------------------------- 
if [ ! -f "$HOME/.cache/waybar-disabled" ]; then
    waybar -c "$THEME_PATH/$CONFIG_FILE" -s "$THEME_PATH/$STYLE_FILE" &
fi
