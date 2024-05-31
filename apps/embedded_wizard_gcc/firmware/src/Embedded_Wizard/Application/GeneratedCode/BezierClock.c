/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 13.02
* Profile  : Win32
* Platform : Windows.Software.RGBA8888
*
*******************************************************************************/

#include "ewlocale.h"
#include "_BezierClockBackground.h"
#include "_BezierClockBezierClock.h"
#include "_BezierClockBubble.h"
#include "_BezierClockClockScreen.h"
#include "_BezierClockDatePicker.h"
#include "_BezierClockDeviceClass.h"
#include "_BezierClockDigit.h"
#include "_BezierClockSettingsScreen.h"
#include "_BezierClockStyleScreen.h"
#include "_BezierClockTimePicker.h"
#include "_BezierClockTimerScreen.h"
#include "_CoreGroup.h"
#include "_CorePropertyObserver.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTime.h"
#include "_CoreTimer.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_EffectsFloatEffect.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsPointEffect.h"
#include "_EffectsSlideTransition.h"
#include "_EffectsTransition.h"
#include "_GraphicsArcPath.h"
#include "_GraphicsPath.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsFillPath.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsStrokePath.h"
#include "_ViewsText.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetRadioButton.h"
#include "_WidgetSetRadioButtonConfig.h"
#include "BezierClock.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x00000052, /* ratio 87.80 % */
  0xB8000900, 0x80074452, 0x16060783, 0x0CA002A1, 0xE8003C00, 0x4050041C, 0x20000B21,
  0x98240A26, 0x8502A0F1, 0x01BC0043, 0x198006E0, 0xC8006900, 0x6266D001, 0xC2009002,
  0xA6300490, 0x13360021, 0x00040673, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 300, 240 }};
static const XRect _Const0001 = {{ 205, 0 }, { 284, 240 }};
static const XPoint _Const0002 = { 0, 80 };
static const XRect _Const0003 = {{ 111, 0 }, { 189, 240 }};
static const XRect _Const0004 = {{ 16, 0 }, { 95, 240 }};
static const XRect _Const0005 = {{ 178, 91 }, { 215, 142 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x0002 };
static const XColor _Const0007 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0008 = {{ 84, 91 }, { 120, 142 }};
static const XPoint _Const0009 = { 95, 158 };
static const XPoint _Const000A = { 16, 158 };
static const XPoint _Const000B = { 94, 81 };
static const XPoint _Const000C = { 15, 81 };
static const XPoint _Const000D = { 189, 81 };
static const XPoint _Const000E = { 111, 81 };
static const XPoint _Const000F = { 189, 158 };
static const XPoint _Const0010 = { 111, 158 };
static const XPoint _Const0011 = { 284, 158 };
static const XPoint _Const0012 = { 205, 158 };
static const XPoint _Const0013 = { 284, 81 };
static const XPoint _Const0014 = { 205, 81 };
static const XColor _Const0015 = { 0xC1, 0xC1, 0xC1, 0xFF };
static const XColor _Const0016 = { 0xE1, 0xE1, 0xE1, 0xFF };
static const XColor _Const0017 = { 0xFF, 0xFF, 0xFF, 0x44 };
static const XPoint _Const0018 = { 0, -3 };
static const XRect _Const0019 = {{ 0, 0 }, { 800, 480 }};
static const XPoint _Const001A = { 100, 380 };
static const XPoint _Const001B = { 700, 380 };
static const XPoint _Const001C = { 700, 480 };
static const XPoint _Const001D = { 100, 480 };
static const XPoint _Const001E = { 700, 0 };
static const XPoint _Const001F = { 800, 0 };
static const XPoint _Const0020 = { 800, 480 };
static const XPoint _Const0021 = { 100, 0 };
static const XPoint _Const0022 = { 700, 100 };
static const XPoint _Const0023 = { 100, 100 };
static const XRect _Const0024 = {{ 0, 310 }, { 800, 406 }};
static const XStringRes _Const0025 = { _StringsDefault0, 0x0006 };
static const XRect _Const0026 = {{ 303, 272 }, { 333, 302 }};
static const XColor _Const0027 = { 0xFF, 0xFF, 0xFF, 0xDD };
static const XPoint _Const0028 = { 15, 15 };
static const XRect _Const0029 = {{ 303, 198 }, { 333, 228 }};
static const XRect _Const002A = {{ 61, 90 }, { 181, 310 }};
static const XRect _Const002B = {{ 181, 90 }, { 301, 310 }};
static const XRect _Const002C = {{ 341, 90 }, { 461, 310 }};
static const XRect _Const002D = {{ 461, 90 }, { 581, 310 }};
static const XRect _Const002E = {{ 593, 207 }, { 660, 302 }};
static const XRect _Const002F = {{ 664, 207 }, { 731, 302 }};
static const XRect _Const0030 = {{ 0, 0 }, { 800, 30 }};
static const XRect _Const0031 = {{ 0, 450 }, { 800, 480 }};
static const XRect _Const0032 = {{ 770, 0 }, { 800, 480 }};
static const XStringRes _Const0033 = { _StringsDefault0, 0x000D };
static const XStringRes _Const0034 = { _StringsDefault0, 0x0012 };
static const XRect _Const0035 = {{ 580, 360 }, { 780, 441 }};
static const XStringRes _Const0036 = { _StringsDefault0, 0x0016 };
static const XRect _Const0037 = {{ 20, 360 }, { 220, 441 }};
static const XStringRes _Const0038 = { _StringsDefault0, 0x0020 };
static const XRect _Const0039 = {{ 472, 100 }, { 772, 340 }};
static const XRect _Const003A = {{ 26, 100 }, { 456, 340 }};
static const XPoint _Const003B = { 700, 64 };
static const XPoint _Const003C = { 100, 64 };
static const XColor _Const003D = { 0xD1, 0xD1, 0xD1, 0xFF };
static const XColor _Const003E = { 0xBE, 0xBE, 0xBE, 0x73 };
static const XRect _Const003F = {{ 0, 0 }, { 430, 240 }};
static const XRect _Const0040 = {{ 270, 0 }, { 412, 240 }};
static const XRect _Const0041 = {{ 126, 0 }, { 256, 240 }};
static const XRect _Const0042 = {{ 18, 0 }, { 112, 240 }};
static const XPoint _Const0043 = { 112, 81 };
static const XPoint _Const0044 = { 18, 81 };
static const XPoint _Const0045 = { 112, 158 };
static const XPoint _Const0046 = { 18, 158 };
static const XPoint _Const0047 = { 256, 158 };
static const XPoint _Const0048 = { 126, 158 };
static const XPoint _Const0049 = { 256, 81 };
static const XPoint _Const004A = { 126, 81 };
static const XPoint _Const004B = { 411, 81 };
static const XPoint _Const004C = { 270, 81 };
static const XPoint _Const004D = { 411, 158 };
static const XPoint _Const004E = { 270, 158 };
static const XRect _Const004F = {{ 0, 0 }, { 180, 250 }};
static const XRect _Const0050 = {{ 0, 0 }, { 160, 160 }};
static const XRect _Const0051 = {{ 0, 0 }, { 190, 160 }};
static const XColor _Const0052 = { 0xFF, 0xFF, 0xFF, 0x22 };
static const XColor _Const0053 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0054 = {{ 190, 270 }, { 310, 390 }};
static const XPoint _Const0055 = { 0, 0 };
static const XRect _Const0056 = {{ 386, 271 }, { 411, 295 }};
static const XRect _Const0057 = {{ 386, 221 }, { 411, 246 }};
static const XRect _Const0058 = {{ 230, 176 }, { 300, 301 }};
static const XRect _Const0059 = {{ 309, 176 }, { 379, 301 }};
static const XRect _Const005A = {{ 422, 176 }, { 492, 301 }};
static const XRect _Const005B = {{ 500, 176 }, { 570, 301 }};
static const XRect _Const005C = {{ 360, 306 }, { 398, 366 }};
static const XRect _Const005D = {{ 402, 306 }, { 440, 366 }};
static const XPoint _Const005E = { 0, 480 };
static const XRect _Const005F = {{ 0, 0 }, { 30, 480 }};
static const XColor _Const0060 = { 0xFF, 0xFF, 0xFF, 0x99 };
static const XPoint _Const0061 = { 100, 393 };
static const XPoint _Const0062 = { 700, 393 };
static const XColor _Const0063 = { 0x40, 0x40, 0x40, 0xFF };
static const XRect _Const0064 = {{ 45, 185 }, { 255, 295 }};
static const XRect _Const0065 = {{ 295, 185 }, { 505, 295 }};
static const XRect _Const0066 = {{ 545, 185 }, { 755, 295 }};

#ifndef EW_DONT_CHECK_INDEX
  /* This function is used to check the indices when accessing an array.
     If you don't want this verification add the define EW_DONT_CHECK_INDEX
     to your Makefile or project settings. */
  static int EwCheckIndex( int aIndex, int aRange, const char* aFile, int aLine )
  {
    if (( aIndex < 0 ) || ( aIndex >= aRange ))
    {
      EwPrint( "[FATAL ERROR in %s:%d] Array index %d out of bounds %d",
                aFile, aLine, aIndex, aRange );
      EwPanic();
      return 0;
    }
    return aIndex;
  }

  #define EwCheckIndex( aIndex, aRange ) \
    EwCheckIndex( aIndex, aRange, __FILE__, __LINE__ )
#else
  #define EwCheckIndex( aIndex, aRange ) aIndex
#endif

/* Initializer for the class 'BezierClock::TimePicker' */
void BezierClockTimePicker__Init( BezierClockTimePicker _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPickerControl__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockTimePicker );

  /* ... then construct all embedded objects */
  CoreSlideTouchHandler__Init( &_this->TouchHandlerSecond, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerMinute, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerHour, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListSecond, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListMinute, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListHour, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Separator2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Separator1, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line3, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line4, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line5, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line6, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockTimePicker );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->TouchHandlerSecond, _Const0001 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerSecond, _Const0002 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerSecond, 0.2f );
  CoreRectView__OnSetBounds( &_this->TouchHandlerMinute, _Const0003 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerMinute, _Const0002 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerMinute, 0.2f );
  CoreRectView__OnSetBounds( &_this->TouchHandlerHour, _Const0004 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerHour, _Const0002 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerHour, 0.2f );
  CoreRectView__OnSetBounds( &_this->ListSecond, _Const0001 );
  CoreVerticalList_OnSetEndless( &_this->ListSecond, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListSecond, 80 );
  CoreVerticalList_OnSetItemHeight( &_this->ListSecond, 80 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListSecond, 60 );
  CoreRectView__OnSetBounds( &_this->ListMinute, _Const0003 );
  CoreVerticalList_OnSetEndless( &_this->ListMinute, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListMinute, 80 );
  CoreVerticalList_OnSetItemHeight( &_this->ListMinute, 80 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListMinute, 60 );
  CoreRectView__OnSetBounds( &_this->ListHour, _Const0004 );
  CoreVerticalList_OnSetEndless( &_this->ListHour, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListHour, 80 );
  CoreVerticalList_OnSetItemHeight( &_this->ListHour, 80 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListHour, 24 );
  CoreRectView__OnSetBounds( &_this->Separator2, _Const0005 );
  ViewsText_OnSetString( &_this->Separator2, EwLoadString( &_Const0006 ));
  ViewsText_OnSetColor( &_this->Separator2, _Const0007 );
  CoreRectView__OnSetBounds( &_this->Separator1, _Const0008 );
  ViewsText_OnSetString( &_this->Separator1, EwLoadString( &_Const0006 ));
  ViewsText_OnSetColor( &_this->Separator1, _Const0007 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0009 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const000A );
  ViewsLine_OnSetWidth( &_this->Line1, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const000B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const000C );
  ViewsLine_OnSetWidth( &_this->Line2, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const000D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const000E );
  ViewsLine_OnSetWidth( &_this->Line3, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const000F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const0010 );
  ViewsLine_OnSetWidth( &_this->Line4, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line5, _Const0011 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line5, _Const0012 );
  ViewsLine_OnSetWidth( &_this->Line5, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line6, _Const0013 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line6, _Const0014 );
  ViewsLine_OnSetWidth( &_this->Line6, 3 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerSecond ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerMinute ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerHour ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListSecond ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListMinute ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListHour ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Separator2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Separator1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line6 ), 0 );
  _this->TouchHandlerSecond.OnSlide = EwNewSlot( _this, BezierClockTimePicker_onSlideSecond );
  _this->TouchHandlerSecond.OnEnd = EwNewSlot( _this, BezierClockTimePicker_onEndSlide );
  _this->TouchHandlerSecond.OnStart = EwNewSlot( _this, BezierClockTimePicker_onStartSlide );
  _this->TouchHandlerMinute.OnSlide = EwNewSlot( _this, BezierClockTimePicker_onSlideMinute );
  _this->TouchHandlerMinute.OnEnd = EwNewSlot( _this, BezierClockTimePicker_onEndSlide );
  _this->TouchHandlerMinute.OnStart = EwNewSlot( _this, BezierClockTimePicker_onStartSlide );
  _this->TouchHandlerHour.OnSlide = EwNewSlot( _this, BezierClockTimePicker_onSlideHour );
  _this->TouchHandlerHour.OnEnd = EwNewSlot( _this, BezierClockTimePicker_onEndSlide );
  _this->TouchHandlerHour.OnStart = EwNewSlot( _this, BezierClockTimePicker_onStartSlide );
  _this->ListSecond.OnLoadItem = EwNewSlot( _this, BezierClockTimePicker_OnLoadSecondItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListSecond, &_this->TouchHandlerSecond );
  _this->ListMinute.OnLoadItem = EwNewSlot( _this, BezierClockTimePicker_OnLoadMinuteItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListMinute, &_this->TouchHandlerMinute );
  _this->ListHour.OnLoadItem = EwNewSlot( _this, BezierClockTimePicker_OnLoadHourItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListHour, &_this->TouchHandlerHour );
  ViewsText_OnSetFont( &_this->Separator2, EwLoadResource( &BezierClockFontXXL, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Separator1, EwLoadResource( &BezierClockFontXXL, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'BezierClock::TimePicker' */
void BezierClockTimePicker__ReInit( BezierClockTimePicker _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPickerControl__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerSecond );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerMinute );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerHour );
  CoreVerticalList__ReInit( &_this->ListSecond );
  CoreVerticalList__ReInit( &_this->ListMinute );
  CoreVerticalList__ReInit( &_this->ListHour );
  ViewsText__ReInit( &_this->Separator2 );
  ViewsText__ReInit( &_this->Separator1 );
  ViewsLine__ReInit( &_this->Line1 );
  ViewsLine__ReInit( &_this->Line2 );
  ViewsLine__ReInit( &_this->Line3 );
  ViewsLine__ReInit( &_this->Line4 );
  ViewsLine__ReInit( &_this->Line5 );
  ViewsLine__ReInit( &_this->Line6 );
}

