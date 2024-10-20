// __        __          _                 
// \ \      / /_ _ _   _| |__   __ _ _ __  
//  \ \ /\ / / _` | | | | '_ \ / _` | '__| 
//   \ V  V / (_| | |_| | |_) | (_| | |    
//    \_/\_/ \__,_|\__, |_.__/ \__,_|_|    
//                 |___/                   
//  ML4W
// 2025 Min-Hyprtidy
// ----------------------------------------------------- 
//
{
    // General Settings
    "layer": "top",
    "margin-bottom": 0,
    "margin-top": 0,
    "layer": "top",
    "margin-left": 0,
    "margin-right": 0,    
    "spacing": 0,

    // Load Modules
    "include": [
        "~/.config/ml4w/settings/waybar-quicklinks.json",
        "~/.config/waybar/modules.json"
    ],

    // Pulseaudio
    "pulseaudio": {
        // "scroll-step": 1, // %, can be a float
        "format": "                                                                                       <span font='11'>{icon}</span>{volume}",
        "format-muted": " {volume}",
        "format-icons": {
        "default": [""]
        },
        "on-click": "pactl set-sink-mute @DEFAULT_SINK@ toggle",
        "on-click-right": "ags -t bar-0",
        "format-muted": "                                                                                       <span font='11'>{icon}</span>{volume}",
    },
    
      // Clock :%I:%M  %a%e
  "clock": {
    "format": "{:%I:%M  %a%e}",
//   "on-click": "ags -t calendar",
     "on-click": "ags -t calendarmenu",
     "on-click-right": "gapplication launch org.gnome.Weather",
    "tooltip": false
  },
  
    // Rofi Application Launcher 󱄅  󱗼  󰣇
  "custom/appmenu": {
    "format": "",
 // "on-click": "rofi -show drun -replace",
 // "on-click": "ags -t dashboardmenu",
    "on-click": "~/.config/rofi/bin/launcher",
 // "on-click-right": "ags -t dashboardmenu",
    "on-click-right": "~/.config/rofi/bin/launcher2",
    "tooltip": false
  },
  
    // Power Menu 
  "custom/exit": {
    "format": "",
    "on-click": "wlogout",
//  "on-click-right": "ags -t sidebar",
//  "on-click-right": "ags -t notificationsmenu",
    "on-click-right": "com.ml4w.welcome",
    "tooltip": false
  },
  
    // Modules Left
    "modules-left": [
        "custom/appmenu",
        "group/links",
        "group/settings",        
        "hyprland/workspaces#rw"
    ],

    // Modules Center
    "modules-center": [
        "clock" 
    ],

    // Modules Right    
    "modules-right": [  
        "pulseaudio",  
        "custom/vpn",
        "cpu",
        "memory",
        "group/hardware",
   //   "tray",
        "custom/exit"
    ]
}