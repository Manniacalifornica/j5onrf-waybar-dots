/*
#  ____        __ _  
# |  _ \ ___  / _(_) 
# | |_) / _ \| |_| | 
# |  _ < (_) |  _| | 
# |_| \_\___/|_| |_| 
#                    
#  ML4W
# edited by j5onrf (2025) for Rofi-Min-900-3
# ----------------------------------------------------- 
*/

/* ---- Configuration ---- */
configuration {
    modi:                       "drun,run";
    font:                       "JetBrainsMono Nerd Font Propo 11";
    show-icons:                 true;
    icon-theme:                 "Kora";
    display-drun:               "APPS";
    display-run:                "RUN";
    display-filebrowser:        "FILES";
    display-window:             "WINDOW";
	drun-display-format:        "{name}";
    hover-select:               false;
    scroll-method:              1;
    me-select-entry:            "";
    me-accept-entry:            "MousePrimary";
    window-format:              "{w} · {c} · {t}";
    
}

/* ---- Load font ---- 
@import "~/.config/ml4w/settings/rofi-font.rasi" */

/* ---- Load pywal colors (custom wal template) ---- 
@import "~/.cache/wal/colors-rofi-pywal" */

/* ---- Load wallpaper ---- 
@import "~/.config/ml4w/cache/current_wallpaper.rasi" */

/* ---- Load border width ---- 
@import "~/.config/ml4w/settings/rofi-border.rasi" */

/* ---- Window ---- */
window {
    width:                        900px;
    x-offset:                     0px;
    y-offset:                     0px;
    spacing:                      0px;
    padding:                      0px;
    margin:                       0px; 
    color:                        #FFFFFF;
    border:                       3px;
    border-color:                 #BBBBFF;
    cursor:                       "default";
    transparency:                 "real";
    location:                     center;
    anchor:                       center;
    fullscreen:                   false;
    enabled:                      true;
    border-radius:                10px;
    background-color:             transparent;
}

/* ---- Mainbox ---- */
mainbox {
    enabled:                      true;
    orientation:                  vertical;
    spacing:                      0px;
    margin:                       0px;
    background-color:             #BBBBFF;
}

/* ---- Imagebox ---- */
imagebox {
    padding:                      18px;
    background-color:             transparent;
    orientation:                  vertical;
    children:                     ["listbox","imagebox", "inputbar" ];
}

/* ---- Listbox ---- */
listbox {
    spacing:                     20px;
    background-color:            transparent;
    orientation:                 vertical;
    children:                    [ "message", "listview" ];
}

/* ---- Dummy ---- */
dummy {
    background-color:            transparent;
}

/* ---- Inputbar ---- */
inputbar {
    enabled:                      true;
    text-color:                   #BBBBFF;
    spacing:                      10px;
    padding:                      15px;
    margin:                      13px;
    border-radius:                10px;
    background-color:             #13131D;
    children:                     [ "textbox-prompt-colon", "entry" ];
}

textbox-prompt-colon {
    enabled:                      true;
    expand:                       false;
    str:                          "";
    padding:                      0px 5px 0px 0px;
    background-color:             transparent;
    text-color:                   #BBBBFF;
}

entry {
    enabled:                      true;
    background-color:             transparent;
    text-color:                   inherit;
    cursor:                       text;
    placeholder:                  "Search";
    placeholder-color:            inherit;
}


/* ---- Listview ---- */
listview {
    enabled:                      true;
    columns:                      3;
    lines:                        8;
    cycle:                        false;
    dynamic:                      false;
    scrollbar:                    false;
    layout:                       vertical;
    reverse:                      false;
    fixed-height:                 true;
    fixed-columns:                true;
    spacing:                      0px;
    padding:                      10px;
    margin:                       0px;
    background-color:             #13131D;
    border:0px;
}

/* ---- Element ---- */
element {
    enabled:                      true;
    padding:                      10px;
    margin:                       5px;
    cursor:                       pointer;
    background-color:             #13131D;
    border-radius:                10px;
}

element normal.normal {
    background-color:            #13131D;
    text-color:                  #BBBBFF;
}

element normal.urgent {
    background-color:            #13131D;
    text-color:                  #BBBBFF;
}

element normal.active {
    background-color:            #13131D;
    text-color:                  #BBBBFF;
}

element selected.normal {
    background-color:            #BBBBFF;
    text-color:                  #13131D;
}

element selected.urgent {
    background-color:            #13131D;
    text-color:                  #BBBBFF;
}

element selected.active {
    background-color:            #13131D;
    text-color:                  #BBBBFF;
}

element alternate.normal {
    background-color:            #13131D;
    text-color:                  #BBBBFF;
}

element alternate.urgent {
    background-color:            #13131D;
    text-color:                  #BBBBFF;
}

element alternate.active {
    background-color:            #13131D;
    text-color:                  #BBBBFF;
}

element-icon {
    background-color:            transparent;
    text-color:                  inherit;
    size:                        32px;
    cursor:                      inherit;
}

element-text {
    background-color:            transparent;
    text-color:                  inherit;
    cursor:                      inherit;
    vertical-align:              0.5;
    horizontal-align:            0.0;
}

/*****----- Message -----*****/
message {
    background-color:            transparent;
    border:0px;
    margin:20px 0px 0px 0px;
    padding:0px;
    spacing:0px;
    border-radius: 10px;
}

textbox {
    padding:                     15px;
    margin:                      0px;
    border-radius:               0px;
    background-color:            #13131D;
    text-color:                  #BBBBFF;
    vertical-align:              0.5;
    horizontal-align:            0.0;
}

error-message {
    padding:                     15px;
    border-radius:               10px;
    background-color:            #13131D;
    text-color:                  #BBBBFF;
}
