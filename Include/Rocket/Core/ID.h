/*
 * This source file is part of libRocket, the HTML/CSS Interface Middleware
 *
 * For the latest information, see http://www.librocket.com
 *
 * Copyright (c) 2008-2010 CodePoint Ltd, Shift Technology Ltd
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

 
#ifndef ROCKETCOREID_H
#define ROCKETCOREID_H

namespace Rocket {
namespace Core {


enum class ShorthandId : uint16_t
{
	Invalid,

	Margin,
	Padding,
	BorderWidth,
	BorderColor,
	BorderTop,
	BorderRight,
	BorderBottom,
	BorderLeft,
	Border,
	Overflow,
	Background,
	Font,
	PerspectiveOrigin,
	TransformOrigin,

	NumDefinedIds,
	FirstCustomId = NumDefinedIds
};


enum class PropertyId : uint16_t
{
	Invalid,

	MarginTop,
	MarginRight,
	MarginBottom,
	MarginLeft,
	PaddingTop,
	PaddingRight,
	PaddingBottom,
	PaddingLeft,
	BorderTopWidth,
	BorderRightWidth,
	BorderBottomWidth,
	BorderLeftWidth,
	BorderTopColor,
	BorderRightColor,
	BorderBottomColor,
	BorderLeftColor,
	Display,
	Position,
	Top,
	Right,
	Bottom,
	Left,
	Float,
	Clear,
	ZIndex,
	Width,
	MinWidth,
	MaxWidth,
	Height,
	MinHeight,
	MaxHeight,
	LineHeight,
	VerticalAlign,
	OverflowX,
	OverflowY,
	Clip,
	Visibility,
	BackgroundColor,
	Color,
	ImageColor,
	FontFamily,
	FontCharset,
	FontStyle,
	FontWeight,
	FontSize,
	Font,
	TextAlign,
	TextDecoration,
	TextTransform,
	WhiteSpace,
	Cursor,
	Drag,
	TabIndex,
	ScrollbarMargin,

	Perspective,
	PerspectiveOriginX,
	PerspectiveOriginY,
	Transform,
	TransformOriginX,
	TransformOriginY,
	TransformOriginZ,
	None,
	All,

	Transition,
	Animation,
	Keyframes,

	ScrollDefaultStepSize,
	Opacity,
	PointerEvents,
	Focus,

	NumDefinedIds,
	FirstCustomId = NumDefinedIds
};



enum class EventId : uint16_t 
{
	Invalid,

	// Core events
	Mousedown,
	Mousescroll,
	Mouseover,
	Mouseout,
	Focus,
	Blur,
	Keydown,
	Keyup,
	Textinput,
	Mouseup,
	Click,
	Dblclick,
	Load,
	Unload,
	Show,
	Hide,
	Mousemove,
	Dragmove,
	Drag,
	Dragstart,
	Dragover,
	Dragdrop,
	Dragout,
	Dragend,
	Handledrag,
	Resize,
	Scroll,
	Animationend,
	Transitionend,

	// Controls events
	Change,
	Submit,
	Tabchange,
	Columnadd,
	Rowadd,
	Rowchange,
	Rowremove,
	Rowupdate,

	NumDefinedIds,

	// Custom IDs start here
	FirstCustomId = NumDefinedIds
};

}
}

#endif
