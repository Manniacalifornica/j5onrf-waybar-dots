# Full Waybar Scroll

### Left -center scrolls workspaces. Right center- scrolls volume
  
  - Tips! Customize scroll in modules.json/config - 'persistent-workspaces' - 'pulseaudio' 'format:'

<details><summary>example [i]</summary>
<p>
  
# High Function
### Faster access to workspaces & volume - [example.conf](https://github.com/j5onrf/dots/tree/main/waybar/example-full-waybar-scroll)

[gnome-extension-power]
![Screenshot-2024-09-14_07:49:163](https://github.com/user-attachments/assets/8b03d066-3c46-41dc-84d5-7b119fd36071)

</p>
</details>

  - This is a demo template. Fix it to work on your system.

  - Arch and [ML4W](https://github.com/mylinuxforwork/dotfiles)

 <details><summary>opacity & blur [i]</summary>
<p>
  To add blur I'm using 'blur wallpaper effect' for better performance. Everything with opacity <1 will have blur including waybar. If using ml4w, right click on wallpaper icon to select wallpaper effect blur* = 1,2.
  
```
  decoration {
    rounding = 0
    blur {
        enabled = false
        size = 6 # default 12
        passes = 3 # default 4
        new_optimizations = on
        ignore_opacity = true
        xray = true
      # blurls = waybar
    }
    active_opacity = 0.9 # 0.95
    inactive_opacity = 0.6
    fullscreen_opacity = 1

    drop_shadow = false
    shadow_range = 30
    shadow_render_power = 3
    col.shadow = 0x66000000
}
```
</p>
</details>

# Hyprpanel

(2024-oct1) Starting off oct trying out [Hyprpanel](https://www.reddit.com/r/unixporn/comments/1frzwbx/hyprland_hyprpanel_w_25_new_themes_20_prebuilt/#lightbox)
![Screenshot-2024-10-01_08:57:24](https://github.com/user-attachments/assets/17ae8b9c-26aa-496e-a6cc-f37e825035fe)
![Screenshot-2024-10-13_19:29:15](https://github.com/user-attachments/assets/7d1e3588-cb0e-48ab-825a-601d947211f3)

<details><summary>Toggle on/off [i]</summary>
<p>

```
ags -t bar-0  # Toggle Hyprpanel
bind = $mainMod CTRL, B,  # Toggle Waybar
```

</p>

</details>

<details><summary>+ScreenShots</summary>
<p>

(2024-oct13) Hyprpanel & Waybar
![Screenshot-2024-10-14_12:16:28](https://github.com/user-attachments/assets/1e6238e0-3cda-4981-92ff-16d466da76e4)

<details><summary>+ScreenShots</summary>
<p>
  
(2024-oct) Reserved
![Screenshot-2024-10-13_19:17:09](https://github.com/user-attachments/assets/e1f33e52-70ef-46a6-9d44-4b2f7fadaf16)

<details><summary>+ScreenShots</summary>
<p>
  
(2024-oct) Reserved

```diff

```

</details>
</details>
</p>
</details>

# Waybar

(2024-oct14) Min-Hyprtidy [dots](https://github.com/j5onrf/dots/tree/main/waybar/Min-Hyprtidy) 
![Screenshot-2024-10-14_15:13:50](https://github.com/user-attachments/assets/48a256de-b979-49d9-8912-c2c4be1d33d0)
![Screenshot-2024-10-14_06:48:44](https://github.com/user-attachments/assets/29332da7-133b-427d-9d94-b57c46a039dd)
![Screenshot-2024-10-15_22:51:17](https://github.com/user-attachments/assets/317e3679-d5fa-4986-8e8f-3953dd98834c)

(2024-oct9) Min-Hyprclean 
![Screenshot-2024-10-09_08:59:42](https://github.com/user-attachments/assets/68e0ae88-b51d-46d4-8040-39a87f8578f4)


(2024-sep29) Min-Hyprnome 
![Screenshot-2024-09-28_14:16:32](https://github.com/user-attachments/assets/1a9a744f-90b9-4a2e-9f90-a4d97d31be1f)


(2024-sep28) Min-Modern<sup>2</sup>
![Screenshot-2024-09-27_12:39:19](https://github.com/user-attachments/assets/b73806fb-602b-4812-b628-77883e80a278)
![Screenshot-2024-09-28_10:11:39](https://github.com/user-attachments/assets/47f2df57-cc1e-481b-9384-58412e8c3af7)

(2024-sep25) Min-Modern 
![Screenshot-2024-09-25_11:57:23](https://github.com/user-attachments/assets/d4c37518-fe92-4841-84c0-51f421986f61)

(2024-sep22) Min-Monstr 
![Screenshot-2024-09-21_10:38:37](https://github.com/user-attachments/assets/a7af54b7-3288-4c38-8272-f217c2a3921d)
![Screenshot-2024-09-22_17:16:32](https://github.com/user-attachments/assets/2d673ff2-6801-4b40-a18b-cd171a85e8f9)

<details><summary>Archived</summary>
<p>
  
[ml4w-min-j5][rubik-font] (2024-sep) [dots-released](https://github.com/j5onrf/dots/tree/main/waybar/ml4w-min-j5)
![Screenshot-2024-09-13_08:04:12](https://github.com/user-attachments/assets/f48a4b73-7ac4-41b3-8639-388769214b29)
[gnome-extension-power]
![Screenshot-2024-09-14_07:49:163](https://github.com/user-attachments/assets/8b03d066-3c46-41dc-84d5-7b119fd36071)
[minimal-plus-function][group-sliders]
![minimal-plus-function](https://github.com/user-attachments/assets/4a129265-c715-4909-a86a-911fa3adcf10)
["hyprland/workspaces#rw" icons rewrite from] [Jakoolit dots](https://github.com/j5onrf/dots/tree/main/waybar/hyprland/workspaces%23rw%20icons%20rewrite%20from%20Jakoolit%20dots)
![Screenshot-2024-09-09_11:20:01](https://github.com/user-attachments/assets/54fa7009-d4e5-4306-845e-66c29e5c5067)

</p>
</details>

# Hypr<sup> / shots</sup>

(2024-oct) Min-Hyprtidy [Rofi<sup>900</sup>-3](https://github.com/j5onrf/dots/tree/main/rofi/Rofi-900-3column)
![Screenshot-2024-10-14_08:10:15](https://github.com/user-attachments/assets/ba04a317-20d5-4411-a14f-a8c9f577b426)

<details><summary>+ScreenShots</summary>
<p>

[Screenshot Archive](https://github.com/j5onrf/dots/blob/main/waybar/Screenshot%20Archive/Screenshots.md)
```diff
https://github.com/j5onrf/dots/blob/main/waybar/Screenshot%20Archive/Screenshots.md
```

</p>
</details>

