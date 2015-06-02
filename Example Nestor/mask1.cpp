////////////////////////////////////////////////////////////////////////////
//
// show_mask1 for ProcessViewServer created: vie 29. may 11:25:34 2015
//
////////////////////////////////////////////////////////////////////////////
#include "pvapp.h"

// _begin_of_generated_area_ (do not edit -> use ui2pvc) -------------------

// our mask contains the following objects
enum {
  ID_MAIN_WIDGET = 0,
  obj12,
  obj11,
  obj4,
  Read1_MW0,
  obj6,
  obj7,
  obj8,
  Read1_MW1,
  Read1_MW2,
  Read1_MW3,
  Write1_MW0,
  Write1_MW1,
  Write1_MW2,
  Write1_MW3,
  obj13,
  obj14,
  BWrite1,
  obj15,
  obj16,
  obj18,
  obj19,
  obj22,
  obj20,
  obj21,
  obj23,
  obj24,
  Read2_MW100,
  Read2_MW101,
  Read2_MW103,
  Read2_MW102,
  Write2_MW100,
  Write2_MW101,
  Write2_MW102,
  Write2_MW103,
  BWrite2,
  obj17,
  obj25,
  obj26,
  obj27,
  obj28,
  obj29,
  obj30,
  Read3_MW200,
  Read3_MW201,
  Read3_MW202,
  Read3_MW203,
  Write3_MW200,
  Write3_MW201,
  Write3_MW202,
  Write3_MW203,
  obj39,
  obj40,
  BWrite3,
  obj41,
  ID_END_OF_WIDGETS
};

