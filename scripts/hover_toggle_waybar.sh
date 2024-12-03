#!/bin/bash

# Path to your Waybar toggle script
TOGGLE_SCRIPT=~/.config/waybar/toggle.sh

# Coordinates for the hover detection area (top-left corner, vertical waybar)
HOVER_WIDTH=1
HOVER_HEIGHT=1

# Variable to track if the mouse was previously in the hover area
LAST_HOVER_STATE=0

while true; do
    # Get mouse position using hyprctl
    POINTER_POSITION=$(hyprctl cursorpos)

    # Parse X and Y coordinates
    X=$(echo "$POINTER_POSITION" | cut -d',' -f1 | tr -d ' ')
    Y=$(echo "$POINTER_POSITION" | cut -d',' -f2 | tr -d ' ')

    # Ensure X and Y are numeric
    X=${X:-0}
    Y=${Y:-0}

    # Check if mouse is within the hover area
    if [ "$X" -le "$HOVER_WIDTH" ] && [ "$Y" -le "$HOVER_HEIGHT" ]; then
        if [ "$LAST_HOVER_STATE" -eq 0 ]; then
            # Toggle Waybar state
            "$TOGGLE_SCRIPT"
            # Update hover state to prevent rapid toggling
            LAST_HOVER_STATE=1
        fi
    else
        # Reset hover state when mouse leaves the hover area
        LAST_HOVER_STATE=0
    fi

    # Check every 0.1 seconds for mouse position
    sleep 0.5
done
