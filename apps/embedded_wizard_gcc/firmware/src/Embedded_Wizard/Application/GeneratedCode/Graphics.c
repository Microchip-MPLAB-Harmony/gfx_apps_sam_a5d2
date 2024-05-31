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
#include "_GraphicsArcPath.h"
#include "_GraphicsCanvas.h"
#include "_GraphicsPath.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x0000031E, /* ratio 49.62 % */
  0xB8007B00, 0x80086452, 0x00DC0030, 0xC0109100, 0x1674001B, 0xA0039002, 0x0039800C,
  0x53D000D2, 0x3C45A251, 0x6000E000, 0x98C01193, 0xE6491192, 0x62308891, 0xD1278444,
  0xF1232474, 0x2183C4CC, 0x78D4C801, 0x8B432312, 0x546A6D0A, 0x18A19168, 0xE0DA0094,
  0x00118914, 0x8B031A00, 0xF3587138, 0x3B914226, 0xD8F45E4D, 0xA2C36850, 0x8C6A8E00,
  0x4B2AF4A8, 0xEA616888, 0xE231299C, 0xB3118643, 0x508AD4FA, 0x4D9C1DA1, 0x4A890801,
  0x93D82D65, 0x45DC0175, 0x5CE35738, 0x5A292484, 0x25734844, 0x3548A1C3, 0xD1C92E22,
  0x77864D22, 0x8864CA90, 0x8A4DA190, 0xE4F6B366, 0x5124B41A, 0x96D16289, 0x2494E9CD,
  0x477429C1, 0x363BDC76, 0x280052E9, 0xF890A400, 0xD045A450, 0x543E3568, 0x612650C8,
  0xF2811DD4, 0xA23B5DB6, 0xEB348965, 0x954B8474, 0x8AB04CBA, 0x19274AB7, 0xCE4DB211,
  0xB7231737, 0x66625DE8, 0x2F7F348D, 0xA4BC58A7, 0xAD37EBCD, 0x14FE24E3, 0x36000C00,
  0x2890E400, 0x8B482352, 0x54E0B924, 0x61110443, 0xF5990015, 0x6B001A25, 0x6984C000,
  0x1BB6E51D, 0x0475BD43, 0xD154775C, 0x4656DC67, 0x8510D725, 0x1CE5A1CC, 0x08919700,
  0xB9607480, 0x125F96D5, 0x76D18765, 0x567575C1, 0xD5859D76, 0x95987951, 0x547C5E94,
  0x4696B7B1, 0xE2B859EF, 0x7541F486, 0x31FB7E5F, 0xFF001FD4, 0x80E026C9, 0x00040603,
  0x00000000
};

/* Constant values used in this 'C' module only. */
static const XPoint _Const0000 = { 0, 0 };
static const XStringRes _Const0001 = { _StringsDefault0, 0x0002 };
static const XColor _Const0002 = { 0x00, 0x00, 0x00, 0x00 };
static const XRect _Const0003 = {{ 0, 0 }, { 0, 0 }};
static const XStringRes _Const0004 = { _StringsDefault0, 0x003F };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0073 };
static const XStringRes _Const0006 = { _StringsDefault0, 0x00B5 };
static const XStringRes _Const0007 = { _StringsDefault0, 0x0121 };
static const XPoint _Const0008 = { 1, 1 };
static const XPoint _Const0009 = { 2, 2 };

/* Initializer for the class 'Graphics::Canvas' */
void GraphicsCanvas__Init( GraphicsCanvas _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ResourcesBitmap__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( GraphicsCanvas );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( GraphicsCanvas );

  /* Call the user defined constructor */
  GraphicsCanvas_Init( _this, aArg );
}