// our mask contains the following widget names
  static const char *widgetName[] = {
  "ID_MAIN_WIDGET",
  "obj12",
  "obj11",
  "obj4",
  "Read1_MW0",
  "obj6",
  "obj7",
  "obj8",
  "Read1_MW1",
  "Read1_MW2",
  "Read1_MW3",
  "Write1_MW0",
  "Write1_MW1",
  "Write1_MW2",
  "Write1_MW3",
  "obj13",
  "obj14",
  "BWrite1",
  "obj15",
  "obj16",
  "obj18",
  "obj19",
  "obj22",
  "obj20",
  "obj21",
  "obj23",
  "obj24",
  "Read2_MW100",
  "Read2_MW101",
  "Read2_MW103",
  "Read2_MW102",
  "Write2_MW100",
  "Write2_MW101",
  "Write2_MW102",
  "Write2_MW103",
  "BWrite2",
  "obj17",
  "obj25",
  "obj26",
  "obj27",
  "obj28",
  "obj29",
  "obj30",
  "Read3_MW200",
  "Read3_MW201",
  "Read3_MW202",
  "Read3_MW203",
  "Write3_MW200",
  "Write3_MW201",
  "Write3_MW202",
  "Write3_MW203",
  "obj39",
  "obj40",
  "BWrite3",
  "obj41",
  "ID_END_OF_WIDGETS",
  ""};

  static const char *toolTip[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const char *whatsThis[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const int widgetType[ID_END_OF_WIDGETS+1] = {
  0,
  TQFrame,
  TQFrame,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQSpinBox,
  TQSpinBox,
  TQSpinBox,
  TQSpinBox,
  TQLabel,
  TQLabel,
  TQPushButton,
  TQLabel,
  TQFrame,
  TQLabel,
  TQLabel,
  TQFrame,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQSpinBox,
  TQSpinBox,
  TQSpinBox,
  TQSpinBox,
  TQPushButton,
  TQLabel,
  TQFrame,
  TQFrame,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQSpinBox,
  TQSpinBox,
  TQSpinBox,
  TQSpinBox,
  TQLabel,
  TQLabel,
  TQPushButton,
  TQLabel,
  -1 };

static int generated_defineMask(PARAM *p)
{
  int w,h,depth;

  if(p == NULL) return 1;
  if(widgetName[0] == NULL) return 1; // suppress unused warning
  w = h = depth = strcmp(toolTip[0],whatsThis[0]);
  if(widgetType[0] == -1) return 1;
  if(w==h) depth=0; // fool the compiler
  pvStartDefinition(p,ID_END_OF_WIDGETS);

  pvQFrame(p,obj12,0,WinPanel,Raised,1,1);
  pvSetGeometry(p,obj12,9,36,350,240);

  pvQFrame(p,obj11,obj12,NoFrame,Sunken,1,1);
  pvSetGeometry(p,obj11,9,39,325,150);
  pvSetFont(p,obj11,"MS Shell Dlg 2",8,0,0,0,0);

  pvQLabel(p,obj4,obj11);
  pvSetGeometry(p,obj4,6,6,99,30);
  pvSetText(p,obj4,pvtr("%MW0     -->"));
  pvSetFont(p,obj4,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj4,Box,-1,-1,-1);
  pvSetStyle(p,obj4,-1,Sunken,-1,-1);

  pvQLabel(p,Read1_MW0,obj11);
  pvSetGeometry(p,Read1_MW0,114,6,99,30);
  pvSetText(p,Read1_MW0,pvtr("Label"));
  pvSetFont(p,Read1_MW0,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read1_MW0,Box,-1,-1,-1);
  pvSetStyle(p,Read1_MW0,-1,Sunken,-1,-1);

  pvQLabel(p,obj6,obj11);
  pvSetGeometry(p,obj6,6,42,99,30);
  pvSetText(p,obj6,pvtr("%MW1     -->"));
  pvSetFont(p,obj6,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj6,Box,-1,-1,-1);
  pvSetStyle(p,obj6,-1,Sunken,-1,-1);

  pvQLabel(p,obj7,obj11);
  pvSetGeometry(p,obj7,6,78,99,30);
  pvSetText(p,obj7,pvtr("%MW2     -->"));
  pvSetFont(p,obj7,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj7,Box,-1,-1,-1);
  pvSetStyle(p,obj7,-1,Sunken,-1,-1);

  pvQLabel(p,obj8,obj11);
  pvSetGeometry(p,obj8,6,114,99,30);
  pvSetText(p,obj8,pvtr("%MW3     -->"));
  pvSetFont(p,obj8,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj8,Box,-1,-1,-1);
  pvSetStyle(p,obj8,-1,Sunken,-1,-1);

  pvQLabel(p,Read1_MW1,obj11);
  pvSetGeometry(p,Read1_MW1,114,42,99,30);
  pvSetText(p,Read1_MW1,pvtr("Label"));
  pvSetFont(p,Read1_MW1,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read1_MW1,Box,-1,-1,-1);
  pvSetStyle(p,Read1_MW1,-1,Sunken,-1,-1);

  pvQLabel(p,Read1_MW2,obj11);
  pvSetGeometry(p,Read1_MW2,114,78,99,30);
  pvSetText(p,Read1_MW2,pvtr("Label"));
  pvSetFont(p,Read1_MW2,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read1_MW2,Box,-1,-1,-1);
  pvSetStyle(p,Read1_MW2,-1,Sunken,-1,-1);

  pvQLabel(p,Read1_MW3,obj11);
  pvSetGeometry(p,Read1_MW3,114,114,99,30);
  pvSetText(p,Read1_MW3,pvtr("Label"));
  pvSetFont(p,Read1_MW3,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read1_MW3,Box,-1,-1,-1);
  pvSetStyle(p,Read1_MW3,-1,Sunken,-1,-1);

  pvQSpinBox(p,Write1_MW0,obj11,-3200,3200,1);
  pvSetGeometry(p,Write1_MW0,219,6,99,30);
  pvSetFont(p,Write1_MW0,"MS Shell Dlg 2",8,0,0,0,0);

  pvQSpinBox(p,Write1_MW1,obj11,-3200,3200,1);
  pvSetGeometry(p,Write1_MW1,219,42,99,30);
  pvSetFont(p,Write1_MW1,"MS Shell Dlg 2",8,0,0,0,0);

  pvQSpinBox(p,Write1_MW2,obj11,-3200,3200,1);
  pvSetGeometry(p,Write1_MW2,219,78,99,30);
  pvSetFont(p,Write1_MW2,"MS Shell Dlg 2",8,0,0,0,0);

  pvQSpinBox(p,Write1_MW3,obj11,-3200,3200,1);
  pvSetGeometry(p,Write1_MW3,219,114,99,30);
  pvSetFont(p,Write1_MW3,"MS Shell Dlg 2",8,0,0,0,0);

  pvQLabel(p,obj13,obj12);
  pvSetGeometry(p,obj13,153,9,30,30);
  pvSetText(p,obj13,pvtr("Read"));
  pvSetFont(p,obj13,"MS Shell Dlg 2",8,0,0,1,0);

  pvQLabel(p,obj14,obj12);
  pvSetGeometry(p,obj14,252,9,30,30);
  pvSetText(p,obj14,pvtr("Write"));
  pvSetFont(p,obj14,"MS Shell Dlg 2",8,0,0,1,0);

  pvQPushButton(p,BWrite1,obj12);
  pvSetGeometry(p,BWrite1,228,195,99,30);
  pvSetText(p,BWrite1,pvtr("Write to PLC"));
  pvSetFont(p,BWrite1,"MS Shell Dlg 2",8,0,0,0,0);

  pvQLabel(p,obj15,0);
  pvSetGeometry(p,obj15,15,6,99,30);
  pvSetText(p,obj15,pvtr("PLC1 - Fatek"));
  pvSetPaletteForegroundColor(p,obj15,0,0,255);
  pvSetFont(p,obj15,"MS Shell Dlg 2",10,0,0,1,0);

  pvQFrame(p,obj16,0,WinPanel,Raised,1,1);
  pvSetGeometry(p,obj16,9,324,350,240);

  pvQLabel(p,obj18,obj16);
  pvSetGeometry(p,obj18,153,9,30,30);
  pvSetText(p,obj18,pvtr("Read"));
  pvSetFont(p,obj18,"MS Shell Dlg 2",8,0,0,1,0);

  pvQLabel(p,obj19,obj16);
  pvSetGeometry(p,obj19,252,9,30,30);
  pvSetText(p,obj19,pvtr("Write"));
  pvSetFont(p,obj19,"MS Shell Dlg 2",8,0,0,1,0);

  pvQFrame(p,obj22,obj16,NoFrame,Plain,1,1);
  pvSetGeometry(p,obj22,9,39,325,150);
  pvSetFont(p,obj22,"MS Shell Dlg 2",8,0,0,0,0);

  pvQLabel(p,obj20,obj22);
  pvSetGeometry(p,obj20,6,6,99,30);
  pvSetText(p,obj20,pvtr("%MW100   -->"));
  pvSetFont(p,obj20,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj20,Box,-1,-1,-1);
  pvSetStyle(p,obj20,-1,Sunken,-1,-1);

  pvQLabel(p,obj21,obj22);
  pvSetGeometry(p,obj21,6,42,99,30);
  pvSetText(p,obj21,pvtr("%MW101   -->"));
  pvSetFont(p,obj21,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj21,Box,-1,-1,-1);
  pvSetStyle(p,obj21,-1,Sunken,-1,-1);

  pvQLabel(p,obj23,obj22);
  pvSetGeometry(p,obj23,6,78,99,30);
  pvSetText(p,obj23,pvtr("%MW102   -->"));
  pvSetFont(p,obj23,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj23,Box,-1,-1,-1);
  pvSetStyle(p,obj23,-1,Sunken,-1,-1);

  pvQLabel(p,obj24,obj22);
  pvSetGeometry(p,obj24,6,114,99,30);
  pvSetText(p,obj24,pvtr("%MW103   -->"));
  pvSetFont(p,obj24,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj24,Box,-1,-1,-1);
  pvSetStyle(p,obj24,-1,Sunken,-1,-1);

  pvQLabel(p,Read2_MW100,obj22);
  pvSetGeometry(p,Read2_MW100,114,6,99,30);
  pvSetText(p,Read2_MW100,pvtr("Label"));
  pvSetFont(p,Read2_MW100,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read2_MW100,Box,-1,-1,-1);
  pvSetStyle(p,Read2_MW100,-1,Sunken,-1,-1);

  pvQLabel(p,Read2_MW101,obj22);
  pvSetGeometry(p,Read2_MW101,114,42,99,30);
  pvSetText(p,Read2_MW101,pvtr("Label"));
  pvSetFont(p,Read2_MW101,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read2_MW101,Box,-1,-1,-1);
  pvSetStyle(p,Read2_MW101,-1,Sunken,-1,-1);

  pvQLabel(p,Read2_MW103,obj22);
  pvSetGeometry(p,Read2_MW103,114,114,99,30);
  pvSetText(p,Read2_MW103,pvtr("Label"));
  pvSetFont(p,Read2_MW103,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read2_MW103,Box,-1,-1,-1);
  pvSetStyle(p,Read2_MW103,-1,Sunken,-1,-1);

  pvQLabel(p,Read2_MW102,obj22);
  pvSetGeometry(p,Read2_MW102,114,78,99,30);
  pvSetText(p,Read2_MW102,pvtr("Label"));
  pvSetFont(p,Read2_MW102,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read2_MW102,Box,-1,-1,-1);
  pvSetStyle(p,Read2_MW102,-1,Sunken,-1,-1);

  pvQSpinBox(p,Write2_MW100,obj22,-32000,32000,1);
  pvSetGeometry(p,Write2_MW100,219,6,99,30);
  pvSetFont(p,Write2_MW100,"MS Shell Dlg 2",8,0,0,0,0);

  pvQSpinBox(p,Write2_MW101,obj22,-32000,32000,1);
  pvSetGeometry(p,Write2_MW101,219,42,99,30);
  pvSetFont(p,Write2_MW101,"MS Shell Dlg 2",8,0,0,0,0);

  pvQSpinBox(p,Write2_MW102,obj22,-32000,32000,1);
  pvSetGeometry(p,Write2_MW102,219,78,99,30);
  pvSetFont(p,Write2_MW102,"MS Shell Dlg 2",8,0,0,0,0);

  pvQSpinBox(p,Write2_MW103,obj22,-32000,32000,1);
  pvSetGeometry(p,Write2_MW103,219,114,99,30);
  pvSetFont(p,Write2_MW103,"MS Shell Dlg 2",8,0,0,0,0);

  pvQPushButton(p,BWrite2,obj16);
  pvSetGeometry(p,BWrite2,228,195,99,30);
  pvSetText(p,BWrite2,pvtr("Write to PLC"));
  pvSetFont(p,BWrite2,"MS Shell Dlg 2",8,0,0,0,0);

  pvQLabel(p,obj17,0);
  pvSetGeometry(p,obj17,15,288,99,30);
  pvSetText(p,obj17,pvtr("PLC2 - Twido"));
  pvSetPaletteForegroundColor(p,obj17,0,0,255);
  pvSetFont(p,obj17,"MS Shell Dlg 2",10,0,0,1,0);

  pvQFrame(p,obj25,0,WinPanel,Raised,1,1);
  pvSetGeometry(p,obj25,411,36,350,240);
  pvSetFont(p,obj25,"MS Shell Dlg 2",8,0,0,0,0);

  pvQFrame(p,obj26,obj25,NoFrame,Plain,1,1);
  pvSetGeometry(p,obj26,9,39,325,150);
  pvSetFont(p,obj26,"MS Shell Dlg 2",8,0,0,0,0);

  pvQLabel(p,obj27,obj26);
  pvSetGeometry(p,obj27,6,6,99,30);
  pvSetText(p,obj27,pvtr("%MW200   -->"));
  pvSetFont(p,obj27,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj27,Box,-1,-1,-1);
  pvSetStyle(p,obj27,-1,Sunken,-1,-1);

  pvQLabel(p,obj28,obj26);
  pvSetGeometry(p,obj28,6,42,99,30);
  pvSetText(p,obj28,pvtr("%MW201   -->"));
  pvSetFont(p,obj28,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj28,Box,-1,-1,-1);
  pvSetStyle(p,obj28,-1,Sunken,-1,-1);

  pvQLabel(p,obj29,obj26);
  pvSetGeometry(p,obj29,6,78,99,30);
  pvSetText(p,obj29,pvtr("%MW202   -->"));
  pvSetFont(p,obj29,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj29,Box,-1,-1,-1);
  pvSetStyle(p,obj29,-1,Sunken,-1,-1);

  pvQLabel(p,obj30,obj26);
  pvSetGeometry(p,obj30,6,114,99,30);
  pvSetText(p,obj30,pvtr("%MW203   -->"));
  pvSetFont(p,obj30,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,obj30,Box,-1,-1,-1);
  pvSetStyle(p,obj30,-1,Sunken,-1,-1);

  pvQLabel(p,Read3_MW200,obj26);
  pvSetGeometry(p,Read3_MW200,114,6,99,30);
  pvSetText(p,Read3_MW200,pvtr("Label"));
  pvSetFont(p,Read3_MW200,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read3_MW200,Box,-1,-1,-1);
  pvSetStyle(p,Read3_MW200,-1,Sunken,-1,-1);

  pvQLabel(p,Read3_MW201,obj26);
  pvSetGeometry(p,Read3_MW201,114,42,99,30);
  pvSetText(p,Read3_MW201,pvtr("Label"));
  pvSetFont(p,Read3_MW201,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read3_MW201,Box,-1,-1,-1);
  pvSetStyle(p,Read3_MW201,-1,Sunken,-1,-1);

  pvQLabel(p,Read3_MW202,obj26);
  pvSetGeometry(p,Read3_MW202,114,78,99,30);
  pvSetText(p,Read3_MW202,pvtr("Label"));
  pvSetFont(p,Read3_MW202,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read3_MW202,Box,-1,-1,-1);
  pvSetStyle(p,Read3_MW202,-1,Sunken,-1,-1);

  pvQLabel(p,Read3_MW203,obj26);
  pvSetGeometry(p,Read3_MW203,114,114,99,30);
  pvSetText(p,Read3_MW203,pvtr("Label"));
  pvSetFont(p,Read3_MW203,"MS Shell Dlg 2",8,0,0,0,0);
  pvSetStyle(p,Read3_MW203,Box,-1,-1,-1);
  pvSetStyle(p,Read3_MW203,-1,Sunken,-1,-1);

  pvQSpinBox(p,Write3_MW200,obj26,-32000,32000,1);
  pvSetGeometry(p,Write3_MW200,219,6,99,30);
  pvSetFont(p,Write3_MW200,"MS Shell Dlg 2",8,0,0,0,0);

  pvQSpinBox(p,Write3_MW201,obj26,-32000,32000,1);
  pvSetGeometry(p,Write3_MW201,219,42,99,30);
  pvSetFont(p,Write3_MW201,"MS Shell Dlg 2",8,0,0,0,0);

  pvQSpinBox(p,Write3_MW202,obj26,-32000,32000,1);
  pvSetGeometry(p,Write3_MW202,219,78,99,30);
  pvSetFont(p,Write3_MW202,"MS Shell Dlg 2",8,0,0,0,0);

  pvQSpinBox(p,Write3_MW203,obj26,-32000,32000,1);
  pvSetGeometry(p,Write3_MW203,219,114,99,30);
  pvSetFont(p,Write3_MW203,"MS Shell Dlg 2",8,0,0,0,0);

  pvQLabel(p,obj39,obj25);
  pvSetGeometry(p,obj39,153,9,30,30);
  pvSetText(p,obj39,pvtr("Read"));
  pvSetFont(p,obj39,"MS Shell Dlg 2",8,0,0,1,0);

  pvQLabel(p,obj40,obj25);
  pvSetGeometry(p,obj40,252,9,30,30);
  pvSetText(p,obj40,pvtr("Write"));
  pvSetFont(p,obj40,"MS Shell Dlg 2",8,0,0,1,0);

  pvQPushButton(p,BWrite3,obj25);
  pvSetGeometry(p,BWrite3,229,195,99,30);
  pvSetText(p,BWrite3,pvtr("PushButton"));
  pvSetFont(p,BWrite3,"MS Shell Dlg 2",8,0,0,0,0);

  pvQLabel(p,obj41,0);
  pvSetGeometry(p,obj41,414,3,99,30);
  pvSetText(p,obj41,pvtr("PLC3 - M340"));
  pvSetPaletteForegroundColor(p,obj41,0,0,0);
  pvSetFont(p,obj41,"MS Shell Dlg 2",10,0,0,1,0);


  pvEndDefinition(p);
  return 0;
}

// _end_of_generated_area_ (do not edit -> use ui2pvc) ---------------------

#include "mask1_slots.h"

static int defineMask(PARAM *p)
{
  if(p == NULL) return 1;
  generated_defineMask(p);
  // (todo: add your code here)
  return 0;
}


static int showData(PARAM *p, DATA *d)
{
  if(p == NULL) return 1;
  if(d == NULL) return 1;
  return 0;
}

static int readData(DATA *d) // from shared memory, database or something else
{
  if(d == NULL) return 1;
  // (todo: add your code here)
  return 0;
}


int show_mask1(PARAM *p)
{
  DATA d;
  char event[MAX_EVENT_LENGTH];
  char text[MAX_EVENT_LENGTH];
  char str1[MAX_EVENT_LENGTH];
  int  i,w,h,val,x,y,button,ret;
  float xval, yval;

  defineMask(p);
  //rlSetDebugPrintf(1);
  if((ret=slotInit(p,&d)) != 0) return ret;
  readData(&d); // from shared memory, database or something else
  showData(p,&d);
  pvClearMessageQueue(p);
  while(1)
  {
    pvPollEvent(p,event);
    switch(pvParseEvent(event, &i, text))
    {
      case NULL_EVENT:
        readData(&d); // from shared memory, database or something else
        showData(p,&d);
        if((ret=slotNullEvent(p,&d)) != 0) return ret;
        break;
      case BUTTON_EVENT:
        if(trace) printf("BUTTON_EVENT id=%d\n",i);
        if((ret=slotButtonEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_PRESSED_EVENT:
        if(trace) printf("BUTTON_PRESSED_EVENT id=%d\n",i);
        if((ret=slotButtonPressedEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_RELEASED_EVENT:
        if(trace) printf("BUTTON_RELEASED_EVENT id=%d\n",i);
        if((ret=slotButtonReleasedEvent(p,i,&d)) != 0) return ret;
        break;
      case TEXT_EVENT:
        if(trace) printf("TEXT_EVENT id=%d %s\n",i,text);
        if((ret=slotTextEvent(p,i,&d,text)) != 0) return ret;
        break;
      case SLIDER_EVENT:
        sscanf(text,"(%d)",&val);
        if(trace) printf("SLIDER_EVENT val=%d\n",val);
        if((ret=slotSliderEvent(p,i,&d,val)) != 0) return ret;
        break;
      case CHECKBOX_EVENT:
        if(trace) printf("CHECKBOX_EVENT id=%d %s\n",i,text);
        if((ret=slotCheckboxEvent(p,i,&d,text)) != 0) return ret;
        break;
      case RADIOBUTTON_EVENT:
        if(trace) printf("RADIOBUTTON_EVENT id=%d %s\n",i,text);
        if((ret=slotRadioButtonEvent(p,i,&d,text)) != 0) return ret;
        break;
      case GL_INITIALIZE_EVENT:
        if(trace) printf("you have to call initializeGL()\n");
        if((ret=slotGlInitializeEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_PAINT_EVENT:
        if(trace) printf("you have to call paintGL()\n");
        if((ret=slotGlPaintEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_RESIZE_EVENT:
        sscanf(text,"(%d,%d)",&w,&h);
        if(trace) printf("you have to call resizeGL(w,h)\n");
        if((ret=slotGlResizeEvent(p,i,&d,w,h)) != 0) return ret;
        break;
      case GL_IDLE_EVENT:
        if((ret=slotGlIdleEvent(p,i,&d)) != 0) return ret;
        break;
      case TAB_EVENT:
        sscanf(text,"(%d)",&val);
        if(trace) printf("TAB_EVENT(%d,page=%d)\n",i,val);
        if((ret=slotTabEvent(p,i,&d,val)) != 0) return ret;
        break;
      case TABLE_TEXT_EVENT:
        sscanf(text,"(%d,%d,",&x,&y);
        pvGetText(text,str1);
        if(trace) printf("TABLE_TEXT_EVENT(%d,%d,\"%s\")\n",x,y,str1);
        if((ret=slotTableTextEvent(p,i,&d,x,y,str1)) != 0) return ret;
        break;
      case TABLE_CLICKED_EVENT:
        sscanf(text,"(%d,%d,%d)",&x,&y,&button);
        if(trace) printf("TABLE_CLICKED_EVENT(%d,%d,button=%d)\n",x,y,button);
        if((ret=slotTableClickedEvent(p,i,&d,x,y,button)) != 0) return ret;
        break;
      case SELECTION_EVENT:
        sscanf(text,"(%d,",&val);
        pvGetText(text,str1);
        if(trace) printf("SELECTION_EVENT(column=%d,\"%s\")\n",val,str1);
        if((ret=slotSelectionEvent(p,i,&d,val,str1)) != 0) return ret;
        break;
      case CLIPBOARD_EVENT:
        sscanf(text,"(%d",&val);
        if(trace) printf("CLIPBOARD_EVENT(id=%d)\n",val);
        if(trace) printf("clipboard = \n%s\n",p->clipboard);
        if((ret=slotClipboardEvent(p,i,&d,val)) != 0) return ret;
        break;
      case RIGHT_MOUSE_EVENT:
        if(trace) printf("RIGHT_MOUSE_EVENT id=%d text=%s\n",i,text);
        if((ret=slotRightMouseEvent(p,i,&d,text)) != 0) return ret;
        break;
      case KEYBOARD_EVENT:
        sscanf(text,"(%d",&val);
        if(trace) printf("KEYBOARD_EVENT modifier=%d key=%d\n",i,val);
        if((ret=slotKeyboardEvent(p,i,&d,val,i)) != 0) return ret;
        break;
      case PLOT_MOUSE_MOVED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_MOVE %f %f\n",xval,yval);
        if((ret=slotMouseMovedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_PRESSED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_PRESSED %f %f\n",xval,yval);
        if((ret=slotMousePressedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_RELEASED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_RELEASED %f %f\n",xval,yval);
        if((ret=slotMouseReleasedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case MOUSE_OVER_EVENT:
        sscanf(text,"%d",&val);
        if(trace) printf("MOUSE_OVER_EVENT %d\n",val);
        if((ret=slotMouseOverEvent(p,i,&d,val)) != 0) return ret;
        break;
      case USER_EVENT:
        if(trace) printf("USER_EVENT id=%d %s\n",i,text);
        if((ret=slotUserEvent(p,i,&d,text)) != 0) return ret;
        break;
      default:
        if(trace) printf("UNKNOWN_EVENT id=%d %s\n",i,text);
        break;
    }
  }
}
