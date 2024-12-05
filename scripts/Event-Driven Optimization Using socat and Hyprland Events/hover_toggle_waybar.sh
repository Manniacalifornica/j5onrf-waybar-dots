#!/bin/bash

# Path to your Waybar toggle script
TOGGLE_SCRIPT=~/.config/waybar/toggle.sh

# Hover detection threshold for X coordinate
HOVER_THRESHOLD=1

# Variable to track if the mouse was previously in the hover area
LAST_HOVER_STATE=0

# Listen to cursor move events from Hyprland
socat - UNIX-CONNECT:/tmp/hypr/$HYPRLAND_INSTANCE_SIGNATURE.sock | while read -r line; do
    # Check if the event is a cursor movement
    if [[ $line == cursorMoved* ]]; then
        # Extract X coordinate from the event data
        X=$(echo "$line" | grep -oP '(?<=\s)\d+?(?=,)' | head -1)

        # Check if mouse is within the hover threshold
        if (( X <= HOVER_THRESHOLD )); then
            if (( LAST_HOVER_STATE == 0 )); then
                # Toggle Waybar state
                "$TOGGLE_SCRIPT"
                LAST_HOVER_STATE=1
            fi
        else
            LAST_HOVER_STATE=0
        fi
    fi
done