/* Finalizer method for the class 'BezierClock::TimePicker' */
void BezierClockTimePicker__Done( BezierClockTimePicker _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPickerControl );

  /* Finalize all embedded objects */
  CoreSlideTouchHandler__Done( &_this->TouchHandlerSecond );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerMinute );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerHour );
  CoreVerticalList__Done( &_this->ListSecond );
  CoreVerticalList__Done( &_this->ListMinute );
  CoreVerticalList__Done( &_this->ListHour );
  ViewsText__Done( &_this->Separator2 );
  ViewsText__Done( &_this->Separator1 );
  ViewsLine__Done( &_this->Line1 );
  ViewsLine__Done( &_this->Line2 );
  ViewsLine__Done( &_this->Line3 );
  ViewsLine__Done( &_this->Line4 );
  ViewsLine__Done( &_this->Line5 );
  ViewsLine__Done( &_this->Line6 );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPickerControl__Done( &_this->_.Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void BezierClockTimePicker_UpdateLayout( BezierClockTimePicker _this, XPoint aSize )
{
  CoreVerticalList_OnSetItemHeight( &_this->ListHour, aSize.Y / 3 );
  CoreVerticalList_OnSetItemHeight( &_this->ListMinute, aSize.Y / 3 );
  CoreVerticalList_OnSetItemHeight( &_this->ListSecond, aSize.Y / 3 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListHour, aSize.Y / 3 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListMinute, aSize.Y / 3 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListSecond, aSize.Y / 3 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerHour, EwNewPoint( 0, 
  aSize.Y / 3 ));
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerMinute, EwNewPoint( 0, 
  aSize.Y / 3 ));
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerSecond, EwNewPoint( 0, 
  aSize.Y / 3 ));
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void BezierClockTimePicker_UpdateViewState( BezierClockTimePicker _this, XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isSliding;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isSliding = (XBool)(( _this->TouchHandlerHour.Sliding || _this->TouchHandlerMinute.Sliding ) 
  || _this->TouchHandlerSecond.Sliding );

  if ( isSliding )
  {
    ViewsLine_OnSetColor( &_this->Line6, _Const0015 );
    ViewsLine_OnSetColor( &_this->Line1, _Const0015 );
    ViewsLine_OnSetColor( &_this->Line2, _Const0015 );
    ViewsLine_OnSetColor( &_this->Line3, _Const0015 );
    ViewsLine_OnSetColor( &_this->Line4, _Const0015 );
    ViewsLine_OnSetColor( &_this->Line5, _Const0015 );
  }
  else
  {
    ViewsLine_OnSetColor( &_this->Line6, _Const0016 );
    ViewsLine_OnSetColor( &_this->Line1, _Const0016 );
    ViewsLine_OnSetColor( &_this->Line2, _Const0016 );
    ViewsLine_OnSetColor( &_this->Line3, _Const0016 );
    ViewsLine_OnSetColor( &_this->Line4, _Const0016 );
    ViewsLine_OnSetColor( &_this->Line5, _Const0016 );
  }

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->sliding = isSliding;
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerDay, TouchHandlerMonth 
   or TouchHandlerYear) has finished the slide animation. Thereupon the owner of 
   the date picker is notified, that the date has been changed. */
void BezierClockTimePicker_onSlideSecond( BezierClockTimePicker _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->ListSecond, 0, _this->ListSecond.NoOfItems );
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerDay, TouchHandlerMonth 
   or TouchHandlerYear) has finished the slide animation. Thereupon the owner of 
   the date picker is notified, that the date has been changed. */
void BezierClockTimePicker_onSlideMinute( BezierClockTimePicker _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->ListMinute, 0, _this->ListMinute.NoOfItems );
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerDay, TouchHandlerMonth 
   or TouchHandlerYear) has finished the slide animation. Thereupon the owner of 
   the date picker is notified, that the date has been changed. */
void BezierClockTimePicker_onSlideHour( BezierClockTimePicker _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->ListHour, 0, _this->ListHour.NoOfItems );
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerHour, 
   TouchHandlerMinute or TouchHandlerSecond) has finished the slide animation. Thereupon 
   the owner of the time picker is notified, that the time has been changed. */
void BezierClockTimePicker_onEndSlide( BezierClockTimePicker _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerHour, 
   TouchHandlerMinute or TouchHandlerSecond) has begun the slide animation. */
void BezierClockTimePicker_onStartSlide( BezierClockTimePicker _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This method is called by 'ListSecond' vertical list every time the list loads 
   or updates an item. */
void BezierClockTimePicker_OnLoadSecondItem( BezierClockTimePicker _this, XObject 
  sender )
{
  XInt32 itemNo;
  ViewsText itemView;
  XInt32 itemCenter;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListSecond.Item;
  itemView = EwCastObject( _this->ListSecond.View, ViewsText );

  if ( itemView == 0 )
    return;

  itemCenter = CoreVerticalList_GetItemAtPosition( &_this->ListSecond, EwGetRectCenter( 
  _this->ListSecond.Super2.Bounds ));
  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &BezierClockFontXXL, ResourcesFont ));
  ViewsText_OnSetColor( itemView, (( itemCenter == itemNo )? _Const0007 : _Const0017 ));
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetScrollOffset( itemView, _Const0018 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  EwGetRectW( _this->ListSecond.Super2.Bounds ), _this->ListSecond.ItemHeight )));
}

/* This method is called by 'ListMinute' vertical list every time the list loads 
   or updates an item. */
void BezierClockTimePicker_OnLoadMinuteItem( BezierClockTimePicker _this, XObject 
  sender )
{
  XInt32 itemNo;
  ViewsText itemView;
  XInt32 itemCenter;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListMinute.Item;
  itemView = EwCastObject( _this->ListMinute.View, ViewsText );

  if ( itemView == 0 )
    return;

  itemCenter = CoreVerticalList_GetItemAtPosition( &_this->ListMinute, EwGetRectCenter( 
  _this->ListMinute.Super2.Bounds ));
  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &BezierClockFontXXL, ResourcesFont ));
  ViewsText_OnSetColor( itemView, (( itemCenter == itemNo )? _Const0007 : _Const0017 ));
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetScrollOffset( itemView, _Const0018 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  EwGetRectW( _this->ListMinute.Super2.Bounds ), _this->ListMinute.ItemHeight )));
}

/* This method is called by 'ListHour' vertical list every time the list loads or 
   updates an item. */
void BezierClockTimePicker_OnLoadHourItem( BezierClockTimePicker _this, XObject 
  sender )
{
  XInt32 itemNo;
  ViewsText itemView;
  XInt32 itemCenter;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListHour.Item;
  itemView = EwCastObject( _this->ListHour.View, ViewsText );

  if ( itemView == 0 )
    return;

  itemCenter = CoreVerticalList_GetItemAtPosition( &_this->ListHour, EwGetRectCenter( 
  _this->ListHour.Super2.Bounds ));
  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &BezierClockFontXXL, ResourcesFont ));
  ViewsText_OnSetColor( itemView, (( itemCenter == itemNo )? _Const0007 : _Const0017 ));
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetScrollOffset( itemView, _Const0018 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  EwGetRectW( _this->ListHour.Super2.Bounds ), _this->ListHour.ItemHeight )));
}

/* 'C' function for method : 'BezierClock::TimePicker.OnGetSecond()' */
XInt32 BezierClockTimePicker_OnGetSecond( BezierClockTimePicker _this )
{
  return (( -_this->ListSecond.ScrollOffset / _this->ListSecond.ItemHeight ) + 1 ) 
    % 60;
}

/* 'C' function for method : 'BezierClock::TimePicker.OnGetMinute()' */
XInt32 BezierClockTimePicker_OnGetMinute( BezierClockTimePicker _this )
{
  return (( -_this->ListMinute.ScrollOffset / _this->ListMinute.ItemHeight ) + 1 ) 
    % 60;
}

/* 'C' function for method : 'BezierClock::TimePicker.OnGetHour()' */
XInt32 BezierClockTimePicker_OnGetHour( BezierClockTimePicker _this )
{
  return (( -_this->ListHour.ScrollOffset / _this->ListHour.ItemHeight ) + 1 ) % 
    24;
}

/* Variants derived from the class : 'BezierClock::TimePicker' */
EW_DEFINE_CLASS_VARIANTS( BezierClockTimePicker )
EW_END_OF_CLASS_VARIANTS( BezierClockTimePicker )

/* Virtual Method Table (VMT) for the class : 'BezierClock::TimePicker' */
EW_DEFINE_CLASS( BezierClockTimePicker, TemplatesPickerControl, TouchHandlerSecond, 
                 sliding, sliding, sliding, sliding, sliding, "BezierClock::TimePicker" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  BezierClockTimePicker_UpdateLayout,
  BezierClockTimePicker_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( BezierClockTimePicker )

/* Initializer for the class 'BezierClock::ClockScreen' */
void BezierClockClockScreen__Init( BezierClockClockScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockClockScreen );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->Timer, &_this->_.XObject, 0 );
  GraphicsArcPath__Init( &_this->DotPath, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandlerDown, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandlerRight, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandlerUp, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Date, &_this->_.XObject, 0 );
  ViewsFillPath__Init( &_this->Dot1, &_this->_.XObject, 0 );
  ViewsFillPath__Init( &_this->Dot2, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit0, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit1, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit2, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit3, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit4, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit5, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageUp, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageDown, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageRight, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockClockScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0019 );
  CoreTimer_OnSetPeriod( &_this->Timer, 1000 );
  CoreTimer_OnSetBegin( &_this->Timer, 900 );
  CoreTimer_OnSetEnabled( &_this->Timer, 1 );
  GraphicsArcPath_OnSetNoOfEdges( &_this->DotPath, 20 );
  GraphicsArcPath_OnSetEndAngle( &_this->DotPath, 360.0f );
  GraphicsArcPath_OnSetRadius( &_this->DotPath, 9.0f );
  GraphicsArcPath_OnSetStyle( &_this->DotPath, GraphicsArcStylePie );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandlerDown, _Const001A );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandlerDown, _Const001B );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandlerDown, _Const001C );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandlerDown, _Const001D );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandlerRight, _Const001E );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandlerRight, _Const001F );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandlerRight, _Const0020 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandlerRight, _Const001C );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandlerUp, _Const0021 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandlerUp, _Const001E );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandlerUp, _Const0022 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandlerUp, _Const0023 );
  CoreView_OnSetLayout((CoreView)&_this->Date, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Date, _Const0024 );
  ViewsText_OnSetString( &_this->Date, EwLoadString( &_Const0025 ));
  CoreView_OnSetLayout((CoreView)&_this->Dot1, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Dot1, _Const0026 );
  ViewsFillPath_OnSetColor( &_this->Dot1, _Const0027 );
  ViewsFillPath_OnSetOffset( &_this->Dot1, _Const0028 );
  CoreView_OnSetLayout((CoreView)&_this->Dot2, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Dot2, _Const0029 );
  ViewsFillPath_OnSetColor( &_this->Dot2, _Const0027 );
  ViewsFillPath_OnSetOffset( &_this->Dot2, _Const0028 );
  CoreView_OnSetLayout((CoreView)&_this->Digit0, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Digit0, _Const002A );
  BezierClockDigit_OnSetEdges( &_this->Digit0, 60 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit0, 10.1f );
  CoreView_OnSetLayout((CoreView)&_this->Digit1, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Digit1, _Const002B );
  BezierClockDigit_OnSetEdges( &_this->Digit1, 60 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit1, 10.1f );
  CoreView_OnSetLayout((CoreView)&_this->Digit2, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Digit2, _Const002C );
  BezierClockDigit_OnSetEdges( &_this->Digit2, 60 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit2, 10.1f );
  CoreView_OnSetLayout((CoreView)&_this->Digit3, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Digit3, _Const002D );
  BezierClockDigit_OnSetEdges( &_this->Digit3, 60 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit3, 10.1f );
  CoreView_OnSetLayout((CoreView)&_this->Digit4, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Digit4, _Const002E );
  BezierClockDigit_OnSetEdges( &_this->Digit4, 50 );
  BezierClockDigit_OnSetColor( &_this->Digit4, _Const0027 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit4, 3.9f );
  CoreView_OnSetLayout((CoreView)&_this->Digit5, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Digit5, _Const002F );
  BezierClockDigit_OnSetEdges( &_this->Digit5, 50 );
  BezierClockDigit_OnSetColor( &_this->Digit5, _Const0027 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit5, 3.9f );
  CoreRectView__OnSetBounds( &_this->ImageUp, _Const0030 );
  ViewsImage_OnSetFrameNumber( &_this->ImageUp, 1 );
  CoreRectView__OnSetBounds( &_this->ImageDown, _Const0031 );
  ViewsImage_OnSetFrameNumber( &_this->ImageDown, 0 );
  CoreRectView__OnSetBounds( &_this->ImageRight, _Const0032 );
  ViewsImage_OnSetFrameNumber( &_this->ImageRight, 2 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerDown ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerRight ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerUp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Date ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Dot1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Dot2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageUp ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageDown ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageRight ), 0 );
  _this->Timer.OnTrigger = EwNewSlot( _this, BezierClockClockScreen_updateCurrentTime );
  _this->TouchHandlerDown.OnPress = EwNewSlot( _this, BezierClockClockScreen_onShowSettings );
  _this->TouchHandlerRight.OnPress = EwNewSlot( _this, BezierClockClockScreen_onShowTimer );
  _this->TouchHandlerUp.OnPress = EwNewSlot( _this, BezierClockClockScreen_onShowStyle );
  ViewsText_OnSetFont( &_this->Date, EwLoadResource( &BezierClockFontXXL, ResourcesFont ));
  ViewsFillPath_OnSetPath( &_this->Dot1, ((GraphicsPath)&_this->DotPath ));
  ViewsFillPath_OnSetPath( &_this->Dot2, ((GraphicsPath)&_this->DotPath ));
  ViewsImage_OnSetBitmap( &_this->ImageUp, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageDown, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->ImageRight, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));

  /* Call the user defined constructor */
  BezierClockClockScreen_Init( _this, aArg );
}

/* Re-Initializer for the class 'BezierClock::ClockScreen' */
void BezierClockClockScreen__ReInit( BezierClockClockScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->Timer );
  GraphicsArcPath__ReInit( &_this->DotPath );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandlerDown );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandlerRight );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandlerUp );
  ViewsText__ReInit( &_this->Date );
  ViewsFillPath__ReInit( &_this->Dot1 );
  ViewsFillPath__ReInit( &_this->Dot2 );
  BezierClockDigit__ReInit( &_this->Digit0 );
  BezierClockDigit__ReInit( &_this->Digit1 );
  BezierClockDigit__ReInit( &_this->Digit2 );
  BezierClockDigit__ReInit( &_this->Digit3 );
  BezierClockDigit__ReInit( &_this->Digit4 );
  BezierClockDigit__ReInit( &_this->Digit5 );
  ViewsImage__ReInit( &_this->ImageUp );
  ViewsImage__ReInit( &_this->ImageDown );
  ViewsImage__ReInit( &_this->ImageRight );
}

/* Finalizer method for the class 'BezierClock::ClockScreen' */
void BezierClockClockScreen__Done( BezierClockClockScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->Timer );
  GraphicsArcPath__Done( &_this->DotPath );
  CoreSimpleTouchHandler__Done( &_this->TouchHandlerDown );
  CoreSimpleTouchHandler__Done( &_this->TouchHandlerRight );
  CoreSimpleTouchHandler__Done( &_this->TouchHandlerUp );
  ViewsText__Done( &_this->Date );
  ViewsFillPath__Done( &_this->Dot1 );
  ViewsFillPath__Done( &_this->Dot2 );
  BezierClockDigit__Done( &_this->Digit0 );
  BezierClockDigit__Done( &_this->Digit1 );
  BezierClockDigit__Done( &_this->Digit2 );
  BezierClockDigit__Done( &_this->Digit3 );
  BezierClockDigit__Done( &_this->Digit4 );
  BezierClockDigit__Done( &_this->Digit5 );
  ViewsImage__Done( &_this->ImageUp );
  ViewsImage__Done( &_this->ImageDown );
  ViewsImage__Done( &_this->ImageRight );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void BezierClockClockScreen_Init( BezierClockClockScreen _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwPostSignal( EwNewSlot( _this, BezierClockClockScreen_updateCurrentTime1 ), ((XObject)_this ));
}

/* 'C' function for method : 'BezierClock::ClockScreen.onShowTimer()' */
void BezierClockClockScreen_onShowTimer( BezierClockClockScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup__IsDialog( _this, 0 ))
    return;

  CoreGroup__SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( BezierClockTimerScreen, 
  0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideLeftCentered, EffectsSlideTransition )), 
  ((EffectsTransition)EwGetAutoObject( &EffectsSlideRightCentered, EffectsSlideTransition )), 
  0, 0, ((EffectsTransition)EwGetAutoObject( &EffectsSlideLeftCentered, EffectsSlideTransition )), 
  0, 0, EwNullSlot, EwNullSlot, 0 );
  BezierClockBackground_ShiftLeft( &EwCastObject( _this->Super3.Owner, BezierClockBezierClock )->Background );
}

