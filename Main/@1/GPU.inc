


[ResourceGraph3]
Meter=String
Text=GPU //////////////////// [MeasureGPU:3]%
InlineSetting=Color | #BarColor#
InlinePattern=\/
InlineSetting2=Color | #Accent#
InlinePattern2=GPU (\/{[GPUTextActual:0]}).*
DynamicVariables=1
MEterStyle=Text

[GPUtopitem]
Meter=String
MeterStyle=Text
MeasureName=MeasureTopUsage1GPU
MeasureName2=MeasureTopUsage2GPU
MeasureName3=MeasureTopUsage3GPU
MeasureName4=MeasureTopUsage4GPU
MeasureName5=MeasureTopUsage5GPU
MeasureName6=MeasureTopUsage6GPU
Text=%1#CRLF#%2#CRLF#%3#CRLF#%4#CRLF#%5#CRLF#%6
W=(#Scale#*240)
ClipString=1

[GPUvbar1]
Meter=String
MeterStyle=VBar

[GPUtopused]
Meter=String
Y=r
MeasureName=CalcTopMemory1GPU
MeasureName2=CalcTopMemory2GPU
MeasureName3=CalcTopMemory3GPU
MeasureName4=CalcTopMemory4GPU
MeasureName5=CalcTopMemory5GPU
MeasureName6=CalcTopMemory6GPU
MeterStyle=Text | VAlign:#Align#
Autoscale=1k
Text=%1B#CRLF#%2B#CRLF#%3B#CRLF#%4B#CRLF#%5B#CRLF#%6B#CRLF#
DynamicVariables=1
NumOfDecimals=1
W=(#Scale#*84)
ClipString=1

[GPUvbar2]
Meter=String
MeterStyle=VBar | VBarAlign:#Align#
[VBarAlign:Left]
X=(5*#scale#)R
[VBarAlign:Right]
X=(100*#scale#)

[GPUtoppercent]
Meter=String
Y=r
MeterStyle=Text | VAlign2:#Align#
Text=[MeasureTopUsage1GPU:1]%#CRLF#[MeasureTopUsage2GPU:1]%#CRLF#[MeasureTopUsage3GPU:1]%#CRLF#[MeasureTopUsage4GPU:1]%#CRLF#[MeasureTopUsage5GPU:1]%#CRLF#[MeasureTopUsage6GPU:1]%#CRLF#
DynamicVariables=1
NumOfDecimals=1
W=(#Scale#*84)
ClipString=1

[Dot4]
Meter=String
MeterStyle=Dots | FirstAlign:#Align#


@includeGPUTOP=#ROOTCONFIGPATH#Main\@Measures\GPUTOP.inc