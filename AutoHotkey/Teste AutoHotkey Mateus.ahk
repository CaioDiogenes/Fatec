;Por Math - .[*MATH*].

MsgBox, 0, ,Teste de AutoHokey!, 15
IfMsgBox, No
   Return

Ins::Suspend
LButton::
if(GetKeyState("LButton"))
Sleep, 5
MouseClick, left
Sleep, 5
Send, ^v
Send, {Enter}
return