/* 'C' function for method : 'BezierClock::ClockScreen.onShowSettings()' */
void BezierClockClockScreen_onShowSettings( BezierClockClockScreen _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( CoreGroup__IsDialog( _this, 0 ))
    CoreGroup__SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( BezierClockSettingsScreen, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideUpCentered, EffectsSlideTransition )), 
    ((EffectsTransition)EwGetAutoObject( &EffectsSlideDownCentered, EffectsSlideTransition )), 
    0, 0, ((EffectsTransition)EwGetAutoObject( &EffectsSlideUpCentered, EffectsSlideTransition )), 
    0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'BezierClock::ClockScreen.onShowStyle()' */
void BezierClockClockScreen_onShowStyle( BezierClockClockScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( CoreGroup__IsDialog( _this, 0 ))
    CoreGroup__SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( BezierClockStyleScreen, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideDownCentered, EffectsSlideTransition )), 
    ((EffectsTransition)EwGetAutoObject( &EffectsSlideUpCentered, EffectsSlideTransition )), 
    0, 0, ((EffectsTransition)EwGetAutoObject( &EffectsSlideDownCentered, EffectsSlideTransition )), 
    0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'BezierClock::ClockScreen.updateCurrentTime()' */
void BezierClockClockScreen_updateCurrentTime( BezierClockClockScreen _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  BezierClockDigit_OnSetValue( &_this->Digit5, _this->Digit5.Value + 1 );

  if ( _this->Digit5.Value > 9 )
  {
    BezierClockDigit_OnSetValue( &_this->Digit5, 0 );
    BezierClockDigit_OnSetValue( &_this->Digit4, _this->Digit4.Value + 1 );

    if ( _this->Digit4.Value > 5 )
    {
      BezierClockDigit_OnSetValue( &_this->Digit4, 0 );
      BezierClockDigit_OnSetValue( &_this->Digit3, _this->Digit3.Value + 1 );

      if ( _this->Digit3.Value > 9 )
      {
        BezierClockDigit_OnSetValue( &_this->Digit3, 0 );
        BezierClockDigit_OnSetValue( &_this->Digit2, _this->Digit2.Value + 1 );

        if ( _this->Digit2.Value > 5 )
        {
          BezierClockDigit_OnSetValue( &_this->Digit2, 0 );
          BezierClockDigit_OnSetValue( &_this->Digit1, _this->Digit1.Value + 1 );

          if (( _this->Digit1.Value > 9 ) || (( _this->Digit0.Value == 2 ) && ( 
              _this->Digit1.Value == 4 )))
          {
            BezierClockDigit_OnSetValue( &_this->Digit1, 0 );
            BezierClockDigit_OnSetValue( &_this->Digit0, _this->Digit0.Value + 1 );

            if ( _this->Digit0.Value > 2 )
            {
              BezierClockDigit_OnSetValue( &_this->Digit0, 0 );
              BezierClockDigit_OnSetValue( &_this->Digit1, 0 );
              BezierClockDigit_OnSetValue( &_this->Digit2, 0 );
              BezierClockDigit_OnSetValue( &_this->Digit3, 0 );
              BezierClockDigit_OnSetValue( &_this->Digit4, 0 );
              BezierClockDigit_OnSetValue( &_this->Digit5, 0 );
            }
          }
        }
      }
    }
  }
}

/* 'C' function for method : 'BezierClock::ClockScreen.updateCurrentTime1()' */
void BezierClockClockScreen_updateCurrentTime1( BezierClockClockScreen _this, XObject 
  sender )
{
  CoreTime currentTime;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  currentTime = &EwGetAutoObject( &BezierClockDevice, BezierClockDeviceClass )->Time;
  BezierClockDigit_OnSetValue( &_this->Digit0, currentTime->Hour / 10 );
  BezierClockDigit_OnSetValue( &_this->Digit1, currentTime->Hour % 10 );
  BezierClockDigit_OnSetValue( &_this->Digit2, currentTime->Minute / 10 );
  BezierClockDigit_OnSetValue( &_this->Digit3, currentTime->Minute % 10 );
  BezierClockDigit_OnSetValue( &_this->Digit4, currentTime->Second / 10 );
  BezierClockDigit_OnSetValue( &_this->Digit5, currentTime->Second % 10 );
  ViewsText_OnSetString( &_this->Date, EwConcatString( EwConcatString( EwConcatString( 
  EwConcatString( CoreTime_getDayOfWeekName( currentTime, CoreTime_OnGetDayOfWeek( 
  currentTime ), 1 ), EwLoadString( &_Const0033 )), CoreTime_getMonthName( currentTime, 
  currentTime->Month, 0 )), EwLoadString( &_Const0034 )), EwNewStringInt( currentTime->Day, 
  2, 10 )));
}

/* Variants derived from the class : 'BezierClock::ClockScreen' */
EW_DEFINE_CLASS_VARIANTS( BezierClockClockScreen )
EW_END_OF_CLASS_VARIANTS( BezierClockClockScreen )

/* Virtual Method Table (VMT) for the class : 'BezierClock::ClockScreen' */
EW_DEFINE_CLASS( BezierClockClockScreen, CoreGroup, Timer, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "BezierClock::ClockScreen" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( BezierClockClockScreen )

/* Initializer for the class 'BezierClock::BezierClock' */
void BezierClockBezierClock__Init( BezierClockBezierClock _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockBezierClock );

  /* ... then construct all embedded objects */
  CorePropertyObserver__Init( &_this->PropertyObserver, &_this->_.XObject, 0 );
  BezierClockBackground__Init( &_this->Background, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockBezierClock );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0019 );
  CoreRectView__OnSetBounds( &_this->Background, _Const0019 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  _this->PropertyObserver.OnEvent = EwNewSlot( _this, BezierClockBezierClock_onUpdateBackground );
  CorePropertyObserver_OnSetOutlet( &_this->PropertyObserver, EwNewRef( EwGetAutoObject( 
  &BezierClockDevice, BezierClockDeviceClass ), BezierClockDeviceClass_OnGetCurrentBackground, 
  BezierClockDeviceClass_OnSetCurrentBackground ));

  /* Call the user defined constructor */
  BezierClockBezierClock_Init( _this, aArg );
}

/* Re-Initializer for the class 'BezierClock::BezierClock' */
void BezierClockBezierClock__ReInit( BezierClockBezierClock _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CorePropertyObserver__ReInit( &_this->PropertyObserver );
  BezierClockBackground__ReInit( &_this->Background );
}

/* Finalizer method for the class 'BezierClock::BezierClock' */
void BezierClockBezierClock__Done( BezierClockBezierClock _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CorePropertyObserver__Done( &_this->PropertyObserver );
  BezierClockBackground__Done( &_this->Background );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void BezierClockBezierClock_Init( BezierClockBezierClock _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreRectView__OnSetBounds( _this, EwSetRectSize( _this->Super2.Bounds, _Const0020 ));
  CoreRectView__OnSetBounds( &_this->Background, EwSetRectSize( _this->Background.Super2.Bounds, 
  _Const0020 ));
  CoreGroup__PresentDialog( _this, ((CoreGroup)EwNewObject( BezierClockClockScreen, 
  0 )), 0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  EwPostSignal( EwNewSlot( _this, BezierClockBezierClock_onUpdateBackground ), ((XObject)_this ));
}

/* This slot method is executed when the associated property observer 'PropertyObserver' 
   is notified. */
void BezierClockBezierClock_onUpdateBackground( BezierClockBezierClock _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  BezierClockBackground_OnSetCurrentBackground( &_this->Background, EwGetAutoObject( 
  &BezierClockDevice, BezierClockDeviceClass )->CurrentBackground );
}

/* Variants derived from the class : 'BezierClock::BezierClock' */
EW_DEFINE_CLASS_VARIANTS( BezierClockBezierClock )
EW_END_OF_CLASS_VARIANTS( BezierClockBezierClock )

/* Virtual Method Table (VMT) for the class : 'BezierClock::BezierClock' */
EW_DEFINE_CLASS( BezierClockBezierClock, CoreGroup, PropertyObserver, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "BezierClock::BezierClock" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( BezierClockBezierClock )

/* Initializer for the class 'BezierClock::SettingsScreen' */
void BezierClockSettingsScreen__Init( BezierClockSettingsScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockSettingsScreen );

  /* ... then construct all embedded objects */
  WidgetSetPushButton__Init( &_this->PushButtonConfirm, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButtonCancel, &_this->_.XObject, 0 );
  BezierClockTimePicker__Init( &_this->TimePicker, &_this->_.XObject, 0 );
  BezierClockDatePicker__Init( &_this->DatePicker, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->UpTouchHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageUp, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockSettingsScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0019 );
  CoreRectView__OnSetBounds( &_this->PushButtonConfirm, _Const0035 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButtonConfirm, EwLoadString( &_Const0036 ));
  CoreRectView__OnSetBounds( &_this->PushButtonCancel, _Const0037 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButtonCancel, EwLoadString( &_Const0038 ));
  CoreRectView__OnSetBounds( &_this->TimePicker, _Const0039 );
  CoreRectView__OnSetBounds( &_this->DatePicker, _Const003A );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->UpTouchHandler, _Const0021 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->UpTouchHandler, _Const001E );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->UpTouchHandler, _Const003B );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->UpTouchHandler, _Const003C );
  CoreRectView__OnSetBounds( &_this->ImageUp, _Const0030 );
  ViewsImage_OnSetFrameNumber( &_this->ImageUp, 1 );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( &_this->PushButtonConfig, _Const0015 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( &_this->PushButtonConfig, _Const003D );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( &_this->PushButtonConfig, _Const003E );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfig, _Const0007 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonConfirm ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButtonCancel ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TimePicker ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->DatePicker ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->UpTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageUp ), 0 );
  _this->PushButtonConfirm.OnPress = EwNewSlot( _this, BezierClockSettingsScreen_onConfirm );
  _this->PushButtonConfirm.OnActivate = EwNullSlot;
  WidgetSetPushButton_OnSetAppearance( &_this->PushButtonConfirm, &_this->PushButtonConfig );
  _this->PushButtonCancel.OnActivate = EwNewSlot( _this, BezierClockSettingsScreen_onCancel );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButtonCancel, &_this->PushButtonConfig );
  _this->UpTouchHandler.OnPress = EwNewSlot( _this, BezierClockSettingsScreen_onCancel );
  ViewsImage_OnSetBitmap( &_this->ImageUp, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  WidgetSetPushButtonConfig_OnSetLabelFont( &_this->PushButtonConfig, EwLoadResource( 
  &BezierClockFontL, ResourcesFont ));
}

/* Re-Initializer for the class 'BezierClock::SettingsScreen' */
void BezierClockSettingsScreen__ReInit( BezierClockSettingsScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  WidgetSetPushButton__ReInit( &_this->PushButtonConfirm );
  WidgetSetPushButton__ReInit( &_this->PushButtonCancel );
  BezierClockTimePicker__ReInit( &_this->TimePicker );
  BezierClockDatePicker__ReInit( &_this->DatePicker );
  CoreSimpleTouchHandler__ReInit( &_this->UpTouchHandler );
  ViewsImage__ReInit( &_this->ImageUp );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig );
}

/* Finalizer method for the class 'BezierClock::SettingsScreen' */
void BezierClockSettingsScreen__Done( BezierClockSettingsScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  WidgetSetPushButton__Done( &_this->PushButtonConfirm );
  WidgetSetPushButton__Done( &_this->PushButtonCancel );
  BezierClockTimePicker__Done( &_this->TimePicker );
  BezierClockDatePicker__Done( &_this->DatePicker );
  CoreSimpleTouchHandler__Done( &_this->UpTouchHandler );
  ViewsImage__Done( &_this->ImageUp );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'BezierClock::SettingsScreen.onConfirm()' */
void BezierClockSettingsScreen_onConfirm( BezierClockSettingsScreen _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup__IsDialog( _this, 0 ))
    return;

  EwGetAutoObject( &BezierClockDevice, BezierClockDeviceClass )->Time.Year = BezierClockDatePicker_OnGetYear( 
  &_this->DatePicker );
  CoreTime_OnSetMonth( &EwGetAutoObject( &BezierClockDevice, BezierClockDeviceClass )->Time, 
  BezierClockDatePicker_OnGetMonth( &_this->DatePicker ));
  CoreTime_OnSetDay( &EwGetAutoObject( &BezierClockDevice, BezierClockDeviceClass )->Time, 
  BezierClockDatePicker_OnGetDay( &_this->DatePicker ));
  CoreTime_OnSetHour( &EwGetAutoObject( &BezierClockDevice, BezierClockDeviceClass )->Time, 
  BezierClockTimePicker_OnGetHour( &_this->TimePicker ));
  CoreTime_OnSetMinute( &EwGetAutoObject( &BezierClockDevice, BezierClockDeviceClass )->Time, 
  BezierClockTimePicker_OnGetMinute( &_this->TimePicker ));
  CoreTime_OnSetSecond( &EwGetAutoObject( &BezierClockDevice, BezierClockDeviceClass )->Time, 
  BezierClockTimePicker_OnGetSecond( &_this->TimePicker ));
  CoreGroup__SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( BezierClockClockScreen, 
  0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideDownCentered, EffectsSlideTransition )), 
  0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'BezierClock::SettingsScreen.onCancel()' */
void BezierClockSettingsScreen_onCancel( BezierClockSettingsScreen _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( CoreGroup__IsDialog( _this, 0 ))
    CoreGroup__SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( BezierClockClockScreen, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideDownCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'BezierClock::SettingsScreen' */
EW_DEFINE_CLASS_VARIANTS( BezierClockSettingsScreen )
EW_END_OF_CLASS_VARIANTS( BezierClockSettingsScreen )

/* Virtual Method Table (VMT) for the class : 'BezierClock::SettingsScreen' */
EW_DEFINE_CLASS( BezierClockSettingsScreen, CoreGroup, PushButtonConfirm, _.VMT, 
                 _.VMT, _.VMT, _.VMT, _.VMT, "BezierClock::SettingsScreen" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( BezierClockSettingsScreen )

/* Initializer for the class 'BezierClock::DatePicker' */
void BezierClockDatePicker__Init( BezierClockDatePicker _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesPickerControl__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockDatePicker );

  /* ... then construct all embedded objects */
  CoreSlideTouchHandler__Init( &_this->TouchHandlerYear, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerMonth, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->TouchHandlerDay, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListYear, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListMonth, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->ListDay, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line1, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line2, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line3, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line4, &_this->_.XObject, 0 );
  ViewsLine__Init( &_this->Line5, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockDatePicker );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const003F );
  CoreRectView__OnSetBounds( &_this->TouchHandlerYear, _Const0040 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerYear, _Const0002 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerYear, 0.2f );
  CoreRectView__OnSetBounds( &_this->TouchHandlerMonth, _Const0041 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerMonth, _Const0002 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerMonth, 0.2f );
  CoreRectView__OnSetBounds( &_this->TouchHandlerDay, _Const0042 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerDay, _Const0002 );
  CoreSlideTouchHandler_OnSetFriction( &_this->TouchHandlerDay, 0.2f );
  CoreRectView__OnSetBounds( &_this->ListYear, _Const0040 );
  CoreVerticalList_OnSetEndless( &_this->ListYear, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListYear, 80 );
  CoreVerticalList_OnSetItemHeight( &_this->ListYear, 80 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListYear, 37 );
  CoreRectView__OnSetBounds( &_this->ListMonth, _Const0041 );
  CoreVerticalList_OnSetEndless( &_this->ListMonth, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListMonth, 80 );
  CoreVerticalList_OnSetItemHeight( &_this->ListMonth, 80 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListMonth, 12 );
  CoreRectView__OnSetBounds( &_this->ListDay, _Const0042 );
  CoreVerticalList_OnSetEndless( &_this->ListDay, 1 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListDay, 80 );
  CoreVerticalList_OnSetItemHeight( &_this->ListDay, 80 );
  CoreVerticalList_OnSetNoOfItems( &_this->ListDay, 31 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const0043 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const0044 );
  ViewsLine_OnSetWidth( &_this->Line, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line1, _Const0045 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line1, _Const0046 );
  ViewsLine_OnSetWidth( &_this->Line1, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line2, _Const0047 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line2, _Const0048 );
  ViewsLine_OnSetWidth( &_this->Line2, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line3, _Const0049 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line3, _Const004A );
  ViewsLine_OnSetWidth( &_this->Line3, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line4, _Const004B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line4, _Const004C );
  ViewsLine_OnSetWidth( &_this->Line4, 3 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line5, _Const004D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line5, _Const004E );
  ViewsLine_OnSetWidth( &_this->Line5, 3 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerYear ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerMonth ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerDay ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListYear ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListMonth ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ListDay ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line5 ), 0 );
  _this->TouchHandlerYear.OnSlide = EwNewSlot( _this, BezierClockDatePicker_onSlideYear );
  _this->TouchHandlerYear.OnEnd = EwNewSlot( _this, BezierClockDatePicker_onEndSlide );
  _this->TouchHandlerYear.OnStart = EwNewSlot( _this, BezierClockDatePicker_onStartSlide );
  _this->TouchHandlerMonth.OnSlide = EwNewSlot( _this, BezierClockDatePicker_onSlideMonth );
  _this->TouchHandlerMonth.OnEnd = EwNewSlot( _this, BezierClockDatePicker_onEndSlide );
  _this->TouchHandlerMonth.OnStart = EwNewSlot( _this, BezierClockDatePicker_onStartSlide );
  _this->TouchHandlerDay.OnSlide = EwNewSlot( _this, BezierClockDatePicker_onSlideDay );
  _this->TouchHandlerDay.OnEnd = EwNewSlot( _this, BezierClockDatePicker_onEndSlide );
  _this->TouchHandlerDay.OnStart = EwNewSlot( _this, BezierClockDatePicker_onStartSlide );
  _this->ListYear.OnLoadItem = EwNewSlot( _this, BezierClockDatePicker_OnLoadYearItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListYear, &_this->TouchHandlerYear );
  _this->ListMonth.OnLoadItem = EwNewSlot( _this, BezierClockDatePicker_OnLoadMonthItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListMonth, &_this->TouchHandlerMonth );
  _this->ListDay.OnLoadItem = EwNewSlot( _this, BezierClockDatePicker_OnLoadDayItem );
  CoreVerticalList_OnSetSlideHandler( &_this->ListDay, &_this->TouchHandlerDay );
}