/* Re-Initializer for the class 'Graphics::Canvas' */
void GraphicsCanvas__ReInit( GraphicsCanvas _this )
{
  /* At first re-initialize the super class ... */
  ResourcesBitmap__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Graphics::Canvas' */
void GraphicsCanvas__Done( GraphicsCanvas _this )
{
  /* Call the user defined destructor of the class */
  GraphicsCanvas_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( ResourcesBitmap );

  /* Don't forget to deinitialize the super class ... */
  ResourcesBitmap__Done( &_this->_.Super );
}

/* 'C' function for method : 'Graphics::Canvas.Done()' */
void GraphicsCanvas_Done( GraphicsCanvas _this )
{
  if ( _this->attached )
    GraphicsCanvas_DetachBitmap( _this );
}

/* 'C' function for method : 'Graphics::Canvas.Init()' */
void GraphicsCanvas_Init( GraphicsCanvas _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  _this->Super1.Mutable = 1;
}

/* 'C' function for method : 'Graphics::Canvas.OnSetFrameSize()' */
void GraphicsCanvas_OnSetFrameSize( GraphicsCanvas _this, XPoint value )
{
  XHandle handle;

  if (( value.X <= 0 ) || ( value.Y <= 0 ))
    value = _Const0000;

  if ( !EwCompPoint( value, _this->Super1.FrameSize ))
    return;

  if ( _this->attached )
  {
    EwThrow( EwLoadString( &_Const0001 ));
    return;
  }

  _this->Super1.FrameSize = value;
  _this->Super1.Animated = (XBool)(((( _this->Super1.FrameSize.X > 0 ) && ( _this->Super1.FrameSize.Y 
  > 0 )) && ( _this->Super1.FrameDelay > 0 )) && ( _this->Super1.NoOfFrames > 1 ));

  if ( _this->Super1.bitmap == 0 )
    return;

  handle = _this->Super1.bitmap;
  EwFreeBitmap((XBitmap*)handle );
  _this->Super1.bitmap = 0;
}

/* 'C' function for method : 'Graphics::Canvas.Update()' */
void GraphicsCanvas_Update( GraphicsCanvas _this )
{
  if ((( _this->Super1.bitmap == 0 ) && ( _this->Super1.FrameSize.X > 0 )) && ( 
      _this->Super1.FrameSize.Y > 0 ))
  {
    XPoint frameSize = _this->Super1.FrameSize;
    XInt32 noOfFrames = _this->Super1.NoOfFrames;
    XInt32 frameDelay = _this->Super1.FrameDelay;
    XHandle handle = 0;
    {
      handle = (XHandle)EwCreateBitmap( EW_PIXEL_FORMAT_NATIVE, frameSize, 
                                        frameDelay, noOfFrames );
    }
    _this->Super1.bitmap = handle;

    if ( _this->Super1.bitmap == 0 )
    {
      _this->Super1.FrameSize = _Const0000;
      _this->Super1.FrameDelay = 0;
      _this->Super1.NoOfFrames = 1;
    }

    _this->InvalidArea = EwNewRect2Point( _Const0000, _this->Super1.FrameSize );

    if ( !!_this->Super1.bitmap )
    {
      XInt32 dstFrameNr = _this->DstFrameNr;

      for ( _this->DstFrameNr = _this->Super1.NoOfFrames - 1; _this->DstFrameNr 
           >= 0; _this->DstFrameNr-- )
        GraphicsCanvas_FillRectangle( _this, _this->InvalidArea, _this->InvalidArea, 
        _Const0002, _Const0002, _Const0002, _Const0002, 0 );

      _this->DstFrameNr = dstFrameNr;
    }
  }

  if ( !EwIsRectEmpty( _this->InvalidArea ))
  {
    if (( _this->Super1.FrameSize.X > 0 ) && ( _this->Super1.FrameSize.Y > 0 ))
      EwSignal( _this->OnDraw, ((XObject)_this ));

    _this->InvalidArea = _Const0003;
  }
}

/* The method DetachBitmap() exists for the integration purpose with the underlying 
   target system. You will never need to invoke this method directly from your GUI 
   application. The method is invoked after the screen update is finished and the 
   canvas object should be detached from the framebuffer. */
GraphicsCanvas GraphicsCanvas_DetachBitmap( GraphicsCanvas _this )
{
  if ( !_this->attached )
  {
    EwThrow( EwLoadString( &_Const0004 ));
    return 0;
  }

  _this->Super1.bitmap = 0;
  _this->attached = 0;
  _this->Super1.FrameSize = _Const0000;
  _this->Super1.FrameDelay = 0;
  _this->Super1.NoOfFrames = 1;
  _this->Super1.Animated = 0;
  return _this;
}

/* Wrapper function for the non virtual method : 'Graphics::Canvas.DetachBitmap()' */
GraphicsCanvas GraphicsCanvas__DetachBitmap( void* _this )
{
  return GraphicsCanvas_DetachBitmap((GraphicsCanvas)_this );
}

/* The method AttachBitmap() exists for the integration purpose with the underlying 
   target system. You will never need to invoke this method directly from your GUI 
   application. The method is invoked at the beginning of the screen update.
   The method connects the canvas object with the framebuffer. */
GraphicsCanvas GraphicsCanvas_AttachBitmap( GraphicsCanvas _this, XHandle aBitmap )
{
  XInt32 noOfFrames;
  XPoint frameSize;
  XInt32 frameDelay;

  if ( _this->Super1.bitmap != 0 )
  {
    EwThrow( EwLoadString( &_Const0005 ));
    return 0;
  }

  if ( aBitmap == 0 )
    return _this;

  _this->Super1.bitmap = aBitmap;
  _this->attached = 1;
  noOfFrames = 1;
  frameSize = _Const0000;
  frameDelay = 0;
  {
    XBitmap* bmp = (XBitmap*)aBitmap;

    noOfFrames = bmp->NoOfVirtFrames;
    frameSize  = bmp->FrameSize;
    frameDelay = bmp->FrameDelay;
  }
  _this->Super1.NoOfFrames = noOfFrames;
  _this->Super1.FrameSize = frameSize;
  _this->Super1.FrameDelay = frameDelay;
  _this->Super1.Animated = (XBool)(( _this->Super1.FrameDelay > 0 ) && ( _this->Super1.NoOfFrames 
  > 1 ));
  return _this;
}

/* Wrapper function for the non virtual method : 'Graphics::Canvas.AttachBitmap()' */
GraphicsCanvas GraphicsCanvas__AttachBitmap( void* _this, XHandle aBitmap )
{
  return GraphicsCanvas_AttachBitmap((GraphicsCanvas)_this, aBitmap );
}

/* The method DrawText() draws the text row passed in the parameter aString into 
   the canvas. The font to draw the text is passed in the parameter aFont. The parameter 
   aOffset determines within aString the sign to start the drawing operation. If 
   aOffset is zero, the operation starts with the first sign. The parameter aCount 
   determines the max. number of following sigs to draw. If aCount is -1, all signs 
   until the end of the string are drawn. 
   The area to draw the text is determined by the parameter aDstRect. The parameter 
   aOrientation controls the rotation of the text. The parameter aSrcPos determines 
   the base line position of the text relative to a corner of aDstRect, which by 
   taking in account the specified text orientation serves as the origin for the 
   draw operation. For example, if the parameter aOrientation is Views::Orientation.Rotated_270, 
   the text is drawn aSrcPos pixel relative to the bottom-right corner of aDstRect. 
   The parameter aMinWidth determines the min. width in pixel of the drawn text 
   row regardless of the specified rotation. If necessary the space signs within 
   the text will be stretched to fill this area. The parameters aColorTL, aColorTR, 
   aColorBL, aColorBR determine the colors at the corresponding corners of the aDstRect 
   area.
   The parameter aClip limits the drawing operation. Pixel lying outside this area 
   remain unchanged. The last aBlend parameter controls the mode how drawn pixel 
   are combined with the pixel already existing in the destination bitmap. If aBlend 
   is 'true', the drawn pixel are alpha-blended with the background, otherwise the 
   drawn pixel will overwrite the old content. */
void GraphicsCanvas_DrawText( GraphicsCanvas _this, XRect aClip, ResourcesFont aFont, 
  XString aString, XInt32 aOffset, XInt32 aCount, XRect aDstRect, XPoint aSrcPos, 
  XInt32 aMinWidth, XEnum aOrientation, XColor aColorTL, XColor aColorTR, XColor 
  aColorBR, XColor aColorBL, XBool aBlend )
{
  XInt32 orient;
  XInt32 dstFrameNo;
  XHandle dstBitmap;
  XHandle srcFont;
  XRect tempRect;

  if ( _this->Super1.bitmap == 0 )
    ResourcesBitmap__Update( _this );

  if ( _this->Super1.bitmap == 0 )
    return;

  if ( aOffset < 0 )
    aOffset = 0;

  if ((( aFont == 0 ) || ( aFont->font == 0 )) || (( aOffset > 0 ) && ( aOffset 
      >= EwGetStringLength( aString ))))
    return;

  orient = 0;

  if ( aOrientation == ViewsOrientationRotated_90 )
    orient = 90;
  else
    if ( aOrientation == ViewsOrientationRotated_180 )
      orient = 180;
    else
      if ( aOrientation == ViewsOrientationRotated_270 )
        orient = 270;

  dstFrameNo = _this->DstFrameNr;
  dstBitmap = _this->Super1.bitmap;
  srcFont = aFont->font;
  tempRect = aClip;
  {
    EwDrawText((XBitmap*)dstBitmap, (XFont*)srcFont, aString + aOffset, aCount,
                dstFrameNo, tempRect, aDstRect, aSrcPos, aMinWidth, orient, aColorTL, aColorTR,
                aColorBR, aColorBL, aBlend );
  }
}

/* The method DrawBitmapFrame() draws a free scalable frame by composing it of bitmap 
   segments. These segments are used to draw the frame's corners, to fill its edges 
   and to fill its interior area. The bitmap has thus to contain nine equal segments 
   arranged in three rows and three columns. The top-left segment e.g. is used to 
   draw the top-left corner of the frame. In contrast, the top-middle segment corresponds 
   to the frame's top edge. If the edge is wider than the segment, multiple copies 
   of the segment are used to fill the entire edge. In this manner the entire frame 
   is composed by simply copying bitmap segments.
   The bitmap is specified in the parameter aBitmap. In case of a multi-frame bitmap 
   the desired frame can be selected in the parameter aFrameNr. The resulting size 
   of the drawn frame is specified by aDstRect parameter. The parameter aEdges control 
   which edges are drawn and which are omitted. Optionally the copied pixel can 
   be modulated by a color gradient specified by the four parameters aColorTL .. 
   aColorBL.
   An additional clipping area aClip limits the operation. All pixel lying outside 
   this area will not be drawn. The last aBlend parameter controls the mode how 
   drawn pixel are combined with the pixel already existing in the destination bitmap. 
   If aBlend is 'true', the drawn pixel are alpha-blended with the background, otherwise 
   the drawn pixel will overwrite the old content. */
void GraphicsCanvas_DrawBitmapFrame( GraphicsCanvas _this, XRect aClip, ResourcesBitmap 
  aBitmap, XInt32 aFrameNr, XRect aDstRect, XSet aEdges, XColor aColorTL, XColor 
  aColorTR, XColor aColorBR, XColor aColorBL, XBool aBlend )
{
  XHandle dstBitmap;
  XHandle srcBitmap;
  XInt32 dstFrameNo;
  XRect srcRect;
  XBool left;
  XBool top;
  XBool right;
  XBool bottom;
  XBool interior;

  if ( _this->Super1.bitmap == 0 )
    ResourcesBitmap__Update( _this );

  if ( _this->Super1.bitmap == 0 )
    return;

  if ((((( aBitmap == 0 ) || ( aBitmap->bitmap == 0 )) || !aEdges ) || ( aFrameNr 
      < 0 )) || ( aFrameNr >= aBitmap->NoOfFrames ))
    return;

  dstBitmap = _this->Super1.bitmap;
  srcBitmap = aBitmap->bitmap;
  dstFrameNo = _this->DstFrameNr;
  srcRect = EwNewRect2Point( _Const0000, aBitmap->FrameSize );
  left = (( aEdges & GraphicsEdgesLeft ) == GraphicsEdgesLeft );
  top = (( aEdges & GraphicsEdgesTop ) == GraphicsEdgesTop );
  right = (( aEdges & GraphicsEdgesRight ) == GraphicsEdgesRight );
  bottom = (( aEdges & GraphicsEdgesBottom ) == GraphicsEdgesBottom );
  interior = (( aEdges & GraphicsEdgesInterior ) == GraphicsEdgesInterior );
  {
    EwDrawBitmapFrame((XBitmap*)dstBitmap, (XBitmap*)srcBitmap, dstFrameNo, aFrameNr,
                       aClip, aDstRect, srcRect, left, top, right, bottom,
                       interior, aColorTL, aColorTR, aColorBR, aColorBL, aBlend );
  }
}

/* The method StrokePath() strokes within the rectangular area aDstRect of canvas 
   a path determined by data stored in the Graphics::Path object aPath. All path 
   coordinates are assumed as being relative to the top-left corner of the aDstRect 
   area, or if the parameter aFlipY is 'true', relative to the bottom-left corner. 
   With the parameter aFlipY equal 'true' the path coordinates are mirrored vertically 
   causing the positive Y-axis to point upwards. With the parameter aOffset the 
   origin of the path coordinate system can be moved within aDstRect. Accordingly 
   modifying this value scrolls the displayed path content.
   The thickness of the path is determined by the parameter aWidth and is expressed 
   in pixel. The parameters aStartCapStyle and aEndCapStyle determine how the start/end 
   position of the path are displayed. The possible values are specified in Graphics::PathCap. 
   Furthermore the parameter aJoinStyle controls how the line segments of the path 
   are connected together. Here the possible values are specified in Graphics::PathJoin. 
   Please note, if aJoinStyle is Graphics::PathJoin.Miter, the additional parameter 
   aMiterLimit determines the max. ratio between the length of the miter and the 
   half of the path thickness (aWidth / 2). If this limit is exceeded, the affected 
   corner is joined with an ordinary bevel (Graphics::PathJoin.Bevel) instead of 
   miter.
   The parameters aColorTL, aColorTR, aColorBL, aColorBR determine the colors at 
   the corresponding corners of the aDstRect area. If the parameter aAntialiased 
   is 'true', the method applies antialiasing while rasterizing the path pixel.
   The parameter aClip limits the drawing operation. Pixel lying outside this area 
   remain unchanged. The aBlend parameter controls the mode how drawn pixel are 
   combined with the pixel already existing in the destination bitmap. If aBlend 
   is 'true', the drawn pixel are alpha-blended with the background, otherwise the 
   drawn pixel will overwrite the old content. */
void GraphicsCanvas_StrokePath( GraphicsCanvas _this, XRect aClip, GraphicsPath 
  aPath, XRect aDstRect, XBool aFlipY, XPoint aOffset, XFloat aWidth, XEnum aStartCapStyle, 
  XEnum aEndCapStyle, XEnum aJoinStyle, XFloat aMiterLimit, XColor aColorTL, XColor 
  aColorTR, XColor aColorBR, XColor aColorBL, XBool aBlend, XBool aAntialiased )
{
  XUInt32 style;
  XHandle dstBitmap;
  XInt32 dstFrameNo;
  XHandle path;

  if ( _this->Super1.bitmap == 0 )
    ResourcesBitmap__Update( _this );

  if ( _this->Super1.bitmap == 0 )
    return;

  if (( aPath == 0 ) || ( aPath->path == 0 ))
    return;

  style = 0;

  switch ( aStartCapStyle )
  {
    case GraphicsPathCapSquare :
      style = 1;
    break;

    case GraphicsPathCapTriangle :
      style = 2;
    break;

    case GraphicsPathCapRound :
      style = 3;
    break;

    default :; 
  }

  switch ( aEndCapStyle )
  {
    case GraphicsPathCapSquare :
      style = style | 256;
    break;

    case GraphicsPathCapTriangle :
      style = style | 512;
    break;

    case GraphicsPathCapRound :
      style = style | 768;
    break;

    default :; 
  }

  switch ( aJoinStyle )
  {
    case GraphicsPathJoinMiter :
      style = style | 65536;
    break;

    case GraphicsPathJoinRound :
      style = style | 131072;
    break;

    default :; 
  }

  dstBitmap = _this->Super1.bitmap;
  dstFrameNo = _this->DstFrameNr;
  path = aPath->path;
  {
    EwStrokePath((XBitmap*)dstBitmap, (XPath*)path, dstFrameNo, aClip, aDstRect, aFlipY,
                  aOffset, aWidth, style, aMiterLimit, aColorTL, aColorTR, aColorBR, 
                  aColorBL, aBlend, aAntialiased );
  }
}

/* The method ScaleBitmap() copies and scales an area of a aBitmap into the canvas. 
   The bitmap is specified in the parameter aBitmap and the desired area to copy 
   in aSrcRect. In case of a multi-frame bitmap the desired frame can be selected 
   in the parameter aFrameNr.
   The destination area in canvas is determined by the parameter aDstRect. The parameters 
   aColorTL, aColorTR, aColorBL, aColorBR determine the colors or opacities at the 
   corresponding corners of the aDstRect area.
   The parameter aClip limits the drawing operation. Pixel lying outside this area 
   remain unchanged. The aBlend parameter controls the mode how drawn pixel are 
   combined with the pixel already existing in the destination bitmap. If aBlend 
   is 'true', the drawn pixel are alpha-blended with the background, otherwise the 
   drawn pixel will overwrite the old content. The last parameter aFilter controls 
   the bi-linear filter. If aFilter is 'true', the source bitmap pixel will be bi-linear 
   filtered in order to get better output. */
void GraphicsCanvas_ScaleBitmap( GraphicsCanvas _this, XRect aClip, ResourcesBitmap 
  aBitmap, XInt32 aFrameNr, XRect aDstRect, XRect aSrcRect, XColor aColorTL, XColor 
  aColorTR, XColor aColorBR, XColor aColorBL, XBool aBlend, XBool aFilter )
{
  XFloat top;
  XFloat left;
  XFloat right;
  XFloat bottom;
  XHandle dstBitmap;
  XHandle srcBitmap;
  XInt32 dstFrameNo;

  if ( _this->Super1.bitmap == 0 )
    ResourcesBitmap__Update( _this );

  if ( _this->Super1.bitmap == 0 )
    return;

  if (((( aBitmap == 0 ) || ( aBitmap->bitmap == 0 )) || ( aFrameNr < 0 )) || ( 
      aFrameNr >= aBitmap->NoOfFrames ))
    return;

  top = (XFloat)aDstRect.Point1.Y;
  left = (XFloat)aDstRect.Point1.X;
  right = (XFloat)aDstRect.Point2.X;
  bottom = (XFloat)aDstRect.Point2.Y;

  if ((((( right - left ) > 4096.0f ) || (( right - left ) < -4096.0f )) || (( bottom 
      - top ) > 4096.0f )) || (( bottom - top ) < -4096.0f ))
  {
    EwTrace( "%s", EwLoadString( &_Const0006 ));
    return;
  }

  dstBitmap = _this->Super1.bitmap;
  srcBitmap = aBitmap->bitmap;
  dstFrameNo = _this->DstFrameNr;
  {
    EwWarpBitmap((XBitmap*)dstBitmap, (XBitmap*)srcBitmap, dstFrameNo, aFrameNr, aClip,
                  left,  top,    1.0f, right, top,    1.0f,
                  right, bottom, 1.0f, left,  bottom, 1.0f,
                  aSrcRect, aColorTL, aColorTR, aColorBR, aColorBL, aBlend, aFilter );
  }
}

/* The method CopyBitmap() copies an area of a aBitmap into the canvas. The bitmap 
   is specified in the parameter aBitmap. In case of a multi-frame bitmap the desired 
   frame can be selected in the parameter aFrameNr.
   The area to copy the bitmap is determined by the parameter aDstRect. The optional 
   aSrcPos parameter determines a displacement of the bitmap within this aDstRect 
   area. The parameters aColorTL, aColorTR, aColorBL, aColorBR determine the colors 
   or opacities at the corresponding corners of the aDstRect area.
   The parameter aClip limits the drawing operation. Pixel lying outside this area 
   remain unchanged. The last aBlend parameter controls the mode how drawn pixel 
   are combined with the pixel already existing in the destination bitmap. If aBlend 
   is 'true', the drawn pixel are alpha-blended with the background, otherwise the 
   drawn pixel will overwrite the old content. */
void GraphicsCanvas_CopyBitmap( GraphicsCanvas _this, XRect aClip, ResourcesBitmap 
  aBitmap, XInt32 aFrameNr, XRect aDstRect, XPoint aSrcPos, XColor aColorTL, XColor 
  aColorTR, XColor aColorBR, XColor aColorBL, XBool aBlend )
{
  XHandle dstBitmap;
  XHandle srcBitmap;
  XInt32 dstFrameNr;

  if ( _this->Super1.bitmap == 0 )
    ResourcesBitmap__Update( _this );

  if ( _this->Super1.bitmap == 0 )
    return;

  if (((( aBitmap == 0 ) || ( aBitmap->bitmap == 0 )) || ( aFrameNr < 0 )) || ( 
      aFrameNr >= aBitmap->NoOfFrames ))
    return;

  dstBitmap = _this->Super1.bitmap;
  srcBitmap = aBitmap->bitmap;
  dstFrameNr = _this->DstFrameNr;
  {
    EwCopyBitmap((XBitmap*)dstBitmap, (XBitmap*)srcBitmap, dstFrameNr, aFrameNr,
                  aClip, aDstRect, aSrcPos, aColorTL, aColorTR, aColorBR, aColorBL,
                  aBlend );
  }
}

/* The method FillPath() fills within the rectangular area aDstRect of canvas a 
   polygon determined by data stored in the Graphics::Path object aPath. All path 
   coordinates are assumed as being relative to the top-left corner of the aDstRect 
   area, or if the parameter aFlipY is 'true', relative to the bottom-left corner. 
   With the parameter aFlipY equal 'true' the path coordinates are additionally 
   mirrored vertically causing the positive Y-axis to point upwards. With the parameter 
   aOffset the origin of the path coordinate system can be moved within aDstRect. 
   Accordingly modifying this value scrolls the displayed path content.
   The parameters aColorTL, aColorTR, aColorBL, aColorBR determine the colors at 
   the corresponding corners of the aDstRect area. If the parameter aAntialiased 
   is 'true', the method applies antialiasing while rasterizing the path pixel. 
   The parameter aFillRule controls the fill algorithm how it treats nested polygon 
   areas. The possible values are specified in Graphics::FillRule.
   The parameter aClip limits the drawing operation. Pixel lying outside this area 
   remain unchanged. The aBlend parameter controls the mode how drawn pixel are 
   combined with the pixel already existing in the destination bitmap. If aBlend 
   is 'true', the drawn pixel are alpha-blended with the background, otherwise the 
   drawn pixel will overwrite the old content. */
void GraphicsCanvas_FillPath( GraphicsCanvas _this, XRect aClip, GraphicsPath aPath, 
  XRect aDstRect, XBool aFlipY, XPoint aOffset, XColor aColorTL, XColor aColorTR, 
  XColor aColorBR, XColor aColorBL, XBool aBlend, XBool aAntialiased, XEnum aFillRule )
{
  XBool nonZeroWinding;
  XHandle dstBitmap;
  XInt32 dstFrameNo;
  XHandle path;

  if ( _this->Super1.bitmap == 0 )
    ResourcesBitmap__Update( _this );

  if ( _this->Super1.bitmap == 0 )
    return;

  if (( aPath == 0 ) || ( aPath->path == 0 ))
    return;

  nonZeroWinding = (XBool)( aFillRule == GraphicsFillRuleNonZero );
  dstBitmap = _this->Super1.bitmap;
  dstFrameNo = _this->DstFrameNr;
  path = aPath->path;
  {
    EwFillPath((XBitmap*)dstBitmap, (XPath*)path, dstFrameNo, aClip, aDstRect, aFlipY,
                aOffset, aColorTL, aColorTR, aColorBR, aColorBL, aBlend, aAntialiased,
                nonZeroWinding );
  }
}

/* The method FillRectangle() fills an area of canvas. The area is determined by 
   the parameter aDstRect. The parameters aColorTL, aColorTR, aColorBL, aColorBR 
   determine the colors at the corresponding corners of the aDstRect area.
   The parameter aClip limits the drawing operation. Pixel lying outside this area 
   remain unchanged. The last aBlend parameter controls the mode how drawn pixel 
   are combined with the pixel already existing in the destination bitmap. If aBlend 
   is 'true', the drawn pixel are alpha-blended with the background, otherwise the 
   drawn pixel will overwrite the old content. */
void GraphicsCanvas_FillRectangle( GraphicsCanvas _this, XRect aClip, XRect aDstRect, 
  XColor aColorTL, XColor aColorTR, XColor aColorBR, XColor aColorBL, XBool aBlend )
{
  XHandle dstBitmap;
  XInt32 dstFrameNo;

  if ( _this->Super1.bitmap == 0 )
    ResourcesBitmap__Update( _this );

  if ( _this->Super1.bitmap == 0 )
    return;

  dstBitmap = _this->Super1.bitmap;
  dstFrameNo = _this->DstFrameNr;
  {
    EwFillRectangle((XBitmap*)dstBitmap, dstFrameNo, aClip, aDstRect, aColorTL, aColorTR,
                     aColorBR, aColorBL, aBlend );
  }
}

/* 'C' function for method : 'Graphics::Canvas.DrawThickLine()' */
void GraphicsCanvas_DrawThickLine( GraphicsCanvas _this, XRect aClip, XPoint aDstPos1, 
  XPoint aDstPos2, XInt32 aWidth1, XInt32 aWidth2, XColor aColor1, XColor aColor2, 
  XBool aBlend )
{
  XInt32 w1;
  XInt32 w2;
  XPoint p1;
  XPoint p2;
  XFloat fw1;
  XFloat fw2;
  XFloat fp1X;
  XFloat fp1Y;
  XFloat fp2X;
  XFloat fp2Y;
  XFloat dirX;
  XFloat dirY;
  XFloat len;
  XFloat x1;
  XFloat y1;
  XFloat x2;
  XFloat y2;
  XFloat x3;
  XFloat y3;
  XFloat x4;
  XFloat y4;
  ResourcesBitmap opaqueBitmap;
  XRect srcRect;
  XHandle dstBitmap;
  XInt32 dstFrameNo;
  XHandle srcBitmap;

  if ( _this->Super1.bitmap == 0 )
    ResourcesBitmap__Update( _this );

  if ( _this->Super1.bitmap == 0 )
    return;

  w1 = aWidth1;
  w2 = aWidth2;
  p1 = aDstPos1;
  p2 = aDstPos2;

  if ( !EwCompPoint( p1, p2 ))
    return;

  if ( w1 <= 1 )
    w1 = 1;

  if ( w2 <= 1 )
    w2 = 1;

  fw1 = (XFloat)w1 / 2.0f;
  fw2 = (XFloat)w2 / 2.0f;
  fp1X = (XFloat)p1.X;
  fp1Y = (XFloat)p1.Y;
  fp2X = (XFloat)p2.X;
  fp2Y = (XFloat)p2.Y;
  dirX = fp2X - fp1X;
  dirY = fp2Y - fp1Y;
  len = EwMathSqrt(( dirX * dirX ) + ( dirY * dirY ));

  if ((( w1 > 4096 ) || ( w2 > 4096 )) || ( len > 4096.0f ))
  {
    EwTrace( "%s", EwLoadString( &_Const0007 ));
    return;
  }

  dirX = dirX / len;
  dirY = dirY / len;
  x1 = fp1X + ( dirY * fw1 );
  y1 = fp1Y - ( dirX * fw1 );
  x2 = fp2X + ( dirY * fw2 );
  y2 = fp2Y - ( dirX * fw2 );
  x3 = fp2X - ( dirY * fw2 );
  y3 = fp2Y + ( dirX * fw2 );
  x4 = fp1X - ( dirY * fw1 );
  y4 = fp1Y + ( dirX * fw1 );
  opaqueBitmap = EwLoadResource( &ResourcesWhiteBitmapStripe, ResourcesBitmap );
  srcRect = EwNewRect2Point( _Const0008, EwMovePointNeg( opaqueBitmap->FrameSize, 
  _Const0009 ));
  dstBitmap = _this->Super1.bitmap;
  dstFrameNo = _this->DstFrameNr;
  srcBitmap = opaqueBitmap->bitmap;
  {
    EwWarpBitmap((XBitmap*)dstBitmap, (XBitmap*)srcBitmap, dstFrameNo, 0, aClip,
                  x1, y1, 1.0f, x2, y2, 1.0f, x3, y3, 1.0f, x4, y4, 1.0f, 
                  srcRect, aColor1, aColor2, aColor2, aColor1, aBlend, 0 );
  }
}

/* The method DrawLine() draws a line into the canvas. The line will be drawn from 
   the aDstPos1 point to the aDstPos2 point with the given colors aColor1 and aColor2.
   The parameter aClip limits the drawing operation. Pixel lying outside this area 
   remain unchanged. The last aBlend parameter controls the mode how drawn pixel 
   are combined with the pixel already existing in the destination bitmap. If aBlend 
   is 'true', the drawn pixel are alpha-blended with the background, otherwise the 
   drawn pixel will overwrite the old content. */
void GraphicsCanvas_DrawLine( GraphicsCanvas _this, XRect aClip, XPoint aDstPos1, 
  XPoint aDstPos2, XColor aColor1, XColor aColor2, XBool aBlend )
{
  XHandle dstBitmap;
  XInt32 dstFrameNo;

  if ( _this->Super1.bitmap == 0 )
    ResourcesBitmap__Update( _this );

  if ( _this->Super1.bitmap == 0 )
    return;

  dstBitmap = _this->Super1.bitmap;
  dstFrameNo = _this->DstFrameNr;
  {
    EwDrawLine((XBitmap*)dstBitmap, dstFrameNo, aClip, aDstPos1, aDstPos2, aColor1,
                aColor2, aBlend );
  }
}

/* Variants derived from the class : 'Graphics::Canvas' */
EW_DEFINE_CLASS_VARIANTS( GraphicsCanvas )
EW_END_OF_CLASS_VARIANTS( GraphicsCanvas )

/* Virtual Method Table (VMT) for the class : 'Graphics::Canvas' */
EW_DEFINE_CLASS( GraphicsCanvas, ResourcesBitmap, group, group, OnDraw, InvalidArea, 
                 InvalidArea, InvalidArea, "Graphics::Canvas" )
  GraphicsCanvas_OnSetFrameSize,
  GraphicsCanvas_Update,
EW_END_OF_CLASS( GraphicsCanvas )

/* Initializer for the class 'Graphics::Path' */
void GraphicsPath__Init( GraphicsPath _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( GraphicsPath );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( GraphicsPath );
}

/* Re-Initializer for the class 'Graphics::Path' */
void GraphicsPath__ReInit( GraphicsPath _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Graphics::Path' */
void GraphicsPath__Done( GraphicsPath _this )
{
  /* Call the user defined destructor of the class */
  GraphicsPath_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( XObject );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_.Super );
}

/* 'C' function for method : 'Graphics::Path.Done()' */
void GraphicsPath_Done( GraphicsPath _this )
{
  XHandle handle;

  if ( _this->path == 0 )
    return;

  handle = _this->path;
  EwFreePath((XPath*)handle );
  _this->path = 0;
}

/* 'C' function for method : 'Graphics::Path.onUpdate()' */
void GraphicsPath_onUpdate( GraphicsPath _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwNotifyObjObservers((XObject)_this, 0 );
}

/* The method AddArc() adds to the sub-path a new elliptical arc composed of exact 
   aNoOfEdges straight line segments. The more edges the more smooth the resulting 
   curve. The center of the ellipse is determined in the parameters aCenterX, aCenterY. 
   The parameters aRadiusX and aRadiusY determine the horizontal and vertical radius 
   of the ellipse. The start and the end angle of the arc is determined in the parameters 
   aStartAngle and aEndAngle, both expressed in degree and measured clockwise relative 
   to the positive X-axis of the path coordinate system.
   If the absolute difference between aStartAngle and aEndAngle is equal to or greater 
   than 360.0, the method calculates with a closed ellipse instead of an opened 
   arc. If the parameters aRadiusX and aRadiusY are equal, the method calculates 
   with a circle instead of an ellipse.
   If the affected sub-path contains already curve information, the end of the last 
   existing segment and the start of the new arc (resulting from the parameter aStartAngle) 
   are connected with an additional straight line segment. Similarly, if start position 
   for the sub-path has been specified by using the @Begin() method, an additional 
   line segment is added to connect the arc with the given sub-path start position. 
   After the elliptical arc curve is added, the sub-path actual position is adjusted 
   to refer to the end of the last line segment of the curve (resulting from the 
   parameter aEndAngle).
   The specified position aX, aY is relative to the origin of the path coordinate 
   system. If the path own matrix is not an identity matrix, the corresponding transformations 
   are applied on the resulting arc segments before storing them in the sub-path. 
   See methods @Translate(), @Scale() and @Rotate().
   The method returns the index of the node within the sub-path where the start 
   position of the first arc line segment has been stored (parameter aStartAngle). 
   Knowing this index and the number of segments the arc curve is composed of (aNoOfEdges), 
   the position of every arc line segment can be modified later by using the method 
   @SetNode().
   If the sub-path has not been initialized previously by using the method @InitSubPath(), 
   the sub-path has been closed by @Close() method or the memory reserved for the 
   sub-path (see parameter aMaxNoOfEdges in the method @InitSubPath()) is occupied 
   by other edges so no sufficient space is available to accommodate aNoOfEdges 
   new segments, the method fails and returns 0.
   The affected sub-path is determined in the parameter aSubPathNo. Within the path 
   all existing sub-paths are numbered starting with the value 0 for the first sub-path, 
   1 for the second and so far. The maximum number of sub-paths the path can manage 
   is determined by the method @SetMaxNoOfSubPaths(). */
XInt32 GraphicsPath_AddArc( GraphicsPath _this, XInt32 aSubPathNo, XFloat aCenterX, 
  XFloat aCenterY, XFloat aRadiusX, XFloat aRadiusY, XFloat aStartAngle, XFloat 
  aEndAngle, XInt32 aNoOfEdges )
{
  XHandle handle;
  XInt32 result;

  EwPostSignal( EwNewSlot( _this, GraphicsPath_onUpdate ), ((XObject)_this ));
  handle = _this->path;
  result = 0;
  {
    result = EwAddSubPathArc((XPath*)handle, aSubPathNo, aCenterX, aCenterY,
                              aRadiusX, aRadiusY, aStartAngle, aEndAngle,
                              aNoOfEdges );
  }
  return result;
}

/* The method AddBezier3() appends between the actual position of the sub-path and 
   the position aX, aY a new cubic B�zier curve composed of exact aNoOfEdges straight 
   line segments. The more edges the more smooth the resulting curve. The both B�zier 
   curve control points are determined in the parameters aCP1X, aCP1Y and aCP2X, 
   aCP2Y. After the B�zier curve is added, the sub-path actual position is adjusted 
   to refer to the end of the last line segment of the curve (position aX, aY).
   Within a sub-path the actual position is either the end position of the preceding 
   sub-path segment or it is the value specified in the invocation of the @Begin() 
   method. If the sub-path is empty and no start position has been specified in 
   the preceding @Begin() invocation, the method assumes the origin of the path 
   coordinate system (X=0, Y=0) as the start position for the new curve.
   The specified positions aCP1X, aCP1Y, aCP2X, aCP2, aX, aY are relative to the 
   origin of the path coordinate system. If the path own matrix is not an identity 
   matrix, the corresponding transformations are applied on the positions before 
   calculating the B�zier curve and storing the resulting line segments it in the 
   sub-path. See methods @Translate(), @Scale() and @Rotate().
   The method returns the index of the node within the sub-path where the end position 
   of the first B�zier line segment has been stored. Knowing this index and the 
   number of segments the B�zier curve is composed of (parameter aNoOfEdges), the 
   position of every B�zier line segment can be modified later by using the method 
   @SetNode().
   If the sub-path has not been initialized previously by using the method @InitSubPath(), 
   the sub-path has been closed by @Close() method or the memory reserved for the 
   sub-path (see parameter aMaxNoOfEdges in the method @InitSubPath()) is occupied 
   by other edges so no sufficient space is available to accommodate aNoOfEdges 
   new segments, the method fails and returns 0.
   The affected sub-path is determined in the parameter aSubPathNo. Within the path 
   all existing sub-paths are numbered starting with the value 0 for the first sub-path, 
   1 for the second and so far. The maximum number of sub-paths the path can manage 
   is determined by the method @SetMaxNoOfSubPaths(). */
XInt32 GraphicsPath_AddBezier3( GraphicsPath _this, XInt32 aSubPathNo, XFloat aCP1X, 
  XFloat aCP1Y, XFloat aCP2X, XFloat aCP2Y, XFloat aX, XFloat aY, XInt32 aNoOfEdges )
{
  XHandle handle;
  XInt32 result;

  EwPostSignal( EwNewSlot( _this, GraphicsPath_onUpdate ), ((XObject)_this ));
  handle = _this->path;
  result = 0;
  {
    result = EwAddSubPathBezier3((XPath*)handle, aSubPathNo, aCP1X, aCP1Y, aCP2X, aCP2Y,
                                  aX, aY, aNoOfEdges );
  }
  return result;
}

/* The method Close() marks the affected sub-path as closed. The method verifies 
   whether the first and the last position of the sub-path are equal and if this 
   is not the case, adds an additional straight line segment to the sub-path in 
   order to connect them together.
   Once the method is invoked, no additional path information can be added to the 
   affected sub-path unless it is initialized or cleared again by using the method 
   @InitSubPath() or @Begin(). If the affected sub-path is empty, the method returns 
   without any effect.
   Within the path all existing sub-paths are numbered starting with the value 0 
   for the first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). */
void GraphicsPath_Close( GraphicsPath _this, XInt32 aSubPathNo )
{
  XHandle handle;

  EwPostSignal( EwNewSlot( _this, GraphicsPath_onUpdate ), ((XObject)_this ));
  handle = _this->path;
  EwCloseSubPath((XPath*)handle, aSubPathNo );
}

/* The method Begin() sets the parameters aX, aY as the start position for the sub-path 
   with the specified number aSubPathNo. The affected sub-path has to be initialized 
   previously by invoking the method @InitSubPath(). Beginning with the specified 
   position, the path can be filled with curve data by using methods like @AddLine(), 
   @AddBezier2(), @AddArc(), etc.
   The specified position aX, aY is relative to the origin of the path coordinate 
   system. If the path own matrix is not an identity matrix, the corresponding transformations 
   are applied on the position before storing it in the sub-path. See methods @Translate(), 
   @Scale() and @Rotate().
   Every sub-path contains exact one start position. Calling this method for a sub-path 
   being already filled with edge coordinates will clear the actual sub-path as 
   if the @InitSubPath() method has been called before.
   Within the path all existing sub-paths are numbered starting with the value 0 
   for the first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). */
void GraphicsPath_Begin( GraphicsPath _this, XInt32 aSubPathNo, XFloat aX, XFloat 
  aY )
{
  XHandle handle;

  EwPostSignal( EwNewSlot( _this, GraphicsPath_onUpdate ), ((XObject)_this ));
  handle = _this->path;
  EwBeginSubPath((XPath*)handle, aSubPathNo, aX, aY );
}

/* The method InitSubPath() prepares the sub-path with the number aSubPathNo to 
   be able to store up to aMaxNoOfEdges path edges (straight line segments). With 
   this operation memory for the sub-path data is reserved. Initially the just initialized 
   sub-path is considered as being empty. To fill the sub-path with data use the 
   methods like @AddLine(), @AddBezier2(), @AddArc(), etc.
   If the affected sub-path has been already initialized in the past, the old information 
   is discarded before initializing the new sub-path. Passing 0 (zero) in the parameter 
   aMaxNoOfEdges results in the old sub-path data being simply released without 
   allocating the memory for the new sub-path.
   If successful, the method returns 'true'. If there is no memory available for 
   the specified number of edges, the method fails and 'false' is returned leaving 
   the sub-path not initialized. Similarly, trying to initialize a sub-path not 
   existing in the path causes the method to return 'false'.
   Within the path all existing sub-paths are numbered starting with the value 0 
   for the first sub-path, 1 for the second and so far. The maximum number of sub-paths 
   the path can manage is determined by the method @SetMaxNoOfSubPaths(). */
XBool GraphicsPath_InitSubPath( GraphicsPath _this, XInt32 aSubPathNo, XInt32 aMaxNoOfEdges )
{
  XHandle handle;
  XBool result;

  if (( _this->path == 0 ) && ( aSubPathNo == 0 ))
    GraphicsPath_SetMaxNoOfSubPaths( _this, 1 );

  EwPostSignal( EwNewSlot( _this, GraphicsPath_onUpdate ), ((XObject)_this ));
  handle = _this->path;
  result = 0;
  result = EwInitSubPath((XPath*)handle, aSubPathNo, aMaxNoOfEdges );
  return result;
}

/* The method GetMaxNoOfSubPaths() returns how many sub-paths the affected path 
   can maximally store. The returned value corresponds to the parameter passed in 
   the invocation of the @SetMaxNoOfSubPaths() method. */
XInt32 GraphicsPath_GetMaxNoOfSubPaths( GraphicsPath _this )
{
  XHandle handle;
  XInt32 result;

  if ( _this->path == 0 )
    return 1;

  handle = _this->path;
  result = 0;
  result = EwGetMaxNoOfSubPaths((XPath*)handle );
  return result;
}

/* The method SetMaxNoOfSubPaths() changes the number of sub-paths the affected 
   path can maximally manage to the specified value aMaxNoOfSubPaths. After modifying 
   its size the affected path is empty. This means all contents of previously existing 
   sub-paths are discarded. Before new path data can be stored in a sub-path the 
   method @InitSubPath() should be called. Please note, if the size of the path 
   does already correspond to the parameter aMaxNoOfSubPaths, the path remains unaffected 
   and retains all existing contents.
   The method returns 'true' if the path could be initialized with the new size. 
   In case, there is no sufficient memory to store the desired number of sub-paths, 
   the method fails and returns 'false' leaving the path empty. */
XBool GraphicsPath_SetMaxNoOfSubPaths( GraphicsPath _this, XInt32 aMaxNoOfSubPaths )
{
  XHandle handle;

  if ( aMaxNoOfSubPaths < 1 )
    aMaxNoOfSubPaths = 1;

  if (( _this->path != 0 ) && ( GraphicsPath_GetMaxNoOfSubPaths( _this ) == aMaxNoOfSubPaths ))
    return 1;

  handle = _this->path;
  {
    EwFreePath((XPath*)handle );
    handle = (XHandle)EwCreatePath( aMaxNoOfSubPaths );
  }
  _this->path = handle;
  EwPostSignal( EwNewSlot( _this, GraphicsPath_onUpdate ), ((XObject)_this ));
  return (XBool)( _this->path != 0 );
}

/* Variants derived from the class : 'Graphics::Path' */
EW_DEFINE_CLASS_VARIANTS( GraphicsPath )
EW_END_OF_CLASS_VARIANTS( GraphicsPath )

/* Virtual Method Table (VMT) for the class : 'Graphics::Path' */
EW_DEFINE_CLASS( GraphicsPath, XObject, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 "Graphics::Path" )
EW_END_OF_CLASS( GraphicsPath )

/* Initializer for the class 'Graphics::ArcPath' */
void GraphicsArcPath__Init( GraphicsArcPath _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  GraphicsPath__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( GraphicsArcPath );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( GraphicsArcPath );

  /* ... and initialize objects, variables, properties, etc. */
  _this->EndAngle = 360.0f;
  _this->Style = GraphicsArcStyleArc;
}

/* Re-Initializer for the class 'Graphics::ArcPath' */
void GraphicsArcPath__ReInit( GraphicsArcPath _this )
{
  /* At first re-initialize the super class ... */
  GraphicsPath__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Graphics::ArcPath' */
void GraphicsArcPath__Done( GraphicsArcPath _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( GraphicsPath );

  /* Don't forget to deinitialize the super class ... */
  GraphicsPath__Done( &_this->_.Super );
}

/* 'C' function for method : 'Graphics::ArcPath.updatePath()' */
void GraphicsArcPath_updatePath( GraphicsArcPath _this, XObject sender )
{
  XFloat angle;
  XInt32 noOfEdges;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  angle = _this->EndAngle;
  noOfEdges = _this->NoOfEdges;

  if (( angle >= 360.0f ) || ( angle <= -360.0f ))
    angle = 360.0f;

  GraphicsPath_SetMaxNoOfSubPaths((GraphicsPath)_this, 2 );

  if ( noOfEdges == 0 )
  {
    XFloat r = EwGetFloatMax( 2, _this->RadiusX, _this->RadiusY );
    noOfEdges = 1 + ( 90 / (XInt32)EwMathArcCos( 1.0f - ( 0.5f / ( r + 1.0f ))));
    noOfEdges *= 4;

    if ( angle < 360.0f )
      noOfEdges = (XInt32)(( angle * noOfEdges ) / 360.0f );

    noOfEdges = EwGetInt32Max( 3, noOfEdges, -noOfEdges, 1 );
  }

  if (((( angle == 0.0f ) || ( _this->RadiusX == 0.0f )) || ( _this->RadiusY == 
      0.0f )) || ((((( _this->Style == GraphicsArcStylePie ) || ( _this->Style == 
      GraphicsArcStylePieRounded )) || ( _this->Style == GraphicsArcStylePieRoundedStart )) 
      || ( _this->Style == GraphicsArcStylePieRoundedEnd )) && (( 0.0f >= _this->RadiusX ) 
      || ( 0.0f >= _this->RadiusY ))))
  {
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, 0 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );
    return;
  }

  if ( angle == 360.0f )
  {
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, noOfEdges + 1 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );
    GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
    0.0f, 360.0f, noOfEdges );
    GraphicsPath_Close((GraphicsPath)_this, 0 );
    return;
  }

  if ( _this->Style == GraphicsArcStyleArc )
  {
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, noOfEdges + 1 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );
    GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
    0.0f, angle, noOfEdges );
    return;
  }

  if ( _this->Style == GraphicsArcStyleSegment )
  {
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, noOfEdges + 1 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );
    GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
    0.0f, angle, noOfEdges );
    GraphicsPath_Close((GraphicsPath)_this, 0 );
    return;
  }

  if ( _this->Style == GraphicsArcStylePie )
  {
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, noOfEdges + 1 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );
    GraphicsPath_Begin((GraphicsPath)_this, 0, 0.0f, 0.0f );
    GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
    0.0f, angle, noOfEdges );
    GraphicsPath_Close((GraphicsPath)_this, 0 );
    return;
  }

  if ( _this->Style == GraphicsArcStylePieRoundedStart )
  {
    XFloat ox = _this->RadiusX;
    XFloat dia = EwMathSqrt( ox * ox );
    XInt32 noOfEdgesDia = (XInt32)( dia * 0.25f ) + 3;
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, ( noOfEdges + noOfEdgesDia ) 
    + 2 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );
    GraphicsPath_Begin((GraphicsPath)_this, 0, 0.0f, 0.0f );

    if ( angle >= 0.0f )
      GraphicsPath_AddArc((GraphicsPath)_this, 0, ox / 2.0f, 0.0f, dia / 2.0f, dia 
      / 2.0f, 180.0f, 360.0f, noOfEdgesDia );
    else
      GraphicsPath_AddArc((GraphicsPath)_this, 0, ox / 2.0f, 0.0f, dia / 2.0f, dia 
      / 2.0f, 180.0f, 0.0f, noOfEdgesDia );

    GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
    0.0f, angle, noOfEdges );
    GraphicsPath_Close((GraphicsPath)_this, 0 );
    return;
  }

  if ( _this->Style == GraphicsArcStylePieRoundedEnd )
  {
    XFloat ea = angle;
    XFloat ox = _this->RadiusX * EwMathCos( ea );
    XFloat oy = _this->RadiusY * EwMathSin( ea );
    XFloat dia = EwMathSqrt(( ox * ox ) + ( oy * oy ));
    XInt32 noOfEdgesDia = (XInt32)( dia * 0.25f ) + 3;
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, ( noOfEdges + noOfEdgesDia ) 
    + 2 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );
    GraphicsPath_Begin((GraphicsPath)_this, 0, 0.0f, 0.0f );
    GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
    0.0f, angle, noOfEdges );

    if ( angle >= 0.0f )
      GraphicsPath_AddArc((GraphicsPath)_this, 0, ox / 2.0f, oy / 2.0f, dia / 2.0f, 
      dia / 2.0f, ea, ea + 180.0f, noOfEdgesDia );
    else
      GraphicsPath_AddArc((GraphicsPath)_this, 0, ox / 2.0f, oy / 2.0f, dia / 2.0f, 
      dia / 2.0f, ea, ea - 180.0f, noOfEdgesDia );

    GraphicsPath_Close((GraphicsPath)_this, 0 );
    return;
  }

  if ( _this->Style == GraphicsArcStylePieRounded )
  {
    XFloat sox = _this->RadiusX;
    XFloat sdia = EwMathSqrt( sox * sox );
    XFloat ea = angle;
    XFloat eox = _this->RadiusX * EwMathCos( ea );
    XFloat eoy = _this->RadiusY * EwMathSin( ea );
    XFloat edia = EwMathSqrt(( eox * eox ) + ( eoy * eoy ));
    XInt32 noOfEdgesSDia = (XInt32)( sdia * 0.25f ) + 3;
    XInt32 noOfEdgesEDia = (XInt32)( edia * 0.25f ) + 3;
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, (( noOfEdges + noOfEdgesSDia ) 
    + noOfEdgesEDia ) + 10 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );
    GraphicsPath_Begin((GraphicsPath)_this, 0, 0.0f, 0.0f );

    if ( angle >= 0.0f )
    {
      GraphicsPath_AddArc((GraphicsPath)_this, 0, sox / 2.0f, 0.0f, sdia / 2.0f, 
      sdia / 2.0f, 180.0f, 360.0f, noOfEdgesSDia );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
      0.0f, angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, eox / 2.0f, eoy / 2.0f, edia / 
      2.0f, edia / 2.0f, ea, ea + 180.0f, noOfEdgesEDia );
    }
    else
    {
      GraphicsPath_AddArc((GraphicsPath)_this, 0, sox / 2.0f, 0.0f, sdia / 2.0f, 
      sdia / 2.0f, 180.0f, 0.0f, noOfEdgesSDia );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
      0.0f, angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, eox / 2.0f, eoy / 2.0f, edia / 
      2.0f, edia / 2.0f, ea, ea - 180.0f, noOfEdgesEDia );
    }

    GraphicsPath_Close((GraphicsPath)_this, 0 );
    return;
  }

  if ( _this->Style == GraphicsArcStylePie )
  {
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, ( noOfEdges * 2 ) + 1 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );
    GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
    0.0f, angle, noOfEdges );
    GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, 0.0f, 0.0f, _this->EndAngle, 
    _this->EndAngle - angle, noOfEdges );
    GraphicsPath_Close((GraphicsPath)_this, 0 );
    return;
  }

  if ( _this->Style == GraphicsArcStylePieRoundedStart )
  {
    XFloat ox = _this->RadiusX;
    XFloat dia = EwMathSqrt( ox * ox );
    XInt32 noOfEdgesDia = (XInt32)( dia * 0.25f ) + 3;
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, (( noOfEdges * 2 ) + noOfEdgesDia ) 
    + 2 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );

    if ( angle >= 0.0f )
    {
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
      0.0f, angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, 0.0f, 0.0f, _this->EndAngle, 
      _this->EndAngle - angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, ox / 2.0f, 0.0f, dia / 2.0f, dia 
      / 2.0f, 180.0f, 360.0f, noOfEdgesDia );
    }
    else
    {
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
      0.0f, angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, 0.0f, 0.0f, _this->EndAngle, 
      _this->EndAngle - angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, ox / 2.0f, 0.0f, dia / 2.0f, dia 
      / 2.0f, 180.0f, 0.0f, noOfEdgesDia );
    }

    GraphicsPath_Close((GraphicsPath)_this, 0 );
    return;
  }

  if ( _this->Style == GraphicsArcStylePieRoundedEnd )
  {
    XFloat ea = angle;
    XFloat sin = EwMathSin( ea );
    XFloat cos = EwMathCos( ea );
    XFloat ox = _this->RadiusX * cos;
    XFloat oy = _this->RadiusY * sin;
    XFloat dia = EwMathSqrt(( ox * ox ) + ( oy * oy ));
    XInt32 noOfEdgesDia = (XInt32)( dia * 0.25f ) + 3;
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, (( noOfEdges * 2 ) + noOfEdgesDia ) 
    + 2 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );

    if ( angle >= 0.0f )
    {
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
      0.0f, angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, ox / 2.0f, oy / 2.0f, dia / 2.0f, 
      dia / 2.0f, ea, ea + 180.0f, noOfEdgesDia );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, 0.0f, 0.0f, _this->EndAngle, 
      _this->EndAngle - angle, noOfEdges );
    }
    else
    {
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
      0.0f, angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, ox / 2.0f, oy / 2.0f, dia / 2.0f, 
      dia / 2.0f, ea, ea - 180.0f, noOfEdgesDia );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, 0.0f, 0.0f, _this->EndAngle, 
      _this->EndAngle - angle, noOfEdges );
    }

    GraphicsPath_Close((GraphicsPath)_this, 0 );
    return;
  }

  if ( _this->Style == GraphicsArcStylePieRounded )
  {
    XFloat ea = angle;
    XFloat esin = EwMathSin( ea );
    XFloat ecos = EwMathCos( ea );
    XFloat sox = _this->RadiusX;
    XFloat eox = _this->RadiusX * ecos;
    XFloat eoy = _this->RadiusY * esin;
    XFloat sdia = EwMathSqrt( sox * sox );
    XFloat edia = EwMathSqrt(( eox * eox ) + ( eoy * eoy ));
    XInt32 noOfEdgesSDia = (XInt32)( sdia * 0.25f ) + 3;
    XInt32 noOfEdgesEDia = (XInt32)( edia * 0.25f ) + 3;
    GraphicsPath_InitSubPath((GraphicsPath)_this, 0, ((( noOfEdges * 2 ) + noOfEdgesSDia ) 
    + noOfEdgesEDia ) + 4 );
    GraphicsPath_InitSubPath((GraphicsPath)_this, 1, 0 );

    if ( angle >= 0.0f )
    {
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
      0.0f, angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, eox / 2.0f, eoy / 2.0f, edia / 
      2.0f, edia / 2.0f, ea, ea + 180.0f, noOfEdgesEDia );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, 0.0f, 0.0f, _this->EndAngle, 
      _this->EndAngle - angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, sox / 2.0f, 0.0f, sdia / 2.0f, 
      sdia / 2.0f, 180.0f, 360.0f, noOfEdgesSDia );
    }
    else
    {
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, _this->RadiusX, _this->RadiusY, 
      0.0f, angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, eox / 2.0f, eoy / 2.0f, edia / 
      2.0f, edia / 2.0f, ea, ea - 180.0f, noOfEdgesEDia );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, 0.0f, 0.0f, 0.0f, 0.0f, _this->EndAngle, 
      _this->EndAngle - angle, noOfEdges );
      GraphicsPath_AddArc((GraphicsPath)_this, 0, sox / 2.0f, 0.0f, sdia / 2.0f, 
      sdia / 2.0f, 180.0f, 0.0f, noOfEdgesSDia );
    }

    GraphicsPath_Close((GraphicsPath)_this, 0 );
    return;
  }
}

