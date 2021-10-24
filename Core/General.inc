
[PrefixTextHeader]
Meter=String
Text=Prefix Text
MeterStyle=Set.String:S | Set.OptionCat:S

[PrefixText]
Meter=Shape
X=(30*[Set.S])
Y=(10*[Set.S])R
Container=ContentContainer
DynamicVariables=1
Shape=Rectangle 0,0,(#Set.W#-#Set.L#-#Set.P#*3),(130*[Set.S]),3,3 | StrokeWidth 2 | Fill Color 0,0,0,1 | Extend Fill
Fill=Stroke Color 255,255,255,50
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Stroke Color 255,255,255,150"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Stroke Color 255,255,255,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Leftmouseupaction=[!SetVariable Editing "#CURRENTSECTION#"][!SetOption Input2:M X "([#CURRENTSECTION#:X]+5)"][!SetOption Input2:M Y "([#CURRENTSECTION#:Y]+5)"][!CommandMeasure Input2:M "ExecuteBatch ALl"]
[Value]
Meter=String
X=(5*[Set.S])r
Y=(5*[Set.S])r
Text=#PrefixText#
StringAlign=Left
FontSize=(10*[Set.S])
MeterStyle=Set.String:S
Container=ContentContainer
DynamicVariables=1

[Option01]
Meter=String
Y=(150*[Set.S])r
Text=Line breaker
MeterStyle=Set.String:S | Set.OptionName:S

;================================================================================================================================================================================

[DrivesTitle]
Meter=String
Text=Drives
MeterStyle=Set.String:S | Set.OptionCat:S

[Option31]
Meter=String
Text=Drive characters, no seperation needed
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S12323292a03ds]
Meter=Shape
MeterStyle=Set.Div:S
[Option32]
Meter=String
Text=Generate drives
MeterStyle=Set.String:S | Set.OptionName:S

;================================================================================================================================================================================

[Components]
Meter=String
X=(30*[Set.S])
Y=(50*[Set.S])r
FontSize=(14*[Set.S])
FontWeight=500
Text=Components
MeterStyle=Set.String:S
Container=ContentContainer

[Option20]
Meter=String
Text=Prefix
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S19203wds]
Meter=Shape
MeterStyle=Set.Div:S
[Option201]
Meter=String
Text=Name
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:3wds]
Meter=Shape
MeterStyle=Set.Div:S
[Option21]
Meter=String
Text=Time
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S192a03ds]
Meter=Shape
MeterStyle=Set.Div:S
[Option22]
Meter=String
Text=CPU
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S192z03ds]
Meter=Shape
MeterStyle=Set.Div:S
[Option23]
Meter=String
Text=RAM
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S19203cds]
Meter=Shape
MeterStyle=Set.Div:S
[Option24]
Meter=String
Text=GPU
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S192e03ds]
Meter=Shape
MeterStyle=Set.Div:S
[Option25]
Meter=String
Text=Drvies
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S1q9203ds]
Meter=Shape
MeterStyle=Set.Div:S
[Option26]
Meter=String
Text=Misc (Internet, trashbin, uptime)
MeterStyle=Set.String:S | Set.OptionName:S

;================================================================================================================================================================================

;; BOOL EXMAPLE
; [Set.Bool:SVarName]
; Meter=Shape
; MeterStyle=Set.Bool:S
; Y=([VarOption:Y]-#Set.P#+(-20/2+8)*[Set.S])

;; TEXT INPUT EXAMPLE
; [TextVarName]
; Meter=Shape
; Set.Textbox:S
; Y=([VarOption:Y]-#Set.P#+(-30/2+8)*[Set.S])
; [VarOptionNumber]
; Meter=String
; Text=TextVarName
; MeterStyle=Set.String:S | Set.Value:S

[BreakerString]
Meter=Shape
MeterStyle=Set.Textbox:S
Y=([Option01:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value01]
Meter=String
Text=#BreakerString#
MeterStyle=Set.String:S | Set.Value:S

;================================================================================================================================================================================


[DriveChar]
Meter=Shape
MeterStyle=Set.Textbox:S
Y=([Option31:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value31]
Meter=String
Text=#DriveChar#
MeterStyle=Set.String:S | Set.Value:S
[Button32]
Meter=Shape
MeterStyle=Set.Button:S
OverColor=0,255,10,200
LeaveColor=0,255,10,100
Y=([Option32:Y]-#Set.P#+(-30/2+8)*[Set.S])
Act=[!CommandMeasure DrivesGen:M "GenDrive('#DriveChar#')"][!UpdateMeasure Auto_Refresh:M]
[Value32]
Meter=String
Text=Generate
MeterStyle=Set.String:S | Set.Value:S



[Prefix]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option20:Y]-#Set.P#+(-20/2+8)*[Set.S])
[Name]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option201:Y]-#Set.P#+(-20/2+8)*[Set.S])
[time]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option21:Y]-#Set.P#+(-20/2+8)*[Set.S])
[cpu]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option22:Y]-#Set.P#+(-20/2+8)*[Set.S])
[ram]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option23:Y]-#Set.P#+(-20/2+8)*[Set.S])
[gpu]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option24:Y]-#Set.P#+(-20/2+8)*[Set.S])
[drives]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option25:Y]-#Set.P#+(-20/2+8)*[Set.S])
[misc]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option26:Y]-#Set.P#+(-20/2+8)*[Set.S])

;================================================================================================================================================================================

[Input2:M]
Measure=Plugin
Plugin=InputText
SolidColor=171717
FontColor=#Set.Text_Color#
FontFace=Seqoe UI
FontSize=(10*[Set.S])
StringAlign=LeftCenter
W=(#Set.W#-#Set.L#-#Set.P#*4-10*[Set.S])
H=(110*[Set.S])
DynamicVariables=1
DefaultValue="[##Editing#]"
Command1=[!SetVariable #Editing# "$UserInput$"][!UpdateMeasure SaveAndLoad:M]

[DrivesGen:M]
Measure=Script
ScriptFile=#SKINSPATH##Skin.Name#\Core\GenPlainextDrives.lua