/* Re-Initializer for the class 'BezierClock::DatePicker' */
void BezierClockDatePicker__ReInit( BezierClockDatePicker _this )
{
  /* At first re-initialize the super class ... */
  TemplatesPickerControl__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerYear );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerMonth );
  CoreSlideTouchHandler__ReInit( &_this->TouchHandlerDay );
  CoreVerticalList__ReInit( &_this->ListYear );
  CoreVerticalList__ReInit( &_this->ListMonth );
  CoreVerticalList__ReInit( &_this->ListDay );
  ViewsLine__ReInit( &_this->Line );
  ViewsLine__ReInit( &_this->Line1 );
  ViewsLine__ReInit( &_this->Line2 );
  ViewsLine__ReInit( &_this->Line3 );
  ViewsLine__ReInit( &_this->Line4 );
  ViewsLine__ReInit( &_this->Line5 );
}

/* Finalizer method for the class 'BezierClock::DatePicker' */
void BezierClockDatePicker__Done( BezierClockDatePicker _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesPickerControl );

  /* Finalize all embedded objects */
  CoreSlideTouchHandler__Done( &_this->TouchHandlerYear );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerMonth );
  CoreSlideTouchHandler__Done( &_this->TouchHandlerDay );
  CoreVerticalList__Done( &_this->ListYear );
  CoreVerticalList__Done( &_this->ListMonth );
  CoreVerticalList__Done( &_this->ListDay );
  ViewsLine__Done( &_this->Line );
  ViewsLine__Done( &_this->Line1 );
  ViewsLine__Done( &_this->Line2 );
  ViewsLine__Done( &_this->Line3 );
  ViewsLine__Done( &_this->Line4 );
  ViewsLine__Done( &_this->Line5 );

  /* Don't forget to deinitialize the super class ... */
  TemplatesPickerControl__Done( &_this->_.Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void BezierClockDatePicker_UpdateLayout( BezierClockDatePicker _this, XPoint aSize )
{
  CoreVerticalList_OnSetItemHeight( &_this->ListDay, aSize.Y / 3 );
  CoreVerticalList_OnSetItemHeight( &_this->ListMonth, aSize.Y / 3 );
  CoreVerticalList_OnSetItemHeight( &_this->ListYear, aSize.Y / 3 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListDay, aSize.Y / 3 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListMonth, aSize.Y / 3 );
  CoreVerticalList_OnSetScrollOffset( &_this->ListYear, aSize.Y / 3 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerDay, EwNewPoint( 0, aSize.Y 
  / 3 ));
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerMonth, EwNewPoint( 0, 
  aSize.Y / 3 ));
  CoreSlideTouchHandler_OnSetSnapNext( &_this->TouchHandlerYear, EwNewPoint( 0, 
  aSize.Y / 3 ));
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void BezierClockDatePicker_UpdateViewState( BezierClockDatePicker _this, XSet aState )
{
  XBool isEnabled;
  XBool isSelected;
  XBool isSliding;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  isEnabled = (( aState & CoreViewStateEnabled ) == CoreViewStateEnabled );
  isSelected = (( aState & CoreViewStateSelected ) == CoreViewStateSelected );
  isSliding = (XBool)(( _this->TouchHandlerDay.Sliding || _this->TouchHandlerMonth.Sliding ) 
  || _this->TouchHandlerYear.Sliding );

  if ( isSliding )
  {
    ViewsLine_OnSetColor( &_this->Line, _Const0015 );
    ViewsLine_OnSetColor( &_this->Line1, _Const0015 );
    ViewsLine_OnSetColor( &_this->Line2, _Const0015 );
    ViewsLine_OnSetColor( &_this->Line3, _Const0015 );
    ViewsLine_OnSetColor( &_this->Line4, _Const0015 );
    ViewsLine_OnSetColor( &_this->Line5, _Const0015 );
  }
  else
  {
    ViewsLine_OnSetColor( &_this->Line, _Const0016 );
    ViewsLine_OnSetColor( &_this->Line1, _Const0016 );
    ViewsLine_OnSetColor( &_this->Line2, _Const0016 );
    ViewsLine_OnSetColor( &_this->Line3, _Const0016 );
    ViewsLine_OnSetColor( &_this->Line4, _Const0016 );
    ViewsLine_OnSetColor( &_this->Line5, _Const0016 );
  }

  _this->enabled = isEnabled;
  _this->selected = isSelected;
  _this->sliding = isSliding;
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerDay, TouchHandlerMonth 
   or TouchHandlerYear) has finished the slide animation. Thereupon the owner of 
   the date picker is notified, that the date has been changed. */
void BezierClockDatePicker_onSlideYear( BezierClockDatePicker _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->ListYear, 0, _this->ListYear.NoOfItems );
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerDay, TouchHandlerMonth 
   or TouchHandlerYear) has finished the slide animation. Thereupon the owner of 
   the date picker is notified, that the date has been changed. */
void BezierClockDatePicker_onSlideMonth( BezierClockDatePicker _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->ListMonth, 0, _this->ListMonth.NoOfItems );
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerDay, TouchHandlerMonth 
   or TouchHandlerYear) has finished the slide animation. Thereupon the owner of 
   the date picker is notified, that the date has been changed. */
void BezierClockDatePicker_onSlideDay( BezierClockDatePicker _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreVerticalList_InvalidateItems( &_this->ListDay, 0, _this->ListDay.NoOfItems );
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerDay, TouchHandlerMonth 
   or TouchHandlerYear) has finished the slide animation. Thereupon the owner of 
   the date picker is notified, that the date has been changed. */
void BezierClockDatePicker_onEndSlide( BezierClockDatePicker _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );

  if (( !_this->TouchHandlerDay.Sliding && !_this->TouchHandlerMonth.Sliding ) && 
      !_this->TouchHandlerYear.Sliding )
  {
    XInt32 daysInMonth = BezierClockDatePicker_getDaysInMonth( _this, BezierClockDatePicker_OnGetMonth( 
      _this ), BezierClockDatePicker_OnGetYear( _this ));
    XInt32 day = BezierClockDatePicker_OnGetDay( _this );
    CoreVerticalList_OnSetNoOfItems( &_this->ListDay, daysInMonth );

    if ( day > daysInMonth )
      BezierClockDatePicker_OnSetDay( _this, daysInMonth );
    else
      BezierClockDatePicker_OnSetDay( _this, day );
  }
}

/* This method is called when one of the Slide Touch Handler (TouchHandlerDay, TouchHandlerMonth 
   or TouchHandlerYear) has begun the slide animation. */
void BezierClockDatePicker_onStartSlide( BezierClockDatePicker _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This method is called by 'ListYear' vertical list every time the list loads or 
   updates an item. */
void BezierClockDatePicker_OnLoadYearItem( BezierClockDatePicker _this, XObject 
  sender )
{
  XInt32 itemNo;
  ViewsText itemView;
  XInt32 itemCenter;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListYear.Item;
  itemView = EwCastObject( _this->ListYear.View, ViewsText );

  if ( itemView == 0 )
    return;

  itemCenter = CoreVerticalList_GetItemAtPosition( &_this->ListYear, EwGetRectCenter( 
  _this->ListYear.Super2.Bounds ));
  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo + 2000, 4, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &BezierClockFontXXL, ResourcesFont ));
  ViewsText_OnSetColor( itemView, (( itemCenter == itemNo )? _Const0007 : _Const0017 ));
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetScrollOffset( itemView, _Const0018 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  EwGetRectW( _this->ListYear.Super2.Bounds ), _this->ListYear.ItemHeight )));
}

/* This method is called by 'ListMonth' vertical list every time the list loads 
   or updates an item. */
void BezierClockDatePicker_OnLoadMonthItem( BezierClockDatePicker _this, XObject 
  sender )
{
  XInt32 itemNo;
  ViewsText itemView;
  XInt32 itemCenter;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListMonth.Item;
  itemView = EwCastObject( _this->ListMonth.View, ViewsText );

  if ( itemView == 0 )
    return;

  switch ( itemNo )
  {
    case 1 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesFebruaryAbbr ));
    break;

    case 2 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesMarchAbbr ));
    break;

    case 3 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesAprilAbbr ));
    break;

    case 4 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesMayAbbr ));
    break;

    case 5 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesJuneAbbr ));
    break;

    case 6 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesJulyAbbr ));
    break;

    case 7 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesAugustAbbr ));
    break;

    case 8 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesSeptemberAbbr ));
    break;

    case 9 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesOctoberAbbr ));
    break;

    case 10 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesNovemberAbbr ));
    break;

    case 11 :
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesDecemberAbbr ));
    break;

    default : 
      ViewsText_OnSetString( itemView, EwLoadString( &ResourcesJanuaryAbbr ));
  }

  itemCenter = CoreVerticalList_GetItemAtPosition( &_this->ListMonth, EwGetRectCenter( 
  _this->ListMonth.Super2.Bounds ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &BezierClockFontXXL, ResourcesFont ));
  ViewsText_OnSetColor( itemView, (( itemCenter == itemNo )? _Const0007 : _Const0017 ));
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetScrollOffset( itemView, _Const0018 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  EwGetRectW( _this->ListMonth.Super2.Bounds ), _this->ListMonth.ItemHeight )));
}

/* This method is called by 'ListDay' vertical list every time the list loads or 
   updates an item. */
void BezierClockDatePicker_OnLoadDayItem( BezierClockDatePicker _this, XObject sender )
{
  XInt32 itemNo;
  ViewsText itemView;
  XInt32 itemCenter;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->ListDay.Item;
  itemView = EwCastObject( _this->ListDay.View, ViewsText );

  if ( itemView == 0 )
    return;

  itemCenter = CoreVerticalList_GetItemAtPosition( &_this->ListDay, EwGetRectCenter( 
  _this->ListDay.Super2.Bounds ));
  ViewsText_OnSetString( itemView, EwNewStringInt( itemNo + 1, 2, 10 ));
  ViewsText_OnSetFont( itemView, EwLoadResource( &BezierClockFontXXL, ResourcesFont ));
  ViewsText_OnSetColor( itemView, (( itemCenter == itemNo )? _Const0007 : _Const0017 ));
  ViewsText_OnSetAlignment( itemView, ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetScrollOffset( itemView, _Const0018 );
  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super1.Bounds, EwNewPoint( 
  EwGetRectW( _this->ListDay.Super2.Bounds ), _this->ListDay.ItemHeight )));
}

/* 'C' function for method : 'BezierClock::DatePicker.OnGetYear()' */
XInt32 BezierClockDatePicker_OnGetYear( BezierClockDatePicker _this )
{
  return 2000 + ((( -_this->ListYear.ScrollOffset / _this->ListYear.ItemHeight ) 
    + 1 ) % _this->ListYear.NoOfItems );
}

/* 'C' function for method : 'BezierClock::DatePicker.OnGetMonth()' */
XInt32 BezierClockDatePicker_OnGetMonth( BezierClockDatePicker _this )
{
  return 1 + ((( -_this->ListMonth.ScrollOffset / _this->ListMonth.ItemHeight ) 
    + 1 ) % 12 );
}

/* 'C' function for method : 'BezierClock::DatePicker.OnGetDay()' */
XInt32 BezierClockDatePicker_OnGetDay( BezierClockDatePicker _this )
{
  return 1 + ((( -_this->ListDay.ScrollOffset / _this->ListDay.ItemHeight ) + 1 ) 
    % _this->ListDay.NoOfItems );
}

/* 'C' function for method : 'BezierClock::DatePicker.OnSetDay()' */
void BezierClockDatePicker_OnSetDay( BezierClockDatePicker _this, XInt32 value )
{
  XInt32 daysInMonth = BezierClockDatePicker_getDaysInMonth( _this, BezierClockDatePicker_OnGetMonth( 
    _this ), BezierClockDatePicker_OnGetYear( _this ));

  if ( value < 1 )
    value = 1;

  if ( value > daysInMonth )
    value = daysInMonth;

  CoreVerticalList_OnSetScrollOffset( &_this->ListDay, ( value - 2 ) * -_this->ListDay.ItemHeight );
}

/* This function returns the number of days in the month and year specified in the 
   method parameters aMonth and aYear. The function takes care of the February and 
   its dependency of the leap year. */
XInt32 BezierClockDatePicker_getDaysInMonth( BezierClockDatePicker _this, XInt32 
  aMonth, XInt32 aYear )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  if ( aMonth == 2 )
  {
    if ((( aYear % 4 ) == 0 ) && ((( aYear % 100 ) != 0 ) || (( aYear % 400 ) == 
        0 )))
      return 29;
    else
      return 28;
  }
  else
    if (((( aMonth == 4 ) || ( aMonth == 6 )) || ( aMonth == 9 )) || ( aMonth == 
        11 ))
      return 30;
    else
      return 31;
}

/* Variants derived from the class : 'BezierClock::DatePicker' */
EW_DEFINE_CLASS_VARIANTS( BezierClockDatePicker )
EW_END_OF_CLASS_VARIANTS( BezierClockDatePicker )

/* Virtual Method Table (VMT) for the class : 'BezierClock::DatePicker' */
EW_DEFINE_CLASS( BezierClockDatePicker, TemplatesPickerControl, TouchHandlerYear, 
                 sliding, sliding, sliding, sliding, sliding, "BezierClock::DatePicker" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  BezierClockDatePicker_UpdateLayout,
  BezierClockDatePicker_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( BezierClockDatePicker )

/* Initializer for the class 'BezierClock::Digit' */
void BezierClockDigit__Init( BezierClockDigit _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockDigit );

  /* ... then construct all embedded objects */
  EffectsFloatEffect__Init( &_this->FloatEffect, &_this->_.XObject, 0 );
  GraphicsPath__Init( &_this->Path, &_this->_.XObject, 0 );
  ViewsStrokePath__Init( &_this->StrokePath, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockDigit );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const004F );
  _this->Edges = 100;
  _this->Color = _Const0007;
  _this->StrokeWidth = 14.0f;
  _this->AnimationDuration = 700;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->FloatEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FloatEffect, 700 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->FloatEffect, 1 );
  ViewsStrokePath_OnSetWidth( &_this->StrokePath, 14.0f );
  CoreGroup__Add( _this, ((CoreView)&_this->StrokePath ), 0 );
  _this->FloatEffect.Super1.OnAnimate = EwNewSlot( _this, BezierClockDigit_updatePath );
  ViewsStrokePath_OnSetPath( &_this->StrokePath, &_this->Path );

  /* Call the user defined constructor */
  BezierClockDigit_Init( _this, aArg );
}