/* 'C' function for method : 'Graphics::ArcPath.OnSetNoOfEdges()' */
void GraphicsArcPath_OnSetNoOfEdges( GraphicsArcPath _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->NoOfEdges )
    return;

  _this->NoOfEdges = value;

  if ((( 0.0f != _this->EndAngle ) && ( _this->RadiusX > 0.0f )) && ( _this->RadiusY 
      > 0.0f ))
    EwPostSignal( EwNewSlot( _this, GraphicsArcPath_updatePath ), ((XObject)_this ));
}

/* 'C' function for method : 'Graphics::ArcPath.OnSetEndAngle()' */
void GraphicsArcPath_OnSetEndAngle( GraphicsArcPath _this, XFloat value )
{
  if ( value == _this->EndAngle )
    return;

  _this->EndAngle = value;

  if (( _this->RadiusX > 0.0f ) && ( _this->RadiusY > 0.0f ))
    EwPostSignal( EwNewSlot( _this, GraphicsArcPath_updatePath ), ((XObject)_this ));
}

/* 'C' function for method : 'Graphics::ArcPath.OnSetRadiusY()' */
void GraphicsArcPath_OnSetRadiusY( GraphicsArcPath _this, XFloat value )
{
  if ( value < 0.0f )
    value = 0.0f;

  if ( value == _this->RadiusY )
    return;

  _this->RadiusY = value;

  if (( 0.0f != _this->EndAngle ) && ( _this->RadiusX > 0.0f ))
    EwPostSignal( EwNewSlot( _this, GraphicsArcPath_updatePath ), ((XObject)_this ));
}

