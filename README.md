# DWM
DWM is my favorite window manager by far due to its simplicity, portability, and low resource usage. However, it requires a decent amount of tweaking if you want to be able to use it for standard tasks.

## Patches applied
```
dwmblocks (statuscmd)
dwmblocks (SIGUSR1)
bar layout symbol -- show window layout in status bar
bar status -- show status in bar
bar tag symbols -- show tag symbols in bar
bar window title -- show window title in bar
bar alpha -- semi-transparency on bar
bar hide vacant tags -- hide tags with no windows
attach aside -- add new windows to stack instead of master
cool autostart -- execute commands on start and have processes owned by dwm
dwmc -- use dwmc program to execute dwm commands (for scriptability)
fullscreen -- applies monocle layout on active window and hides bar
moveresize -- resize dwm windows with keybinds
movestack -- allows to move windows in stack and to become master
no transparent borders -- make window borders always solid
scratchpads -- allow for scratchpad terminals
swallow -- hide terminal window when it spawns a window and freezes itself (not working on OpenBSD)
togglefullscreen -- use a keybind to make a window fullscreen or not
vanitygaps -- add gaps between all windows
```

## Keybinds
- `Super + Enter` - Spawn terminal (st)
- `Super + Shift + Enter`, `F12` - Toggle scratchpad terminal
- `Super + d` - dmenu\_run (program launcher)
- `Super + q` - Kill window
- `Super + b` - Toggle status bar
- `Super + f` - Toggle fullscreen
- `Super + m` - Set window as master
- `Super + o/O` - Increase/decrease number of masters
- `Super + j/k` - Move focus down/up
- `Super + J/K` - Move window in stack down/up
- `Super + E`, `Super + Q` - Kill DWM
- `Super + Space` - Set all windows to Floating mode
- `Super + [Arrow]` - Move window in direction of arrow pressed
- `Super + Shift + [Arrow]` - Expand/shrink window in direction of arrow pressed