/* Re-Initializer for the class 'BezierClock::Digit' */
void BezierClockDigit__ReInit( BezierClockDigit _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsFloatEffect__ReInit( &_this->FloatEffect );
  GraphicsPath__ReInit( &_this->Path );
  ViewsStrokePath__ReInit( &_this->StrokePath );
}

/* Finalizer method for the class 'BezierClock::Digit' */
void BezierClockDigit__Done( BezierClockDigit _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  EffectsFloatEffect__Done( &_this->FloatEffect );
  GraphicsPath__Done( &_this->Path );
  ViewsStrokePath__Done( &_this->StrokePath );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void BezierClockDigit_Init( BezierClockDigit _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwPostSignal( EwNewSlot( _this, BezierClockDigit_updatePath ), ((XObject)_this ));
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void BezierClockDigit_UpdateLayout( BezierClockDigit _this, XPoint aSize )
{
  CoreRectView__OnSetBounds( &_this->StrokePath, EwSetRectSize( _this->StrokePath.Super1.Bounds, 
  aSize ));
  EwPostSignal( EwNewSlot( _this, BezierClockDigit_updatePoints ), ((XObject)_this ));
  EwPostSignal( EwNewSlot( _this, BezierClockDigit_updatePath ), ((XObject)_this ));
}

/* 'C' function for method : 'BezierClock::Digit.OnSetValue()' */
void BezierClockDigit_OnSetValue( BezierClockDigit _this, XInt32 value )
{
  if ( _this->Value == value )
    return;

  _this->oldDigit = _this->Value % 10;
  _this->Value = value;
  EwSignal( EwNewSlot( &_this->FloatEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
}

/* 'C' function for method : 'BezierClock::Digit.OnSetEdges()' */
void BezierClockDigit_OnSetEdges( BezierClockDigit _this, XInt32 value )
{
  if ( _this->Edges == value )
    return;

  _this->Edges = value;
}

/* 'C' function for method : 'BezierClock::Digit.OnSetColor()' */
void BezierClockDigit_OnSetColor( BezierClockDigit _this, XColor value )
{
  if ( !EwCompColor( _this->Color, value ))
    return;

  _this->Color = value;
  ViewsStrokePath_OnSetColor( &_this->StrokePath, value );
}

/* 'C' function for method : 'BezierClock::Digit.OnSetStrokeWidth()' */
void BezierClockDigit_OnSetStrokeWidth( BezierClockDigit _this, XFloat value )
{
  if ( _this->StrokeWidth == value )
    return;

  _this->StrokeWidth = value;
  ViewsStrokePath_OnSetWidth( &_this->StrokePath, value );
}

/* 'C' function for method : 'BezierClock::Digit.updatePoints()' */
void BezierClockDigit_updatePoints( BezierClockDigit _this, XObject sender )
{
  XPoint size;
  XInt32 hx;
  XInt32 hy;
  XInt32 bx;
  XInt32 by;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  size = EwGetRectSize( _this->Super2.Bounds );
  hx = size.X / 2;
  hy = size.Y / 2;
  bx = size.X / 10;
  by = size.Y / 12;
  _this->Points0[ 0 ] = EwNewPoint( bx, hy );
  _this->Points0[ 1 ] = EwNewPoint( bx, size.Y / 4 );
  _this->Points0[ 2 ] = EwNewPoint( size.X / 4, by );
  _this->Points0[ 3 ] = EwNewPoint( hx, by );
  _this->Points0[ 4 ] = EwNewPoint( size.X - ( size.X / 4 ), by );
  _this->Points0[ 5 ] = EwNewPoint( size.X - bx, size.Y / 4 );
  _this->Points0[ 6 ] = EwNewPoint( size.X - bx, hy );
  _this->Points0[ 7 ] = EwNewPoint( size.X - bx, size.Y - ( size.Y / 4 ));
  _this->Points0[ 8 ] = EwNewPoint( size.X - ( size.X / 4 ), size.Y - by );
  _this->Points0[ 9 ] = EwNewPoint( hx, size.Y - by );
  _this->Points0[ 10 ] = EwNewPoint( size.X / 4, size.Y - by );
  _this->Points0[ 11 ] = EwNewPoint( bx, size.Y - ( size.Y / 4 ));
  _this->Points0[ 12 ] = EwNewPoint( bx, hy - 1 );
  _this->Points1[ 0 ] = EwNewPoint( size.X / 6, ( size.Y * 3 ) / 10 );
  _this->Points1[ 1 ] = EwNewPoint(( size.X * 16 ) / 60, ( size.Y * 14 ) / 60 );
  _this->Points1[ 2 ] = EwNewPoint(( size.X * 22 ) / 60, ( size.Y * 10 ) / 60 );
  _this->Points1[ 3 ] = EwNewPoint( hx, by );
  _this->Points1[ 4 ] = EwNewPoint( hx, ( size.Y * 4 ) / 12 );
  _this->Points1[ 5 ] = EwNewPoint( hx, ( size.Y * 8 ) / 12 );
  _this->Points1[ 6 ] = EwNewPoint( hx, ( size.Y * 11 ) / 12 );
  _this->Points1[ 7 ] = EwNewPoint( hx, ( size.Y * 11 ) / 12 );
  _this->Points1[ 8 ] = EwNewPoint(( size.X * 4 ) / 6, ( size.Y * 11 ) / 12 );
  _this->Points1[ 9 ] = EwNewPoint(( size.X * 5 ) / 6, ( size.Y * 11 ) / 12 );
  _this->Points1[ 10 ] = EwNewPoint(( size.X * 4 ) / 6, ( size.Y * 11 ) / 12 );
  _this->Points1[ 11 ] = EwNewPoint(( size.X * 2 ) / 6, ( size.Y * 11 ) / 12 );
  _this->Points1[ 12 ] = EwNewPoint( size.X / 6, ( size.Y * 11 ) / 12 );
  _this->Points2[ 0 ] = EwNewPoint( size.X / 6, ( size.Y * 3 ) / 10 );
  _this->Points2[ 1 ] = EwNewPoint( size.X / 6, 0 );
  _this->Points2[ 2 ] = EwNewPoint(( size.X * 5 ) / 6, 0 );
  _this->Points2[ 3 ] = EwNewPoint(( size.X * 5 ) / 6, ( size.Y * 3 ) / 10 );
  _this->Points2[ 4 ] = EwNewPoint(( size.X * 5 ) / 6, ( size.Y * 7 ) / 16 );
  _this->Points2[ 5 ] = EwNewPoint(( size.X * 39 ) / 60, ( size.Y * 5 ) / 9 );
  _this->Points2[ 6 ] = EwNewPoint(( size.X * 33 ) / 60, ( size.Y * 5 ) / 8 );
  _this->Points2[ 7 ] = EwNewPoint(( size.X * 22 ) / 60, ( size.Y * 45 ) / 60 );
  _this->Points2[ 8 ] = EwNewPoint(( size.X * 19 ) / 60, ( size.Y * 47 ) / 60 );
  _this->Points2[ 9 ] = EwNewPoint( size.X / 8, ( size.Y * 11 ) / 12 );
  _this->Points2[ 10 ] = EwNewPoint(( size.X * 3 ) / 8, ( size.Y * 11 ) / 12 );
  _this->Points2[ 11 ] = EwNewPoint(( size.X * 5 ) / 8, ( size.Y * 11 ) / 12 );
  _this->Points2[ 12 ] = EwNewPoint(( size.X * 7 ) / 8, ( size.Y * 11 ) / 12 );
  _this->Points3[ 0 ] = EwNewPoint( size.X / 6, ( size.Y * 3 ) / 10 );
  _this->Points3[ 1 ] = EwNewPoint( size.X / 5, 0 );
  _this->Points3[ 2 ] = EwNewPoint( size.X - ( size.X / 7 ), 0 );
  _this->Points3[ 3 ] = EwNewPoint( size.X - ( size.X / 6 ), ( size.Y * 3 ) / 10 );
  _this->Points3[ 4 ] = EwNewPoint( size.X - ( size.X / 5 ), ( size.Y * 3 ) / 7 );
  _this->Points3[ 5 ] = EwNewPoint(( size.X * 4 ) / 6, hy );
  _this->Points3[ 6 ] = EwNewPoint(( size.X * 9 ) / 20, hy );
  _this->Points3[ 7 ] = EwNewPoint(( size.X * 7 ) / 10, hy );
  _this->Points3[ 8 ] = EwNewPoint( size.X - (( size.X * 4 ) / 30 ), size.Y - (( 
  size.Y * 3 ) / 7 ));
  _this->Points3[ 9 ] = EwNewPoint( size.X - (( size.X * 3 ) / 20 ), size.Y - (( 
  size.Y * 3 ) / 10 ));
  _this->Points3[ 10 ] = EwNewPoint( size.X - (( size.X * 3 ) / 20 ), size.Y );
  _this->Points3[ 11 ] = EwNewPoint( size.X / 6, size.Y );
  _this->Points3[ 12 ] = EwNewPoint(( size.X * 3 ) / 20, size.Y - (( size.Y * 3 ) 
  / 10 ));
  _this->Points4[ 0 ] = EwNewPoint(( size.X * 4 ) / 6, ( size.Y * 19 ) / 20 );
  _this->Points4[ 1 ] = EwNewPoint(( size.X * 4 ) / 6, ( size.Y * 17 ) / 20 );
  _this->Points4[ 2 ] = EwNewPoint(( size.X * 4 ) / 6, ( size.Y * 16 ) / 20 );
  _this->Points4[ 3 ] = EwNewPoint(( size.X * 4 ) / 6, ( size.Y * 10 ) / 20 );
  _this->Points4[ 4 ] = EwNewPoint(( size.X * 4 ) / 6, ( size.Y * 7 ) / 20 );
  _this->Points4[ 5 ] = EwNewPoint(( size.X * 4 ) / 6, size.Y / 20 );
  _this->Points4[ 6 ] = EwNewPoint(( size.X * 4 ) / 6, size.Y / 20 );
  _this->Points4[ 7 ] = EwNewPoint(( size.X * 23 ) / 60, ( size.Y * 20 ) / 60 );
  _this->Points4[ 8 ] = EwNewPoint(( size.X * 13 ) / 60, ( size.Y * 30 ) / 60 );
  _this->Points4[ 9 ] = EwNewPoint( size.X / 16, ( size.Y * 6 ) / 9 );
  _this->Points4[ 10 ] = EwNewPoint(( size.X * 2 ) / 6, ( size.Y * 6 ) / 9 );
  _this->Points4[ 11 ] = EwNewPoint(( size.X * 4 ) / 6, ( size.Y * 6 ) / 9 );
  _this->Points4[ 12 ] = EwNewPoint(( size.X * 15 ) / 16, ( size.Y * 6 ) / 9 );
  _this->Points5[ 0 ] = EwNewPoint(( size.X * 3 ) / 20, ( size.Y * 13 ) / 15 );
  _this->Points5[ 1 ] = EwNewPoint(( size.X * 5 ) / 10, ( size.Y * 59 ) / 60 );
  _this->Points5[ 2 ] = EwNewPoint(( size.X * 5 ) / 6, ( size.Y * 14 ) / 16 );
  _this->Points5[ 3 ] = EwNewPoint(( size.X * 51 ) / 60, ( size.Y * 10 ) / 15 );
  _this->Points5[ 4 ] = EwNewPoint(( size.X * 17 ) / 20, ( size.Y * 14 ) / 30 );
  _this->Points5[ 5 ] = EwNewPoint(( size.X * 6 ) / 10, ( size.Y * 6 ) / 16 );
  _this->Points5[ 6 ] = EwNewPoint(( size.X * 3 ) / 13, ( size.Y * 7 ) / 16 );
  _this->Points5[ 7 ] = EwNewPoint(( size.X * 15 ) / 60, ( size.Y * 5 ) / 16 );
  _this->Points5[ 8 ] = EwNewPoint(( size.X * 16 ) / 60, ( size.Y * 7 ) / 30 );
  _this->Points5[ 9 ] = EwNewPoint(( size.X * 3 ) / 10, size.Y / 12 );
  _this->Points5[ 10 ] = EwNewPoint(( size.X * 5 ) / 10, size.Y / 12 );
  _this->Points5[ 11 ] = EwNewPoint(( size.X * 7 ) / 10, size.Y / 12 );
  _this->Points5[ 12 ] = EwNewPoint(( size.X * 5 ) / 6, size.Y / 12 );
  _this->Points6[ 0 ] = EwNewPoint(( size.X * 10 ) / 60, ( size.Y * 18 ) / 30 );
  _this->Points6[ 1 ] = EwNewPoint(( size.X * 5 ) / 60, ( size.Y * 24 ) / 30 );
  _this->Points6[ 2 ] = EwNewPoint(( size.X * 9 ) / 30, ( size.Y * 29 ) / 30 );
  _this->Points6[ 3 ] = EwNewPoint(( size.X * 18 ) / 30, ( size.Y * 55 ) / 60 );
  _this->Points6[ 4 ] = EwNewPoint(( size.X * 54 ) / 60, ( size.Y * 51 ) / 60 );
  _this->Points6[ 5 ] = EwNewPoint(( size.X * 55 ) / 60, ( size.Y * 35 ) / 60 );
  _this->Points6[ 6 ] = EwNewPoint(( size.X * 43 ) / 60, ( size.Y * 29 ) / 60 );
  _this->Points6[ 7 ] = EwNewPoint(( size.X * 6 ) / 11, ( size.Y * 8 ) / 20 );
  _this->Points6[ 8 ] = EwNewPoint(( size.X * 3 ) / 11, ( size.Y * 9 ) / 20 );
  _this->Points6[ 9 ] = EwNewPoint(( size.X * 5 ) / 30, ( size.Y * 12 ) / 20 );
  _this->Points6[ 10 ] = EwNewPoint(( size.X * 5 ) / 30, ( size.Y * 10 ) / 20 );
  _this->Points6[ 11 ] = EwNewPoint(( size.X * 26 ) / 60, ( size.Y * 16 ) / 60 );
  _this->Points6[ 12 ] = EwNewPoint(( size.X * 20 ) / 30, size.Y / 15 );
  _this->Points7[ 0 ] = EwNewPoint(( size.X * 17 ) / 60, ( size.Y * 28 ) / 30 );
  _this->Points7[ 1 ] = EwNewPoint(( size.X * 23 ) / 60, ( size.Y * 24 ) / 30 );
  _this->Points7[ 2 ] = EwNewPoint(( size.X * 29 ) / 60, ( size.Y * 20 ) / 30 );
  _this->Points7[ 3 ] = EwNewPoint(( size.X * 18 ) / 30, size.Y / 2 );
  _this->Points7[ 4 ] = EwNewPoint(( size.X * 40 ) / 60, ( size.Y * 12 ) / 30 );
  _this->Points7[ 5 ] = EwNewPoint(( size.X * 47 ) / 60, ( size.Y * 7 ) / 30 );
  _this->Points7[ 6 ] = EwNewPoint(( size.X * 53 ) / 60, size.Y / 12 );
  _this->Points7[ 7 ] = EwNewPoint(( size.X * 14 ) / 20, size.Y / 12 );
  _this->Points7[ 8 ] = EwNewPoint(( size.X * 13 ) / 20, size.Y / 12 );
  _this->Points7[ 9 ] = EwNewPoint(( size.X * 6 ) / 20, size.Y / 12 );
  _this->Points7[ 10 ] = EwNewPoint(( size.X * 5 ) / 20, size.Y / 12 );
  _this->Points7[ 11 ] = EwNewPoint(( size.X * 5 ) / 20, size.Y / 12 );
  _this->Points7[ 12 ] = EwNewPoint(( size.X * 2 ) / 20, size.Y / 12 );
  _this->Points8[ 0 ] = EwNewPoint(( size.X * 59 ) / 120, ( size.Y * 55 ) / 60 );
  _this->Points8[ 1 ] = EwNewPoint(( size.X * 19 ) / 20, ( size.Y * 55 ) / 60 );
  _this->Points8[ 2 ] = EwNewPoint(( size.X * 19 ) / 20, size.Y / 2 );
  _this->Points8[ 3 ] = EwNewPoint(( size.X * 59 ) / 120, size.Y / 2 );
  _this->Points8[ 4 ] = EwNewPoint(( size.X * 28 ) / 30, size.Y / 2 );
  _this->Points8[ 5 ] = EwNewPoint(( size.X * 28 ) / 30, ( size.Y * 5 ) / 60 );
  _this->Points8[ 6 ] = EwNewPoint(( size.X * 4 ) / 8, ( size.Y * 5 ) / 60 );
  _this->Points8[ 7 ] = EwNewPoint(( size.X * 2 ) / 30, ( size.Y * 5 ) / 60 );
  _this->Points8[ 8 ] = EwNewPoint(( size.X * 2 ) / 30, size.Y / 2 );
  _this->Points8[ 9 ] = EwNewPoint(( size.X * 61 ) / 120, size.Y / 2 );
  _this->Points8[ 10 ] = EwNewPoint( size.X / 20, ( size.Y * 30 ) / 60 );
  _this->Points8[ 11 ] = EwNewPoint( size.X / 20, ( size.Y * 55 ) / 60 );
  _this->Points8[ 12 ] = EwNewPoint(( size.X * 61 ) / 120, ( size.Y * 55 ) / 60 );
  _this->Points9[ 0 ] = EwNewPoint(( size.X * 22 ) / 60, ( size.Y * 56 ) / 60 );
  _this->Points9[ 1 ] = EwNewPoint(( size.X * 38 ) / 60, ( size.Y * 40 ) / 60 );
  _this->Points9[ 2 ] = EwNewPoint(( size.X * 48 ) / 60, ( size.Y * 30 ) / 60 );
  _this->Points9[ 3 ] = EwNewPoint(( size.X * 49 ) / 60, ( size.Y * 25 ) / 60 );
  _this->Points9[ 4 ] = EwNewPoint(( size.X * 55 ) / 60, ( size.Y * 15 ) / 60 );
  _this->Points9[ 5 ] = EwNewPoint(( size.X * 45 ) / 60, ( size.Y * 5 ) / 60 );
  _this->Points9[ 6 ] = EwNewPoint(( size.X * 30 ) / 60, ( size.Y * 5 ) / 60 );
  _this->Points9[ 7 ] = EwNewPoint(( size.X * 18 ) / 60, ( size.Y * 5 ) / 60 );
  _this->Points9[ 8 ] = EwNewPoint(( size.X * 11 ) / 60, ( size.Y * 12 ) / 60 );
  _this->Points9[ 9 ] = EwNewPoint(( size.X * 10 ) / 60, ( size.Y * 18 ) / 60 );
  _this->Points9[ 10 ] = EwNewPoint(( size.X * 7 ) / 60, ( size.Y * 36 ) / 60 );
  _this->Points9[ 11 ] = EwNewPoint(( size.X * 42 ) / 60, ( size.Y * 38 ) / 60 );
  _this->Points9[ 12 ] = EwNewPoint(( size.X * 49 ) / 60, ( size.Y * 25 ) / 60 );
}

/* 'C' function for method : 'BezierClock::Digit.OnSetAnimationDuration()' */
void BezierClockDigit_OnSetAnimationDuration( BezierClockDigit _this, XInt32 value )
{
  if ( _this->AnimationDuration == value )
    return;

  _this->AnimationDuration = value;
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->FloatEffect, value );
}

/* 'C' function for method : 'BezierClock::Digit.updatePath()' */
void BezierClockDigit_updatePath( BezierClockDigit _this, XObject sender )
{
  XInt32 digit;
  XFloat f;
  XFloat fn;
  XFloat x1;
  XFloat x2;
  XFloat y1;
  XFloat y2;
  XInt32 i;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  digit = _this->Value % 10;
  f = _this->FloatEffect.Value;
  fn = 1.0f - _this->FloatEffect.Value;
  x1 = 0.0f;
  x2 = 0.0f;
  y1 = 0.0f;
  y2 = 0.0f;
  i = 0;

  while ( i < 13 )
  {
    switch ( _this->oldDigit )
    {
      case 0 :
      {
        x1 = (XFloat)_this->Points0[ EwCheckIndex( i, 13 )].X * fn;
        y1 = (XFloat)_this->Points0[ EwCheckIndex( i, 13 )].Y * fn;
      }
      break;

      case 1 :
      {
        x1 = (XFloat)_this->Points1[ EwCheckIndex( i, 13 )].X * fn;
        y1 = (XFloat)_this->Points1[ EwCheckIndex( i, 13 )].Y * fn;
      }
      break;

      case 2 :
      {
        x1 = (XFloat)_this->Points2[ EwCheckIndex( i, 13 )].X * fn;
        y1 = (XFloat)_this->Points2[ EwCheckIndex( i, 13 )].Y * fn;
      }
      break;

      case 3 :
      {
        x1 = (XFloat)_this->Points3[ EwCheckIndex( i, 13 )].X * fn;
        y1 = (XFloat)_this->Points3[ EwCheckIndex( i, 13 )].Y * fn;
      }
      break;

      case 4 :
      {
        x1 = (XFloat)_this->Points4[ EwCheckIndex( i, 13 )].X * fn;
        y1 = (XFloat)_this->Points4[ EwCheckIndex( i, 13 )].Y * fn;
      }
      break;

      case 5 :
      {
        x1 = (XFloat)_this->Points5[ EwCheckIndex( i, 13 )].X * fn;
        y1 = (XFloat)_this->Points5[ EwCheckIndex( i, 13 )].Y * fn;
      }
      break;

      case 6 :
      {
        x1 = (XFloat)_this->Points6[ EwCheckIndex( i, 13 )].X * fn;
        y1 = (XFloat)_this->Points6[ EwCheckIndex( i, 13 )].Y * fn;
      }
      break;

      case 7 :
      {
        x1 = (XFloat)_this->Points7[ EwCheckIndex( i, 13 )].X * fn;
        y1 = (XFloat)_this->Points7[ EwCheckIndex( i, 13 )].Y * fn;
      }
      break;

      case 8 :
      {
        x1 = (XFloat)_this->Points8[ EwCheckIndex( i, 13 )].X * fn;
        y1 = (XFloat)_this->Points8[ EwCheckIndex( i, 13 )].Y * fn;
      }
      break;

      case 9 :
      {
        x1 = (XFloat)_this->Points9[ EwCheckIndex( i, 13 )].X * fn;
        y1 = (XFloat)_this->Points9[ EwCheckIndex( i, 13 )].Y * fn;
      }
      break;

      default : 
      {
        x1 = (XFloat)( EwGetRectW( _this->Super2.Bounds ) / 2 ) * fn;
        y1 = (XFloat)( EwGetRectH( _this->Super2.Bounds ) / 2 ) * fn;
      }
    }

    switch ( digit )
    {
      case 0 :
      {
        x2 = (XFloat)_this->Points0[ EwCheckIndex( i, 13 )].X * f;
        y2 = (XFloat)_this->Points0[ EwCheckIndex( i, 13 )].Y * f;
      }
      break;

      case 1 :
      {
        x2 = (XFloat)_this->Points1[ EwCheckIndex( i, 13 )].X * f;
        y2 = (XFloat)_this->Points1[ EwCheckIndex( i, 13 )].Y * f;
      }
      break;

      case 2 :
      {
        x2 = (XFloat)_this->Points2[ EwCheckIndex( i, 13 )].X * f;
        y2 = (XFloat)_this->Points2[ EwCheckIndex( i, 13 )].Y * f;
      }
      break;

      case 3 :
      {
        x2 = (XFloat)_this->Points3[ EwCheckIndex( i, 13 )].X * f;
        y2 = (XFloat)_this->Points3[ EwCheckIndex( i, 13 )].Y * f;
      }
      break;

      case 4 :
      {
        x2 = (XFloat)_this->Points4[ EwCheckIndex( i, 13 )].X * f;
        y2 = (XFloat)_this->Points4[ EwCheckIndex( i, 13 )].Y * f;
      }
      break;

      case 5 :
      {
        x2 = (XFloat)_this->Points5[ EwCheckIndex( i, 13 )].X * f;
        y2 = (XFloat)_this->Points5[ EwCheckIndex( i, 13 )].Y * f;
      }
      break;

      case 6 :
      {
        x2 = (XFloat)_this->Points6[ EwCheckIndex( i, 13 )].X * f;
        y2 = (XFloat)_this->Points6[ EwCheckIndex( i, 13 )].Y * f;
      }
      break;

      case 7 :
      {
        x2 = (XFloat)_this->Points7[ EwCheckIndex( i, 13 )].X * f;
        y2 = (XFloat)_this->Points7[ EwCheckIndex( i, 13 )].Y * f;
      }
      break;

      case 8 :
      {
        x2 = (XFloat)_this->Points8[ EwCheckIndex( i, 13 )].X * f;
        y2 = (XFloat)_this->Points8[ EwCheckIndex( i, 13 )].Y * f;
      }
      break;

      case 9 :
      {
        x2 = (XFloat)_this->Points9[ EwCheckIndex( i, 13 )].X * f;
        y2 = (XFloat)_this->Points9[ EwCheckIndex( i, 13 )].Y * f;
      }
      break;

      default :; 
    }

    _this->Points[ EwCheckIndex( i, 13 )] = EwNewPoint((XInt32)( x1 + x2 ), (XInt32)( 
    y1 + y2 ));
    i = i + 1;
  }

  GraphicsPath_InitSubPath( &_this->Path, 0, _this->Edges );
  GraphicsPath_Begin( &_this->Path, 0, (XFloat)_this->Points[ 0 ].X, (XFloat)_this->Points[ 
  0 ].Y );
  GraphicsPath_AddBezier3( &_this->Path, 0, (XFloat)_this->Points[ 1 ].X, (XFloat)_this->Points[ 
  1 ].Y, (XFloat)_this->Points[ 2 ].X, (XFloat)_this->Points[ 2 ].Y, (XFloat)_this->Points[ 
  3 ].X, (XFloat)_this->Points[ 3 ].Y, _this->Edges / 4 );
  GraphicsPath_AddBezier3( &_this->Path, 0, (XFloat)_this->Points[ 4 ].X, (XFloat)_this->Points[ 
  4 ].Y, (XFloat)_this->Points[ 5 ].X, (XFloat)_this->Points[ 5 ].Y, (XFloat)_this->Points[ 
  6 ].X, (XFloat)_this->Points[ 6 ].Y, _this->Edges / 4 );
  GraphicsPath_AddBezier3( &_this->Path, 0, (XFloat)_this->Points[ 7 ].X, (XFloat)_this->Points[ 
  7 ].Y, (XFloat)_this->Points[ 8 ].X, (XFloat)_this->Points[ 8 ].Y, (XFloat)_this->Points[ 
  9 ].X, (XFloat)_this->Points[ 9 ].Y, _this->Edges / 4 );
  GraphicsPath_AddBezier3( &_this->Path, 0, (XFloat)_this->Points[ 10 ].X, (XFloat)_this->Points[ 
  10 ].Y, (XFloat)_this->Points[ 11 ].X, (XFloat)_this->Points[ 11 ].Y, (XFloat)_this->Points[ 
  12 ].X, (XFloat)_this->Points[ 12 ].Y, _this->Edges / 4 );
}

/* Variants derived from the class : 'BezierClock::Digit' */
EW_DEFINE_CLASS_VARIANTS( BezierClockDigit )
EW_END_OF_CLASS_VARIANTS( BezierClockDigit )

/* Virtual Method Table (VMT) for the class : 'BezierClock::Digit' */
EW_DEFINE_CLASS( BezierClockDigit, CoreGroup, FloatEffect, Value, Value, Value, 
                 Value, Value, "BezierClock::Digit" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  BezierClockDigit_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( BezierClockDigit )

/* Initializer for the class 'BezierClock::Bubble' */
void BezierClockBubble__Init( BezierClockBubble _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockBubble );

  /* ... then construct all embedded objects */
  GraphicsArcPath__Init( &_this->ArcPath, &_this->_.XObject, 0 );
  ViewsFillPath__Init( &_this->FillPath, &_this->_.XObject, 0 );
  ViewsFillPath__Init( &_this->FillPath1, &_this->_.XObject, 0 );
  ViewsFillPath__Init( &_this->FillPath2, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockBubble );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0050 );
  CoreGroup__OnSetBuffered( _this, 1 );
  GraphicsArcPath_OnSetEndAngle( &_this->ArcPath, 360.0f );
  GraphicsArcPath_OnSetRadius( &_this->ArcPath, 90.0f );
  GraphicsArcPath_OnSetStyle( &_this->ArcPath, GraphicsArcStylePie );
  CoreRectView__OnSetBounds( &_this->FillPath, _Const0051 );
  ViewsFillPath_OnSetColor( &_this->FillPath, _Const0052 );
  CoreRectView__OnSetBounds( &_this->FillPath1, _Const0051 );
  ViewsFillPath_OnSetColor( &_this->FillPath1, _Const0052 );
  CoreRectView__OnSetBounds( &_this->FillPath2, _Const0051 );
  ViewsFillPath_OnSetColor( &_this->FillPath2, _Const0052 );
  CoreGroup__Add( _this, ((CoreView)&_this->FillPath ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FillPath1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FillPath2 ), 0 );
  ViewsFillPath_OnSetPath( &_this->FillPath, ((GraphicsPath)&_this->ArcPath ));
  ViewsFillPath_OnSetPath( &_this->FillPath1, ((GraphicsPath)&_this->ArcPath ));
  ViewsFillPath_OnSetPath( &_this->FillPath2, ((GraphicsPath)&_this->ArcPath ));
}

/* Re-Initializer for the class 'BezierClock::Bubble' */
void BezierClockBubble__ReInit( BezierClockBubble _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  GraphicsArcPath__ReInit( &_this->ArcPath );
  ViewsFillPath__ReInit( &_this->FillPath );
  ViewsFillPath__ReInit( &_this->FillPath1 );
  ViewsFillPath__ReInit( &_this->FillPath2 );
}

/* Finalizer method for the class 'BezierClock::Bubble' */
void BezierClockBubble__Done( BezierClockBubble _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  GraphicsArcPath__Done( &_this->ArcPath );
  ViewsFillPath__Done( &_this->FillPath );
  ViewsFillPath__Done( &_this->FillPath1 );
  ViewsFillPath__Done( &_this->FillPath2 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void BezierClockBubble_UpdateLayout( BezierClockBubble _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  GraphicsArcPath_OnSetRadiusX( &_this->ArcPath, (XFloat)(( aSize.X * 10 ) / 23 ));
  GraphicsArcPath_OnSetRadiusY( &_this->ArcPath, (XFloat)(( aSize.Y * 10 ) / 23 ));
  CoreRectView__OnSetBounds( &_this->FillPath, EwSetRectSize( _this->FillPath.Super1.Bounds, 
  aSize ));
  ViewsFillPath_OnSetOffset( &_this->FillPath, EwSetPointX( _this->FillPath.Offset, 
  aSize.X / 2 ));
  ViewsFillPath_OnSetOffset( &_this->FillPath, EwSetPointY( _this->FillPath.Offset, 
  aSize.Y / 2 ));
  CoreRectView__OnSetBounds( &_this->FillPath1, EwSetRectSize( _this->FillPath1.Super1.Bounds, 
  aSize ));
  ViewsFillPath_OnSetOffset( &_this->FillPath1, EwSetPointX( _this->FillPath1.Offset, 
  ( aSize.X * 10 ) / 19 ));
  ViewsFillPath_OnSetOffset( &_this->FillPath1, EwSetPointY( _this->FillPath1.Offset, 
  ( aSize.Y * 10 ) / 19 ));
  CoreRectView__OnSetBounds( &_this->FillPath2, EwSetRectSize( _this->FillPath2.Super1.Bounds, 
  aSize ));
  ViewsFillPath_OnSetOffset( &_this->FillPath2, EwSetPointX( _this->FillPath2.Offset, 
  ( aSize.X * 10 ) / 18 ));
  ViewsFillPath_OnSetOffset( &_this->FillPath2, EwSetPointY( _this->FillPath2.Offset, 
  ( aSize.Y * 10 ) / 21 ));
}

/* Variants derived from the class : 'BezierClock::Bubble' */
EW_DEFINE_CLASS_VARIANTS( BezierClockBubble )
EW_END_OF_CLASS_VARIANTS( BezierClockBubble )

/* Virtual Method Table (VMT) for the class : 'BezierClock::Bubble' */
EW_DEFINE_CLASS( BezierClockBubble, CoreGroup, ArcPath, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "BezierClock::Bubble" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  BezierClockBubble_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( BezierClockBubble )

/* Initializer for the class 'BezierClock::Background' */
void BezierClockBackground__Init( BezierClockBackground _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockBackground );

  /* ... then construct all embedded objects */
  EffectsFloatEffect__Init( &_this->BubbleEffect1, &_this->_.XObject, 0 );
  EffectsFloatEffect__Init( &_this->BubbleEffect2, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Background, &_this->_.XObject, 0 );
  BezierClockBubble__Init( &_this->Bubble, &_this->_.XObject, 0 );
  EffectsPointEffect__Init( &_this->ShiftEffect, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockBackground );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0019 );
  _this->BubbleEffect1.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->BubbleEffect1, EffectsTimingEaseIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->BubbleEffect1, 18000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->BubbleEffect1, 1 );
  _this->BubbleEffect2.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->BubbleEffect2, EffectsTimingEaseIn_EaseOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->BubbleEffect2, 40000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->BubbleEffect2, 1 );
  _this->BubbleEffect2.Value1 = -1.0f;
  CoreView_OnSetLayout((CoreView)&_this->Rectangle, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0019 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0053 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Background, _Const0019 );
  ViewsImage_OnSetAlignment( &_this->Background, ViewsImageAlignmentAlignHorzLeft 
  | ViewsImageAlignmentAlignVertCenter );
  CoreView_OnSetLayout((CoreView)&_this->Bubble, CoreLayoutResizeHorz | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->Bubble, _Const0054 );
  _this->CurrentBackground = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->ShiftEffect, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->ShiftEffect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->ShiftEffect, 500 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Bubble ), 0 );
  _this->BubbleEffect1.Super1.OnAnimate = EwNewSlot( _this, BezierClockBackground_onAnimate );
  _this->BubbleEffect2.Super1.OnAnimate = EwNewSlot( _this, BezierClockBackground_onAnimate );
  ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &BezierClockDark, 
  ResourcesBitmap ));
  _this->ShiftEffect.Outlet = EwNewRef( &_this->Background, ViewsImage_OnGetScrollOffset, 
  ViewsImage_OnSetScrollOffset );
}

