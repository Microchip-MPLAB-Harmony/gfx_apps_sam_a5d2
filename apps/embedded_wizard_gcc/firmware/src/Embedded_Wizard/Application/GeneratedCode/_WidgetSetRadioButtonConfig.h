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

#ifndef _WidgetSetRadioButtonConfig_H
#define _WidgetSetRadioButtonConfig_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if ( EW_RTE_VERSION >> 16 ) != 13
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if ( EW_GFX_VERSION >> 16 ) != 13
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_WidgetSetWidgetConfig.h"

/* Forward declaration of the class Resources::Bitmap */
#ifndef _ResourcesBitmap_
  EW_DECLARE_CLASS( ResourcesBitmap )
#define _ResourcesBitmap_
#endif

/* Forward declaration of the class WidgetSet::RadioButtonConfig */
#ifndef _WidgetSetRadioButtonConfig_
  EW_DECLARE_CLASS( WidgetSetRadioButtonConfig )
#define _WidgetSetRadioButtonConfig_
#endif


/* This class implements the functionality permitting you to simply customize the 
   look and feel of a mutual exclusive option 'radio button' widget (WidgetSet::RadioButton). 
   In the practice, you will create an instance of this class, configure its properties 
   with bitmaps, colors and other relevant attributes according to your design expectations 
   and assign such prepared configuration object to the property 'Appearance' of 
   every affected radio button widget. Thereupon the widgets will use the configuration 
   information provided in the object.
   During its lifetime the button remains always in one of the four states: 'disabled', 
   'default', 'focused' and 'active'. The state 'disabled' is true for every not 
   available button (the property 'Enabled' of the button is 'false'). Such buttons 
   will ignore all user inputs. The state 'default' determines a button, which is 
   ready to be touched by the user or ready to become focused. As soon as the button 
   becomes focused, it switches in the state 'focused'. In this state the user can 
   activate the button by pressing a key on the keyboard. Finally, the state 'active' 
   is true, if the user actually interacts with the button (the button is pressed). 
   At the same time, the radio button distinguishes between two further states: 
   'on' (selected) and 'off' (not selected). With the configuration object you can 
   specify the appearance of the button for every state combination individually. 
   For this purpose you should know from which views the button is composed of:
   - 'FaceImage' is a bitmap frame view (Views::Frame) filling per default the entire 
   background of the button unless the area is reduced by using the properties @FaceMarginBottom, 
   @FaceMarginLeft, @FaceMarginRight, @FaceMarginTop. The position can additionally 
   be adjusted for each state individually (@CommonOffOffsetActive, @CommonOffOffsetDefault, 
   @CommonOffOffsetDisabled, @CommonOffOffsetFocused, @CommonOnOffsetActive, @CommonOnOffsetDefault, 
   @CommonOnOffsetDisabled, @CommonOnOffsetFocused). In the configuration object 
   you can individually specify for every button state combination the desired bitmap 
   (@FaceOffBitmapActive, @FaceOffBitmapDefault, @FaceOffBitmapDisabled, @FaceOffBitmapFocused, 
   @FaceOnBitmapActive, @FaceOnBitmapDefault, @FaceOnBitmapDisabled, @FaceOnBitmapFocused), 
   the frame number within the bitmap (@FaceOffFrameActive, @FaceOffFrameDefault, 
   @FaceOffFrameDisabled, @FaceOffFrameFocused, @FaceOnFrameActive, @FaceOnFrameDefault, 
   @FaceOnFrameDisabled, @FaceOnFrameFocused) and opacity or color to tint the bitmap 
   (@FaceOffTintActive, @FaceOffTintDefault, @FaceOffTintDisabled, @FaceOffTintFocused, 
   @FaceOnTintActive, @FaceOnTintDefault, @FaceOnTintDisabled, @FaceOnTintFocused). 
   The button can automatically play animated bitmaps if the corresponding frame 
   number is -1. If desired, with the property @FaceLayout you can also configure 
   the bitmap to be arranged horizontally and vertically instead of filling the 
   entire widget area.
   - 'ThumbRectangle' is a rectangle view (Views::Rectangle) filling per default 
   the entire area of the button unless other constraints (@ThumbLayout), a size 
   alternation (@ThumbOffSizeActive, @ThumbOffSizeDefault, @ThumbOffSizeDisabled, 
   @ThumbOffSizeFocused, @ThumbOnSizeActive, @ThumbOnSizeDefault, @ThumbOnSizeDisabled, 
   @ThumbOnSizeFocused) or a displacement (@ThumbOffOffsetActive, @ThumbOffOffsetDefault, 
   @ThumbOffOffsetDisabled, @ThumbOffOffsetFocused, @ThumbOnOffsetActive, @ThumbOnOffsetDefault, 
   @ThumbOnOffsetDisabled, @ThumbOnOffsetFocused) have been specified. Normally, 
   the thumb has rectangular shape with sharp corners. If desired the corners can 
   be rounded (@ThumbOffCornerRadiusActive, @ThumbOffCornerRadiusDefault, @ThumbOffCornerRadiusDisabled, 
   @ThumbOffCornerRadiusFocused, @ThumbOnCornerRadiusActive, @ThumbOnCornerRadiusDefault, 
   @ThumbOnCornerRadiusDisabled, @ThumbOnCornerRadiusFocused). The thumb can be 
   filled with a solid color (@ThumbOffColorActive, @ThumbOffColorDefault, @ThumbOffColorDisabled, 
   @ThumbOffColorFocused, @ThumbOnColorActive, @ThumbOnColorDefault, @ThumbOnColorDisabled, 
   @ThumbOnColorFocused).
   - 'ThumbBorder' is a border view (Views::Border) surrounding the above described 
   'ThumbRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'ThumbRectangle'. The thickness of the border (@ThumbOffBorderWidthActive, 
   @ThumbOffBorderWidthDefault, @ThumbOffBorderWidthDisabled, @ThumbOffBorderWidthFocused, 
   @ThumbOnBorderWidthActive, @ThumbOnBorderWidthDefault, @ThumbOnBorderWidthDisabled, 
   @ThumbOnBorderWidthFocused) and its color (@ThumbOffBorderColorActive, @ThumbOffBorderColorDefault, 
   @ThumbOffBorderColorDisabled, @ThumbOffBorderColorFocused, @ThumbOnBorderColorActive, 
   @ThumbOnBorderColorDefault, @ThumbOnBorderColorDisabled, @ThumbOnBorderColorFocused) 
   can be specified.
   - 'ThumbShadow' is a shadow view (Views::Shadow) lying always behind the above 
   described 'ThumbRectangle' view. Its size, position and corner radius correspond 
   thus to the of the 'ThumbRectangle'. However, an additional displacement for 
   the shadow can be specified (@ThumbOffShadowOffsetActive, @ThumbOffShadowOffsetDefault, 
   @ThumbOffShadowOffsetDisabled, @ThumbOffShadowOffsetFocused, @ThumbOnShadowOffsetActive, 
   @ThumbOnShadowOffsetDefault, @ThumbOnShadowOffsetDisabled, @ThumbOnShadowOffsetFocused). 
   The color of the shadow (@ThumbOffShadowColorActive, @ThumbOffShadowColorDefault, 
   @ThumbOffShadowColorDisabled, @ThumbOffShadowColorFocused, @ThumbOnShadowColorActive, 
   @ThumbOnShadowColorDefault, @ThumbOnShadowColorDisabled, @ThumbOnShadowColorFocused) 
   as well as its blur radius (@ThumbOffShadowBlurRadiusActive, @ThumbOffShadowBlurRadiusDefault, 
   @ThumbOffShadowBlurRadiusDisabled, @ThumbOffShadowBlurRadiusFocused, @ThumbOnShadowBlurRadiusActive, 
   @ThumbOnShadowBlurRadiusDefault, @ThumbOnShadowBlurRadiusDisabled, @ThumbOnShadowBlurRadiusFocused) 
   can be specified.
   - 'TrackRectangle' is a rectangle view (Views::Rectangle) filling per default 
   the entire area of the button unless other constraints (@TrackLayout), a size 
   alternation (@TrackSize) or a displacement (@TrackOffset) have been specified. 
   Normally, the track has rectangular shape with sharp corners. If desired the 
   corners can be rounded (@TrackCornerRadius). The track can be filled with a solid 
   color (@TrackOffColorActive, @TrackOffColorDefault, @TrackOffColorDisabled, @TrackOffColorFocused, 
   @TrackOnColorActive, @TrackOnColorDefault, @TrackOnColorDisabled, @TrackOnColorFocused). 
   Track usually serves to visualize the area where thumb is moved and it is usually 
   arranged behind the thumb.
   - 'TrackBorder' is a border view (Views::Border) surrounding the above described 
   'TrackRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'TrackRectangle'. The thickness of the border (@TrackOffBorderWidthActive, 
   @TrackOffBorderWidthDefault, @TrackOffBorderWidthDisabled, @TrackOffBorderWidthFocused, 
   @TrackOnBorderWidthActive, @TrackOnBorderWidthDefault, @TrackOnBorderWidthDisabled, 
   @TrackOnBorderWidthFocused) and its color (@TrackOffBorderColorActive, @TrackOffBorderColorDefault, 
   @TrackOffBorderColorDisabled, @TrackOffBorderColorFocused, @TrackOnBorderColorActive, 
   @TrackOnBorderColorDefault, @TrackOnBorderColorDisabled, @TrackOnBorderColorFocused) 
   can be specified. Track usually serves to visualize the area where thumb is moved 
   and it is usually arranged behind the thumb.
   - 'AccentRectangle' is a rectangle view (Views::Rectangle) filling per default 
   the entire area of the button unless other constraints (@AccentLayout), a size 
   alternation (@AccentOffSizeActive, @AccentOffSizeDefault, @AccentOffSizeDisabled, 
   @AccentOffSizeFocused, @AccentOnSizeActive, @AccentOnSizeDefault, @AccentOnSizeDisabled, 
   @AccentOnSizeFocused) or a displacement (@AccentOffOffsetActive, @AccentOffOffsetDefault, 
   @AccentOffOffsetDisabled, @AccentOffOffsetFocused, @AccentOnOffsetActive, @AccentOnOffsetDefault, 
   @AccentOnOffsetDisabled, @AccentOnOffsetFocused) have been specified. Normally, 
   the accent area has rectangular shape with sharp corners. If desired the corners 
   can be rounded (@AccentOffCornerRadiusActive, @AccentOffCornerRadiusDefault, 
   @AccentOffCornerRadiusDisabled, @AccentOffCornerRadiusFocused, @AccentOnCornerRadiusActive, 
   @AccentOnCornerRadiusDefault, @AccentOnCornerRadiusDisabled, @AccentOnCornerRadiusFocused). 
   The accent area can be filled with a solid color (@AccentOffColorActive, @AccentOffColorDefault, 
   @AccentOffColorDisabled, @AccentOffColorFocused, @AccentOnColorActive, @AccentOnColorDefault, 
   @AccentOnColorDisabled, @AccentOnColorFocused). Accent usually serves to highlight 
   the widget when the user interacts with it actively or when the widget is focused.
   - 'AccentBorder' is a border view (Views::Border) surrounding the above described 
   'AccentRectangle' and lying in front of it. Its size, position and corner radius 
   correspond thus to the of the 'AccentRectangle'. The thickness of the border 
   (@AccentOffBorderWidthActive, @AccentOffBorderWidthDefault, @AccentOffBorderWidthDisabled, 
   @AccentOffBorderWidthFocused, @AccentOnBorderWidthActive, @AccentOnBorderWidthDefault, 
   @AccentOnBorderWidthDisabled, @AccentOnBorderWidthFocused) and its color (@AccentOffBorderColorActive, 
   @AccentOffBorderColorDefault, @AccentOffBorderColorDisabled, @AccentOffBorderColorFocused, 
   @AccentOnBorderColorActive, @AccentOnBorderColorDefault, @AccentOnBorderColorDisabled, 
   @AccentOnBorderColorFocused) can be specified. Accent usually serves to highlight 
   the widget when the user interacts with it actively or when the widget is focused.
   - 'Icon' is an image view (Views::Image) displayed per default in the center 
   of the button. The corresponding bitmap is determined in the property 'Icon' 
   in the radio button widget. In the configuration object you can specify the alignment 
   (@IconAlignment) and margins (@IconMarginBottom, @IconMarginLeft, @IconMarginRight, 
   @IconMarginTop) how to arrange the 'Icon' bitmap within the button area. The 
   position can additionally be adjusted for each state individually (@CommonOffOffsetActive, 
   @CommonOffOffsetDefault, @CommonOffOffsetDisabled, @CommonOffOffsetFocused, @CommonOnOffsetActive, 
   @CommonOnOffsetDefault, @CommonOnOffsetDisabled, @CommonOnOffsetFocused). Furthermore, 
   for every button state combination the opacity or color to tint the bitmap can 
   be determined (@IconOffTintActive, @IconOffTintDefault, @IconOffTintDisabled, 
   @IconOffTintFocused, @IconOnTintActive, @IconOnTintDefault, @IconOnTintDisabled, 
   @IconOnTintFocused).
   - 'Label' is a text view (Views::Text) displayed per default in the center of 
   the button. The corresponding text is determined in the property 'LabelOff' or 
   'LabelOn' in the radio button widget. In the configuration object you can specify 
   the font (@LabelOffFont, @LabelOnFont), alignment (@LabelAlignment) and margins 
   (@LabelMarginBottom, @LabelMarginLeft, @LabelMarginRight, @LabelMarginTop) to 
   use for the text view. The position can additionally be adjusted for each state 
   individually (@CommonOffOffsetActive, @CommonOffOffsetDefault, @CommonOffOffsetDisabled, 
   @CommonOffOffsetFocused, @CommonOnOffsetActive, @CommonOnOffsetDefault, @CommonOnOffsetDisabled, 
   @CommonOnOffsetFocused). For every button state combination you can specify individual 
   text color values (@LabelOffColorActive, @LabelOffColorDefault, @LabelOffColorDisabled, 
   @LabelOffColorFocused, @LabelOnColorActive, @LabelOnColorDefault, @LabelOnColorDisabled, 
   @LabelOnColorFocused).
   All above mentioned views are arranged one above the other whereby the resulting 
   stacking order can be configured by using the properties @FaceStackingPriority, 
   @IconStackingPriority, @LabelStackingPriority, @ThumbStackingPriority, @TrackStackingPriority 
   and @AccentStackingPriority. The view with higher priority will appear in front 
   of other views with lower priority.
   Normally, when a state alternation occurs, the affected views are updated immediatelly 
   to reflect the new state. By using the property @StateTransitionDuration it is 
   possible to configure the radio button to perform state alternations with animations 
   (e.g. the displacement of the shadow can be animated). This affects all attributes 
   of the views 'ThumbRectangle', 'ThumbBorder', 'ThumbShadow', 'TrackRectangle' 
   and 'TrackBorder'. In case of the views 'FaceImage', 'Label' and 'Icon' the animation 
   has an effect only on the colors and offsets used to configure the views. Consequently, 
   during animations these views can fade-out/in their colors and move only.
   If the button is actually focused, it can also be activated by pressing the keyboard 
   key specified in the property @KeyCode. To prevent the button from being able 
   to be focused, initialize this property with the value Core::KeyCode.NoKey. The 
   property @PressedFeedbackDuration configures the duration how long the button 
   should appear active (pressed) even if it has been taped for a very short time.
   To further enhance the widgets, a slot method can be assigned to the property 
   @OnUpdate. Within the slot method new decoration views can be added to the widgets 
   and updated according to the current state of the widget. 
   With the properties @WidgetMinSize and @WidgetMaxSize you can configure size 
   constraints for the widget itself. You can, for example, limit the button to 
   not shrink below a specified width or height. */
