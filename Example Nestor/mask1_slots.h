//###############################################################
//# mask1_slots.h for ProcessViewServer created: vie 29. may 11:25:34 2015
//# please fill out these slots
//# here you find all possible events
//# Yours: Lehrig Software Engineering
//###############################################################

// todo: uncomment me if you want to use this data aquisiton
// also uncomment this classes in main.cpp and pvapp.h
// also remember to uncomment rllib in the project file
extern rlModbusClient     PLC1;  //Change if applicable
extern rlModbusClient     PLC2;  //Change if applicable
extern rlModbusClient     PLC3;  //Change if applicable
//extern rlSiemensTCPClient siemensTCP;
//extern rlPPIClient        ppi;

typedef struct // (todo: define your data structure here)
{
 int Write1[4];  //For PLC1
 int Write2[4];  //For PLC2
 int Write3[4];  //For PLC3
}
DATA;

static int slotInit(PARAM *p, DATA *d)
{
  if(p == NULL || d == NULL) return -1;
  //memset(d,0,sizeof(DATA));
  for(int i = 0; i<4; i++)
  {
    d->Write1[i] = 0;
    d->Write2[i] = 0;
    d->Write3[i] = 0;
  }
  return 0;
}

static int slotNullEvent(PARAM *p, DATA *d)
{
  if(p == NULL || d == NULL) return -1;
//----------Read PLC Fatek---------------
  pvPrintf(p,Read1_MW0,"%d",PLC1.readShort(0,0));
  pvPrintf(p,Read1_MW1,"%d",PLC1.readShort(0,1));
  pvPrintf(p,Read1_MW2,"%d",PLC1.readShort(0,2));
  pvPrintf(p,Read1_MW3,"%d",PLC1.readShort(0,3));

//----------Read PLC Twido---------------
  pvPrintf(p,Read2_MW100,"%d",PLC2.readShort(0,0));
  pvPrintf(p,Read2_MW101,"%d",PLC2.readShort(0,1));
  pvPrintf(p,Read2_MW102,"%d",PLC2.readShort(0,2));
  pvPrintf(p,Read2_MW103,"%d",PLC2.readShort(0,3));

//----------Read PLC M340---------------
  pvPrintf(p,Read3_MW200,"%d",PLC3.readShort(0,0));
  pvPrintf(p,Read3_MW201,"%d",PLC3.readShort(0,1));
  pvPrintf(p,Read3_MW202,"%d",PLC3.readShort(0,2));
  pvPrintf(p,Read3_MW203,"%d",PLC3.readShort(0,3));

  return 0;
}

static int slotButtonEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotButtonPressedEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotButtonReleasedEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  if(id==BWrite1) PLC1.writePresetMultipleRegisters(1,0,d->Write1,4);
  if(id==BWrite2) PLC2.writePresetMultipleRegisters(1,100,d->Write2,4);
  if(id==BWrite3) PLC3.writePresetMultipleRegisters(1,200,d->Write3,4);
  return 0;
}

static int slotTextEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotSliderEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  if(id==Write1_MW0) d->Write1[0] = val;
  if(id==Write1_MW1) d->Write1[1] = val;
  if(id==Write1_MW2) d->Write1[2] = val;
  if(id==Write1_MW3) d->Write1[3] = val; 

  if(id==Write2_MW100) d->Write2[0] = val;
  if(id==Write2_MW101) d->Write2[1] = val;
  if(id==Write2_MW102) d->Write2[2] = val;
  if(id==Write2_MW103) d->Write2[3] = val; 

  if(id==Write3_MW200) d->Write3[0] = val;
  if(id==Write3_MW201) d->Write3[1] = val;
  if(id==Write3_MW202) d->Write3[2] = val;
  if(id==Write3_MW203) d->Write3[3] = val; 
  return 0;
}

static int slotCheckboxEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotRadioButtonEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}

static int slotGlInitializeEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotGlPaintEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotGlResizeEvent(PARAM *p, int id, DATA *d, int width, int height)
{
  if(p == NULL || id == 0 || d == NULL || width < 0 || height < 0) return -1;
  return 0;
}

static int slotGlIdleEvent(PARAM *p, int id, DATA *d)
{
  if(p == NULL || id == 0 || d == NULL) return -1;
  return 0;
}

static int slotTabEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotTableTextEvent(PARAM *p, int id, DATA *d, int x, int y, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000 || text == NULL) return -1;
  return 0;
}

static int slotTableClickedEvent(PARAM *p, int id, DATA *d, int x, int y, int button)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000 || button < 0) return -1;
  return 0;
}

static int slotSelectionEvent(PARAM *p, int id, DATA *d, int val, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000 || text == NULL) return -1;
  return 0;
}

static int slotClipboardEvent(PARAM *p, int id, DATA *d, int val)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000) return -1;
  return 0;
}

static int slotRightMouseEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  //pvPopupMenu(p,-1,"Menu1,Menu2,,Menu3");
  return 0;
}

static int slotKeyboardEvent(PARAM *p, int id, DATA *d, int val, int modifier)
{
  if(p == NULL || id == 0 || d == NULL || val < -1000 || modifier < -1000) return -1;
  return 0;
}

static int slotMouseMovedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMousePressedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMouseReleasedEvent(PARAM *p, int id, DATA *d, float x, float y)
{
  if(p == NULL || id == 0 || d == NULL || x < -1000 || y < -1000) return -1;
  return 0;
}

static int slotMouseOverEvent(PARAM *p, int id, DATA *d, int enter)
{
  if(p == NULL || id == 0 || d == NULL || enter < -1000) return -1;
  return 0;
}

static int slotUserEvent(PARAM *p, int id, DATA *d, const char *text)
{
  if(p == NULL || id == 0 || d == NULL || text == NULL) return -1;
  return 0;
}