/* Re-Initializer for the class 'BezierClock::Background' */
void BezierClockBackground__ReInit( BezierClockBackground _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsFloatEffect__ReInit( &_this->BubbleEffect1 );
  EffectsFloatEffect__ReInit( &_this->BubbleEffect2 );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsImage__ReInit( &_this->Background );
  BezierClockBubble__ReInit( &_this->Bubble );
  EffectsPointEffect__ReInit( &_this->ShiftEffect );
}

/* Finalizer method for the class 'BezierClock::Background' */
void BezierClockBackground__Done( BezierClockBackground _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  EffectsFloatEffect__Done( &_this->BubbleEffect1 );
  EffectsFloatEffect__Done( &_this->BubbleEffect2 );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsImage__Done( &_this->Background );
  BezierClockBubble__Done( &_this->Bubble );
  EffectsPointEffect__Done( &_this->ShiftEffect );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void BezierClockBackground_UpdateLayout( BezierClockBackground _this, XPoint aSize )
{
  XInt32 s;

  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  s = EwGetRectH( _this->Super2.Bounds ) / 4;
  CoreRectView__OnSetBounds( &_this->Bubble, EwSetRectSize( _this->Bubble.Super2.Bounds, 
  EwNewPoint( s, s )));
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void BezierClockBackground_UpdateViewState( BezierClockBackground _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  CoreGroup_OnSetVisible((CoreGroup)&_this->Bubble, (XBool)( _this->CurrentBackground 
  > 0 ));

  if ( _this->CurrentBackground == 1 )
    ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &BezierClockOrange, 
    ResourcesBitmap ));
  else
    if ( _this->CurrentBackground == 2 )
      ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &BezierClockBlue, 
      ResourcesBitmap ));
    else
      ViewsImage_OnSetBitmap( &_this->Background, EwLoadResource( &BezierClockDark, 
      ResourcesBitmap ));
}