EW_DEFINE_FIELDS( WidgetSetRadioButtonConfig, WidgetSetWidgetConfig )
  EW_PROPERTY( FaceOnBitmapActive, ResourcesBitmap )
  EW_PROPERTY( FaceOnBitmapFocused, ResourcesBitmap )
  EW_PROPERTY( FaceOnBitmapDefault, ResourcesBitmap )
  EW_PROPERTY( FaceOffBitmapActive, ResourcesBitmap )
  EW_PROPERTY( FaceOffBitmapFocused, ResourcesBitmap )
  EW_PROPERTY( FaceOffBitmapDefault, ResourcesBitmap )
  EW_PROPERTY( FaceLayout,      XSet )
  EW_PROPERTY( FaceOffTintActive, XColor )
  EW_PROPERTY( FaceOffTintFocused, XColor )
  EW_PROPERTY( FaceOffTintDisabled, XColor )
  EW_PROPERTY( FaceOffTintDefault, XColor )
EW_END_OF_FIELDS( WidgetSetRadioButtonConfig )

/* Virtual Method Table (VMT) for the class : 'WidgetSet::RadioButtonConfig' */
EW_DEFINE_METHODS( WidgetSetRadioButtonConfig, WidgetSetWidgetConfig )
EW_END_OF_METHODS( WidgetSetRadioButtonConfig )

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceLayout()' */
void WidgetSetRadioButtonConfig_OnSetFaceLayout( WidgetSetRadioButtonConfig _this, 
  XSet value );

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceOnBitmapActive()' */
void WidgetSetRadioButtonConfig_OnSetFaceOnBitmapActive( WidgetSetRadioButtonConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceOnBitmapFocused()' */
void WidgetSetRadioButtonConfig_OnSetFaceOnBitmapFocused( WidgetSetRadioButtonConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceOnBitmapDefault()' */
void WidgetSetRadioButtonConfig_OnSetFaceOnBitmapDefault( WidgetSetRadioButtonConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceOffTintActive()' */
void WidgetSetRadioButtonConfig_OnSetFaceOffTintActive( WidgetSetRadioButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceOffTintFocused()' */
void WidgetSetRadioButtonConfig_OnSetFaceOffTintFocused( WidgetSetRadioButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceOffTintDisabled()' */
void WidgetSetRadioButtonConfig_OnSetFaceOffTintDisabled( WidgetSetRadioButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceOffTintDefault()' */
void WidgetSetRadioButtonConfig_OnSetFaceOffTintDefault( WidgetSetRadioButtonConfig _this, 
  XColor value );

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceOffBitmapActive()' */
void WidgetSetRadioButtonConfig_OnSetFaceOffBitmapActive( WidgetSetRadioButtonConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceOffBitmapFocused()' */
void WidgetSetRadioButtonConfig_OnSetFaceOffBitmapFocused( WidgetSetRadioButtonConfig _this, 
  ResourcesBitmap value );

/* 'C' function for method : 'WidgetSet::RadioButtonConfig.OnSetFaceOffBitmapDefault()' */
void WidgetSetRadioButtonConfig_OnSetFaceOffBitmapDefault( WidgetSetRadioButtonConfig _this, 
  ResourcesBitmap value );

#ifdef __cplusplus
  }
#endif

#endif /* _WidgetSetRadioButtonConfig_H */

/* Embedded Wizard */