/* 'C' function for method : 'Graphics::ArcPath.OnSetRadiusX()' */
void GraphicsArcPath_OnSetRadiusX( GraphicsArcPath _this, XFloat value )
{
  if ( value < 0.0f )
    value = 0.0f;

  if ( value == _this->RadiusX )
    return;

  _this->RadiusX = value;

  if (( 0.0f != _this->EndAngle ) && ( _this->RadiusY > 0.0f ))
    EwPostSignal( EwNewSlot( _this, GraphicsArcPath_updatePath ), ((XObject)_this ));
}

/* 'C' function for method : 'Graphics::ArcPath.OnSetRadius()' */
void GraphicsArcPath_OnSetRadius( GraphicsArcPath _this, XFloat value )
{
  if (( value == _this->RadiusX ) && ( value == _this->RadiusY ))
    return;

  _this->RadiusX = value;
  _this->RadiusY = value;

  if ( 0.0f != _this->EndAngle )
    EwPostSignal( EwNewSlot( _this, GraphicsArcPath_updatePath ), ((XObject)_this ));
}

/* 'C' function for method : 'Graphics::ArcPath.OnSetStyle()' */
void GraphicsArcPath_OnSetStyle( GraphicsArcPath _this, XEnum value )
{
  if ( value == _this->Style )
    return;

  _this->Style = value;

  if ((( 0.0f != _this->EndAngle ) && ( _this->RadiusX > 0.0f )) && ( _this->RadiusY 
      > 0.0f ))
    EwPostSignal( EwNewSlot( _this, GraphicsArcPath_updatePath ), ((XObject)_this ));
}

/* Variants derived from the class : 'Graphics::ArcPath' */
EW_DEFINE_CLASS_VARIANTS( GraphicsArcPath )
EW_END_OF_CLASS_VARIANTS( GraphicsArcPath )

/* Virtual Method Table (VMT) for the class : 'Graphics::ArcPath' */
EW_DEFINE_CLASS( GraphicsArcPath, GraphicsPath, _.VMT, _.VMT, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Graphics::ArcPath" )
EW_END_OF_CLASS( GraphicsArcPath )

/* Embedded Wizard */