/* 'C' function for method : 'BezierClock::Background.onAnimate()' */
void BezierClockBackground_onAnimate( BezierClockBackground _this, XObject sender )
{
  XFloat rangeX;
  XFloat rangeY;
  XPoint start;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  rangeX = (XFloat)EwGetRectW( _this->Bubble.Super2.Bounds );
  rangeY = (XFloat)EwGetRectH( _this->Bubble.Super2.Bounds );
  start = EwMovePointPos( EwNewPoint( EwGetRectW( _this->Super2.Bounds ) / 3, EwGetRectH( 
  _this->Super2.Bounds ) / 2 ), _this->Background.ScrollOffset );
  CoreRectView__OnSetBounds( &_this->Bubble, EwSetRectX( _this->Bubble.Super2.Bounds, 
  start.X + (XInt32)(( _this->BubbleEffect1.Value * rangeX ) + ( _this->BubbleEffect2.Value 
  * rangeX ))));
  CoreRectView__OnSetBounds( &_this->Bubble, EwSetRectY( _this->Bubble.Super2.Bounds, 
  start.Y + (XInt32)(( _this->BubbleEffect1.Value * rangeY ) - ( _this->BubbleEffect2.Value 
  * rangeY ))));
}

/* 'C' function for method : 'BezierClock::Background.OnSetCurrentBackground()' */
void BezierClockBackground_OnSetCurrentBackground( BezierClockBackground _this, 
  XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value > 2 )
    value = 2;

  if ( _this->CurrentBackground == value )
    return;

  _this->CurrentBackground = value;
  EwNotifyRefObservers( EwNewRef( _this, BezierClockBackground_OnGetCurrentBackground, 
    BezierClockBackground_OnSetCurrentBackground ), 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Method to shift the background image to the left */
void BezierClockBackground_ShiftLeft( BezierClockBackground _this )
{
  _this->ShiftEffect.Value1 = _this->Background.ScrollOffset;
  _this->ShiftEffect.Value2 = EwNewPoint( EwGetRectW( _this->Super2.Bounds ) - _this->Background.Bitmap->FrameSize.X, 
  0 );
  EwPostSignal( EwNewSlot( &_this->ShiftEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
}

/* Method to shift the background image to the right */
void BezierClockBackground_ShiftRight( BezierClockBackground _this )
{
  _this->ShiftEffect.Value1 = _this->Background.ScrollOffset;
  _this->ShiftEffect.Value2 = _Const0055;
  EwPostSignal( EwNewSlot( &_this->ShiftEffect, EffectsEffect_StartEffect ), ((XObject)_this ));
}

/* Default onget method for the property 'CurrentBackground' */
XInt32 BezierClockBackground_OnGetCurrentBackground( BezierClockBackground _this )
{
  return _this->CurrentBackground;
}

/* Variants derived from the class : 'BezierClock::Background' */
EW_DEFINE_CLASS_VARIANTS( BezierClockBackground )
EW_END_OF_CLASS_VARIANTS( BezierClockBackground )

/* Virtual Method Table (VMT) for the class : 'BezierClock::Background' */
EW_DEFINE_CLASS( BezierClockBackground, CoreGroup, BubbleEffect1, CurrentBackground, 
                 CurrentBackground, CurrentBackground, CurrentBackground, CurrentBackground, 
                 "BezierClock::Background" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  BezierClockBackground_UpdateLayout,
  BezierClockBackground_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( BezierClockBackground )

/* Initializer for the class 'BezierClock::TimerScreen' */
void BezierClockTimerScreen__Init( BezierClockTimerScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockTimerScreen );

  /* ... then construct all embedded objects */
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_.XObject, 0 );
  GraphicsArcPath__Init( &_this->DotPath, &_this->_.XObject, 0 );
  ViewsFillPath__Init( &_this->Dot1, &_this->_.XObject, 0 );
  ViewsFillPath__Init( &_this->Dot2, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit0, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit1, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit2, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit3, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit4, &_this->_.XObject, 0 );
  BezierClockDigit__Init( &_this->Digit5, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->TouchHandlerLeft, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageLeft, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->Timer, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockTimerScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0019 );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Int32Effect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 100 );
  _this->Int32Effect.Value2 = 0;
  GraphicsArcPath_OnSetNoOfEdges( &_this->DotPath, 20 );
  GraphicsArcPath_OnSetEndAngle( &_this->DotPath, 360.0f );
  GraphicsArcPath_OnSetRadius( &_this->DotPath, 9.0f );
  GraphicsArcPath_OnSetStyle( &_this->DotPath, GraphicsArcStylePie );
  CoreRectView__OnSetBounds( &_this->Dot1, _Const0056 );
  ViewsFillPath_OnSetColor( &_this->Dot1, _Const0027 );
  ViewsFillPath_OnSetOffset( &_this->Dot1, _Const0028 );
  CoreRectView__OnSetBounds( &_this->Dot2, _Const0057 );
  ViewsFillPath_OnSetColor( &_this->Dot2, _Const0027 );
  ViewsFillPath_OnSetOffset( &_this->Dot2, _Const0028 );
  CoreRectView__OnSetBounds( &_this->Digit0, _Const0058 );
  BezierClockDigit_OnSetValue( &_this->Digit0, 0 );
  BezierClockDigit_OnSetEdges( &_this->Digit0, 60 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit0, 10.1f );
  BezierClockDigit_OnSetAnimationDuration( &_this->Digit0, 700 );
  CoreRectView__OnSetBounds( &_this->Digit1, _Const0059 );
  BezierClockDigit_OnSetValue( &_this->Digit1, 0 );
  BezierClockDigit_OnSetEdges( &_this->Digit1, 60 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit1, 10.1f );
  BezierClockDigit_OnSetAnimationDuration( &_this->Digit1, 700 );
  CoreRectView__OnSetBounds( &_this->Digit2, _Const005A );
  BezierClockDigit_OnSetValue( &_this->Digit2, 0 );
  BezierClockDigit_OnSetEdges( &_this->Digit2, 60 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit2, 10.1f );
  BezierClockDigit_OnSetAnimationDuration( &_this->Digit2, 700 );
  CoreRectView__OnSetBounds( &_this->Digit3, _Const005B );
  BezierClockDigit_OnSetValue( &_this->Digit3, 0 );
  BezierClockDigit_OnSetEdges( &_this->Digit3, 60 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit3, 10.1f );
  BezierClockDigit_OnSetAnimationDuration( &_this->Digit3, 700 );
  CoreRectView__OnSetBounds( &_this->Digit4, _Const005C );
  BezierClockDigit_OnSetValue( &_this->Digit4, 0 );
  BezierClockDigit_OnSetEdges( &_this->Digit4, 40 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit4, 3.8f );
  BezierClockDigit_OnSetAnimationDuration( &_this->Digit4, 10 );
  CoreRectView__OnSetBounds( &_this->Digit5, _Const005D );
  BezierClockDigit_OnSetValue( &_this->Digit5, 0 );
  BezierClockDigit_OnSetEdges( &_this->Digit5, 40 );
  BezierClockDigit_OnSetStrokeWidth( &_this->Digit5, 3.8f );
  BezierClockDigit_OnSetAnimationDuration( &_this->Digit5, 10 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->TouchHandlerLeft, _Const0055 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->TouchHandlerLeft, _Const0021 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->TouchHandlerLeft, _Const001D );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->TouchHandlerLeft, _Const005E );
  CoreRectView__OnSetBounds( &_this->ImageLeft, _Const005F );
  ViewsImage_OnSetFrameNumber( &_this->ImageLeft, 3 );
  CoreTimer_OnSetPeriod( &_this->Timer, 10 );
  CoreTimer_OnSetEnabled( &_this->Timer, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->Dot1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Dot2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Digit5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandlerLeft ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageLeft ), 0 );
  _this->Int32Effect.Outlet = EwNewRef( _this, BezierClockTimerScreen_OnGetTimerCurrent, 
  BezierClockTimerScreen_OnSetTimerCurrent );
  ViewsFillPath_OnSetPath( &_this->Dot1, ((GraphicsPath)&_this->DotPath ));
  ViewsFillPath_OnSetPath( &_this->Dot2, ((GraphicsPath)&_this->DotPath ));
  _this->TouchHandlerLeft.OnPress = EwNewSlot( _this, BezierClockTimerScreen_onDismiss );
  ViewsImage_OnSetBitmap( &_this->ImageLeft, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  _this->Timer.OnTrigger = EwNewSlot( _this, BezierClockTimerScreen_onDismiss1 );
}

/* Re-Initializer for the class 'BezierClock::TimerScreen' */
void BezierClockTimerScreen__ReInit( BezierClockTimerScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  GraphicsArcPath__ReInit( &_this->DotPath );
  ViewsFillPath__ReInit( &_this->Dot1 );
  ViewsFillPath__ReInit( &_this->Dot2 );
  BezierClockDigit__ReInit( &_this->Digit0 );
  BezierClockDigit__ReInit( &_this->Digit1 );
  BezierClockDigit__ReInit( &_this->Digit2 );
  BezierClockDigit__ReInit( &_this->Digit3 );
  BezierClockDigit__ReInit( &_this->Digit4 );
  BezierClockDigit__ReInit( &_this->Digit5 );
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandlerLeft );
  ViewsImage__ReInit( &_this->ImageLeft );
  CoreTimer__ReInit( &_this->Timer );
}

/* Finalizer method for the class 'BezierClock::TimerScreen' */
void BezierClockTimerScreen__Done( BezierClockTimerScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  EffectsInt32Effect__Done( &_this->Int32Effect );
  GraphicsArcPath__Done( &_this->DotPath );
  ViewsFillPath__Done( &_this->Dot1 );
  ViewsFillPath__Done( &_this->Dot2 );
  BezierClockDigit__Done( &_this->Digit0 );
  BezierClockDigit__Done( &_this->Digit1 );
  BezierClockDigit__Done( &_this->Digit2 );
  BezierClockDigit__Done( &_this->Digit3 );
  BezierClockDigit__Done( &_this->Digit4 );
  BezierClockDigit__Done( &_this->Digit5 );
  CoreSimpleTouchHandler__Done( &_this->TouchHandlerLeft );
  ViewsImage__Done( &_this->ImageLeft );
  CoreTimer__Done( &_this->Timer );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void BezierClockTimerScreen_UpdateViewState( BezierClockTimerScreen _this, XSet 
  aState )
{
  XColor c;

  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
  c = _Const0007;

  if ( _this->TimerCurrent > 0 )
    c = _Const0060;

  BezierClockDigit_OnSetColor( &_this->Digit0, c );
  BezierClockDigit_OnSetColor( &_this->Digit1, c );
  BezierClockDigit_OnSetColor( &_this->Digit2, c );
  BezierClockDigit_OnSetColor( &_this->Digit3, c );
  BezierClockDigit_OnSetColor( &_this->Digit4, c );
  BezierClockDigit_OnSetColor( &_this->Digit5, c );
  ViewsFillPath_OnSetColor( &_this->Dot1, c );
  ViewsFillPath_OnSetColor( &_this->Dot2, c );
}

/* 'C' function for method : 'BezierClock::TimerScreen.onDismiss()' */
void BezierClockTimerScreen_onDismiss( BezierClockTimerScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !CoreGroup__IsDialog( _this, 0 ) && !CoreGroup__IsDialog( _this, 0 ))
    return;

  CoreGroup__SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( BezierClockClockScreen, 
  0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideRightCentered, EffectsSlideTransition )), 
  0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  BezierClockBackground_ShiftRight( &EwCastObject( _this->Super3.Owner, BezierClockBezierClock )->Background );
}

