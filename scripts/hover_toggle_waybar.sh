#!/bin/bash

# Path to your Waybar toggle script
TOGGLE_SCRIPT=~/.config/waybar/toggle.sh

# Coordinates for the hover detection area (top-left corner, vertical waybar)
HOVER_WIDTH=1
HOVER_HEIGHT=1

# Variable to track if the mouse was previously in the hover area
LAST_HOVER_STATE=0

while true; do
    # Get mouse position using hyprctl and extract X, Y coordinates
    read X Y <<<$(hyprctl cursorpos | tr -d ' ' | tr ',' ' ')

    # Check if mouse is within the hover area
    if (( X <= HOVER_WIDTH && Y <= HOVER_HEIGHT )); then
        if (( LAST_HOVER_STATE == 0 )); then
            # Toggle Waybar state
            "$TOGGLE_SCRIPT"
            LAST_HOVER_STATE=1
        fi
    else
        LAST_HOVER_STATE=0
    fi

    # Check every 0.5 seconds for mouse position
    sleep 0.5
done

