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
  To add blur I'm using 'blur wallpaper effect' for better performance. Everything with opacity <1 will have blur including waybar. If using ml4w, right click on wallpaper icon to select wallpaper effect blur* = 1,2. Use default wallpaper folder.
  
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

# Waybars

(2024-oct1) Starting off oct trying out [Hyprpanel](https://www.reddit.com/r/unixporn/comments/1frzwbx/hyprland_hyprpanel_w_25_new_themes_20_prebuilt/#lightbox)
![Screenshot-2024-10-01_08:57:24](https://github.com/user-attachments/assets/17ae8b9c-26aa-496e-a6cc-f37e825035fe)
![Screenshot-2024-10-01_09:01:27](https://github.com/user-attachments/assets/f323ad52-4cf9-4c76-a13a-ecf240ebb741)

(2024-sep29) Min-Hyprnome [dots](https://github.com/j5onrf/dots/tree/main/waybar/Min-Hyprnome)
![Screenshot-2024-09-28_14:16:32](https://github.com/user-attachments/assets/1a9a744f-90b9-4a2e-9f90-a4d97d31be1f)
![Screenshot-2024-09-28_11:03:22](https://github.com/user-attachments/assets/811e0c1d-f16b-4936-a20d-269a7fe847e7)

(2024-sep28) Min-Modern<sup>2</sup>
![Screenshot-2024-09-27_12:39:19](https://github.com/user-attachments/assets/b73806fb-602b-4812-b628-77883e80a278)
![Screenshot-2024-09-28_10:11:39](https://github.com/user-attachments/assets/47f2df57-cc1e-481b-9384-58412e8c3af7)

(2024-sep25) Min-Modern [style.css](https://github.com/j5onrf/dots/tree/main/waybar/Min-Modern)
![Screenshot-2024-09-25_11:57:23](https://github.com/user-attachments/assets/d4c37518-fe92-4841-84c0-51f421986f61)

(2024-sep22) Min-Monstr [dots](https://github.com/j5onrf/dots/tree/main/waybar/Min-Monstr)
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
["hyprland/workspaces#rw" icons rewrite from] [Jakoolit dots](https://github.com/JaKooLit/Hyprland-Dots/blob/main/config/waybar/modules)
![Screenshot-2024-09-09_11:20:01](https://github.com/user-attachments/assets/54fa7009-d4e5-4306-845e-66c29e5c5067)

</p>
</details>

# Hypr<sup> / shots</sup>

(2024-oct) Min-Hyprnome [Rofi](https://github.com/j5onrf/dots/blob/main/rofi/Rofi-Min-Hyprnome/Screenshot-2024-09-29_20%3A54%3A08.png) [Rofi<sup>600</sup>](https://github.com/j5onrf/dots/blob/main/rofi/Rofi-Min-600/Screenshot-2024-09-29_20%3A49%3A46.png)
![Screenshot-2024-09-29_20:54:08](https://github.com/user-attachments/assets/0170c8c8-0531-48f6-9a18-35cfffd8883f)

<details><summary>+screenshots</summary>
<p>
  
(2024-oct) Min-Hyprnome [Rofi<sup>600</sup>](https://github.com/j5onrf/dots/blob/main/rofi/Rofi-Min-600/Screenshot-2024-09-29_20%3A49%3A46.png)
![Screenshot-2024-09-29_18:26:36](https://github.com/user-attachments/assets/50329c81-d3cd-4f0d-840a-6c28d614ccda)

<details><summary>+screenshots</summary>
  <p>
    
(2024-sep) Min-Modern<sup>2</sup>  
![Screenshot-2024-09-27_22:50:01](https://github.com/user-attachments/assets/2d53e031-0460-4733-936a-aba8f8f763b9)

<details><summary>+screenshots</summary>
  <p>

(2024-sep) Min-Monstr
![Screenshot-2024-09-22_17:11:16](https://github.com/user-attachments/assets/8d0b0e39-a4c1-4943-a27c-f4a6fe694a4d)

<details><summary>+screenshots</summary>
  <p>
    
(2024-sep) Min-Monstr-b    
![Screenshot-2024-09-25_09:53:22](https://github.com/user-attachments/assets/53cbd329-4d66-4743-81a9-cacfbbe56495)


```diff

```

</p>
</details>