/* 'C' function for method : 'BezierClock::TimerScreen.OnSetTimerCurrent()' */
void BezierClockTimerScreen_OnSetTimerCurrent( BezierClockTimerScreen _this, XInt32 
  value )
{
  XInt32 minutes;
  XInt32 seconds;
  XInt32 tenths;

  if ( _this->TimerCurrent == value )
    return;

  _this->TimerCurrent = value;
  minutes = _this->TimerCurrent / 6000;
  seconds = ( _this->TimerCurrent / 100 ) % 60;
  tenths = _this->TimerCurrent;
  BezierClockDigit_OnSetValue( &_this->Digit0, minutes / 10 );
  BezierClockDigit_OnSetValue( &_this->Digit1, minutes % 10 );
  BezierClockDigit_OnSetValue( &_this->Digit2, seconds / 10 );
  BezierClockDigit_OnSetValue( &_this->Digit3, seconds % 10 );
  BezierClockDigit_OnSetValue( &_this->Digit4, tenths / 10 );
  BezierClockDigit_OnSetValue( &_this->Digit5, tenths % 10 );
  EwNotifyRefObservers( EwNewRef( _this, BezierClockTimerScreen_OnGetTimerCurrent, 
    BezierClockTimerScreen_OnSetTimerCurrent ), 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'BezierClock::TimerScreen.onDismiss1()' */
void BezierClockTimerScreen_onDismiss1( BezierClockTimerScreen _this, XObject sender )
{
  XInt32 seconds;
  XInt32 tenths;
  XInt32 minutes;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->TimerCurrent = _this->Variable;
  _this->Variable = _this->Variable + 1;
  seconds = ( _this->TimerCurrent / 100 ) % 60;
  tenths = _this->TimerCurrent;
  minutes = _this->TimerCurrent / 6000;
  BezierClockDigit_OnSetValue( &_this->Digit0, minutes / 10 );
  BezierClockDigit_OnSetValue( &_this->Digit1, minutes % 10 );
  BezierClockDigit_OnSetValue( &_this->Digit2, seconds / 10 );
  BezierClockDigit_OnSetValue( &_this->Digit3, seconds % 10 );
  BezierClockDigit_OnSetValue( &_this->Digit4, tenths / 10 );
  BezierClockDigit_OnSetValue( &_this->Digit5, tenths % 10 );
  EwNotifyRefObservers( EwNewRef( _this, BezierClockTimerScreen_OnGetTimerCurrent, 
    BezierClockTimerScreen_OnSetTimerCurrent ), 0 );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Default onget method for the property 'TimerCurrent' */
XInt32 BezierClockTimerScreen_OnGetTimerCurrent( BezierClockTimerScreen _this )
{
  return _this->TimerCurrent;
}

/* Variants derived from the class : 'BezierClock::TimerScreen' */
EW_DEFINE_CLASS_VARIANTS( BezierClockTimerScreen )
EW_END_OF_CLASS_VARIANTS( BezierClockTimerScreen )

/* Virtual Method Table (VMT) for the class : 'BezierClock::TimerScreen' */
EW_DEFINE_CLASS( BezierClockTimerScreen, CoreGroup, Int32Effect, TimerCurrent, TimerCurrent, 
                 TimerCurrent, TimerCurrent, TimerCurrent, "BezierClock::TimerScreen" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  BezierClockTimerScreen_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( BezierClockTimerScreen )

/* Initializer for the class 'BezierClock::StyleScreen' */
void BezierClockStyleScreen__Init( BezierClockStyleScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockStyleScreen );

  /* ... then construct all embedded objects */
  CoreSimpleTouchHandler__Init( &_this->DownTouchHandler, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->ImageDown, &_this->_.XObject, 0 );
  WidgetSetRadioButtonConfig__Init( &_this->RadioButtonConfig, &_this->_.XObject, 0 );
  WidgetSetRadioButton__Init( &_this->RadioButtonDark, &_this->_.XObject, 0 );
  WidgetSetRadioButton__Init( &_this->RadioButtonOrange, &_this->_.XObject, 0 );
  WidgetSetRadioButton__Init( &_this->RadioButtonBlue, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockStyleScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0019 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->DownTouchHandler, _Const0061 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->DownTouchHandler, _Const0062 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->DownTouchHandler, _Const001C );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->DownTouchHandler, _Const001D );
  CoreRectView__OnSetBounds( &_this->ImageDown, _Const0031 );
  ViewsImage_OnSetFrameNumber( &_this->ImageDown, 0 );
  WidgetSetRadioButtonConfig_OnSetFaceLayout( &_this->RadioButtonConfig, CoreLayoutAlignToBottom 
  | CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  WidgetSetRadioButtonConfig_OnSetFaceOffTintActive( &_this->RadioButtonConfig, 
  _Const0063 );
  WidgetSetRadioButtonConfig_OnSetFaceOffTintFocused( &_this->RadioButtonConfig, 
  _Const0063 );
  WidgetSetRadioButtonConfig_OnSetFaceOffTintDisabled( &_this->RadioButtonConfig, 
  _Const0063 );
  WidgetSetRadioButtonConfig_OnSetFaceOffTintDefault( &_this->RadioButtonConfig, 
  _Const0063 );
  CoreRectView__OnSetBounds( &_this->RadioButtonDark, _Const0064 );
  WidgetSetRadioButton_OnSetSelected( &_this->RadioButtonDark, 1 );
  WidgetSetRadioButton_OnSetIconFrame( &_this->RadioButtonDark, 0 );
  CoreRectView__OnSetBounds( &_this->RadioButtonOrange, _Const0065 );
  WidgetSetRadioButton_OnSetOutletSelector( &_this->RadioButtonOrange, 1 );
  WidgetSetRadioButton_OnSetIconFrame( &_this->RadioButtonOrange, 1 );
  CoreRectView__OnSetBounds( &_this->RadioButtonBlue, _Const0066 );
  WidgetSetRadioButton_OnSetOutletSelector( &_this->RadioButtonBlue, 2 );
  WidgetSetRadioButton_OnSetIconFrame( &_this->RadioButtonBlue, 2 );
  CoreGroup__Add( _this, ((CoreView)&_this->DownTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ImageDown ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RadioButtonDark ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RadioButtonOrange ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->RadioButtonBlue ), 0 );
  _this->DownTouchHandler.OnPress = EwNewSlot( _this, BezierClockStyleScreen_onDismiss );
  ViewsImage_OnSetBitmap( &_this->ImageDown, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  WidgetSetRadioButtonConfig_OnSetFaceOnBitmapActive( &_this->RadioButtonConfig, 
  EwLoadResource( &BezierClockBackgroundFrame, ResourcesBitmap ));
  WidgetSetRadioButtonConfig_OnSetFaceOnBitmapFocused( &_this->RadioButtonConfig, 
  EwLoadResource( &BezierClockBackgroundFrame, ResourcesBitmap ));
  WidgetSetRadioButtonConfig_OnSetFaceOnBitmapDefault( &_this->RadioButtonConfig, 
  EwLoadResource( &BezierClockBackgroundFrame, ResourcesBitmap ));
  WidgetSetRadioButtonConfig_OnSetFaceOffBitmapActive( &_this->RadioButtonConfig, 
  EwLoadResource( &BezierClockBackgroundFrame, ResourcesBitmap ));
  WidgetSetRadioButtonConfig_OnSetFaceOffBitmapFocused( &_this->RadioButtonConfig, 
  EwLoadResource( &BezierClockBackgroundFrame, ResourcesBitmap ));
  WidgetSetRadioButtonConfig_OnSetFaceOffBitmapDefault( &_this->RadioButtonConfig, 
  EwLoadResource( &BezierClockBackgroundFrame, ResourcesBitmap ));
  WidgetSetRadioButton_OnSetOutlet( &_this->RadioButtonDark, EwNewRef( EwGetAutoObject( 
  &BezierClockDevice, BezierClockDeviceClass ), BezierClockDeviceClass_OnGetCurrentBackground, 
  BezierClockDeviceClass_OnSetCurrentBackground ));
  WidgetSetRadioButton_OnSetIcon( &_this->RadioButtonDark, EwLoadResource( &BezierClockBackgroundPreview, 
  ResourcesBitmap ));
  WidgetSetRadioButton_OnSetAppearance( &_this->RadioButtonDark, &_this->RadioButtonConfig );
  WidgetSetRadioButton_OnSetOutlet( &_this->RadioButtonOrange, EwNewRef( EwGetAutoObject( 
  &BezierClockDevice, BezierClockDeviceClass ), BezierClockDeviceClass_OnGetCurrentBackground, 
  BezierClockDeviceClass_OnSetCurrentBackground ));
  WidgetSetRadioButton_OnSetIcon( &_this->RadioButtonOrange, EwLoadResource( &BezierClockBackgroundPreview, 
  ResourcesBitmap ));
  WidgetSetRadioButton_OnSetAppearance( &_this->RadioButtonOrange, &_this->RadioButtonConfig );
  WidgetSetRadioButton_OnSetOutlet( &_this->RadioButtonBlue, EwNewRef( EwGetAutoObject( 
  &BezierClockDevice, BezierClockDeviceClass ), BezierClockDeviceClass_OnGetCurrentBackground, 
  BezierClockDeviceClass_OnSetCurrentBackground ));
  WidgetSetRadioButton_OnSetIcon( &_this->RadioButtonBlue, EwLoadResource( &BezierClockBackgroundPreview, 
  ResourcesBitmap ));
  WidgetSetRadioButton_OnSetAppearance( &_this->RadioButtonBlue, &_this->RadioButtonConfig );
}

/* Re-Initializer for the class 'BezierClock::StyleScreen' */
void BezierClockStyleScreen__ReInit( BezierClockStyleScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreSimpleTouchHandler__ReInit( &_this->DownTouchHandler );
  ViewsImage__ReInit( &_this->ImageDown );
  WidgetSetRadioButtonConfig__ReInit( &_this->RadioButtonConfig );
  WidgetSetRadioButton__ReInit( &_this->RadioButtonDark );
  WidgetSetRadioButton__ReInit( &_this->RadioButtonOrange );
  WidgetSetRadioButton__ReInit( &_this->RadioButtonBlue );
}

/* Finalizer method for the class 'BezierClock::StyleScreen' */
void BezierClockStyleScreen__Done( BezierClockStyleScreen _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  CoreSimpleTouchHandler__Done( &_this->DownTouchHandler );
  ViewsImage__Done( &_this->ImageDown );
  WidgetSetRadioButtonConfig__Done( &_this->RadioButtonConfig );
  WidgetSetRadioButton__Done( &_this->RadioButtonDark );
  WidgetSetRadioButton__Done( &_this->RadioButtonOrange );
  WidgetSetRadioButton__Done( &_this->RadioButtonBlue );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'BezierClock::StyleScreen.onDismiss()' */
void BezierClockStyleScreen_onDismiss( BezierClockStyleScreen _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( CoreGroup__IsDialog( _this, 0 ))
    CoreGroup__SwitchToDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( BezierClockClockScreen, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideUpCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* Variants derived from the class : 'BezierClock::StyleScreen' */
EW_DEFINE_CLASS_VARIANTS( BezierClockStyleScreen )
EW_END_OF_CLASS_VARIANTS( BezierClockStyleScreen )

/* Virtual Method Table (VMT) for the class : 'BezierClock::StyleScreen' */
EW_DEFINE_CLASS( BezierClockStyleScreen, CoreGroup, DownTouchHandler, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "BezierClock::StyleScreen" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetBuffered,
  CoreGroup_OnSetOpacity,
  CoreGroup_IsDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( BezierClockStyleScreen )

/* Include a file containing the font resource : 'BezierClock::FontL' */
#include "_BezierClockFontL.h"

/* Table with links to derived variants of the font resource : 'BezierClock::FontL' */
EW_RES_WITHOUT_VARIANTS( BezierClockFontL )

/* Include a file containing the font resource : 'BezierClock::FontXXL' */
#include "_BezierClockFontXXL.h"

/* Table with links to derived variants of the font resource : 'BezierClock::FontXXL' */
EW_RES_WITHOUT_VARIANTS( BezierClockFontXXL )

/* This is an inline code block. */
/* include the device driver header file to get access for the device class */
// #include "DeviceDriver.h"


/* Initializer for the class 'BezierClock::DeviceClass' */
void BezierClockDeviceClass__Init( BezierClockDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( BezierClockDeviceClass );

  /* ... then construct all embedded objects */
  CoreTime__Init( &_this->Time, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( BezierClockDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->CurrentBackground = 1;
}

/* Re-Initializer for the class 'BezierClock::DeviceClass' */
void BezierClockDeviceClass__ReInit( BezierClockDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  CoreTime__ReInit( &_this->Time );
}

/* Finalizer method for the class 'BezierClock::DeviceClass' */
void BezierClockDeviceClass__Done( BezierClockDeviceClass _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Finalize all embedded objects */
  CoreTime__Done( &_this->Time );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'BezierClock::DeviceClass.OnSetCurrentBackground()' */
void BezierClockDeviceClass_OnSetCurrentBackground( BezierClockDeviceClass _this, 
  XInt32 value )
{
  if ( _this->CurrentBackground == value )
    return;

  _this->CurrentBackground = value;
  EwNotifyRefObservers( EwNewRef( _this, BezierClockDeviceClass_OnGetCurrentBackground, 
    BezierClockDeviceClass_OnSetCurrentBackground ), 0 );
}

/* Default onget method for the property 'CurrentBackground' */
XInt32 BezierClockDeviceClass_OnGetCurrentBackground( BezierClockDeviceClass _this )
{
  return _this->CurrentBackground;
}

/* Variants derived from the class : 'BezierClock::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( BezierClockDeviceClass )
EW_END_OF_CLASS_VARIANTS( BezierClockDeviceClass )

/* Virtual Method Table (VMT) for the class : 'BezierClock::DeviceClass' */
EW_DEFINE_CLASS( BezierClockDeviceClass, XObject, Time, CurrentBackground, CurrentBackground, 
                 CurrentBackground, CurrentBackground, CurrentBackground, "BezierClock::DeviceClass" )
EW_END_OF_CLASS( BezierClockDeviceClass )

/* This object represents an instance of the device interface implemented in the 
   class BezierClock::DeviceClass. */
EW_DEFINE_AUTOOBJECT( BezierClockDevice, BezierClockDeviceClass )

/* Initializer for the auto object 'BezierClock::Device' */
void BezierClockDevice__Init( BezierClockDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Re-Initializer for the auto object 'BezierClock::Device' */
void BezierClockDevice__ReInit( BezierClockDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'BezierClock::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( BezierClockDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( BezierClockDevice )

/* Include a file containing the bitmap resource : 'BezierClock::BackgroundPreview' */
#include "_BezierClockBackgroundPreview.h"

/* Table with links to derived variants of the bitmap resource : 'BezierClock::BackgroundPreview' */
EW_RES_WITHOUT_VARIANTS( BezierClockBackgroundPreview )

/* Include a file containing the bitmap resource : 'BezierClock::Blue' */
#include "_BezierClockBlue.h"

/* Table with links to derived variants of the bitmap resource : 'BezierClock::Blue' */
EW_RES_WITHOUT_VARIANTS( BezierClockBlue )

/* Include a file containing the bitmap resource : 'BezierClock::Dark' */
#include "_BezierClockDark.h"

/* Table with links to derived variants of the bitmap resource : 'BezierClock::Dark' */
EW_RES_WITHOUT_VARIANTS( BezierClockDark )

/* Include a file containing the bitmap resource : 'BezierClock::Orange' */
#include "_BezierClockOrange.h"

/* Table with links to derived variants of the bitmap resource : 'BezierClock::Orange' */
EW_RES_WITHOUT_VARIANTS( BezierClockOrange )

/* Include a file containing the bitmap resource : 'BezierClock::BackgroundFrame' */
#include "_BezierClockBackgroundFrame.h"

/* Table with links to derived variants of the bitmap resource : 'BezierClock::BackgroundFrame' */
EW_RES_WITHOUT_VARIANTS( BezierClockBackgroundFrame )

/* Embedded Wizard */
