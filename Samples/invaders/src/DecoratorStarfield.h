/*
 * This source file is part of RmlUi, the HTML/CSS Interface Middleware
 *
 * For the latest information, see http://github.com/mikke89/RmlUi
 *
 * Copyright (c) 2008-2010 CodePoint Ltd, Shift Technology Ltd
 * Copyright (c) 2019 The RmlUi Team, and contributors
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

#ifndef RMLUIINVADERSDECORATORSTARFIELD_H
#define RMLUIINVADERSDECORATORSTARFIELD_H

#include <RmlUi/Core/Decorator.h>
#include <vector>

class DecoratorStarfield : public Rml::Core::Decorator
{
public:
	virtual ~DecoratorStarfield();

	bool Initialise(int num_layers, const Rml::Core::Colourb& top_colour, const Rml::Core::Colourb& bottom_colour, float top_speed, float bottom_speed, int top_density, int bottom_density);

	/// Called on a decorator to generate any required per-element data for a newly decorated element.
	/// @param[in] element The newly decorated element.
	/// @return A handle to a decorator-defined data handle, or NULL if none is needed for the element.
	Rml::Core::DecoratorDataHandle GenerateElementData(Rml::Core::Element* element) const override;
	/// Called to release element data generated by this decorator.
	/// @param[in] element_data The element data handle to release.
	void ReleaseElementData(Rml::Core::DecoratorDataHandle element_data) const override;

	/// Called to render the decorator on an element.
	/// @param[in] element The element to render the decorator on.
	/// @param[in] element_data The handle to the data generated by the decorator for the element.
	void RenderElement(Rml::Core::Element* element, Rml::Core::DecoratorDataHandle element_data) const override;

private:
	int num_layers;
	Rml::Core::Colourb top_colour;
	Rml::Core::Colourb bottom_colour;
	float top_speed;
	float bottom_speed;
	int top_density;
	int bottom_density;

	struct StarLayer
	{
		typedef std::vector< Rml::Core::Vector2f > StarList;
		StarList stars;
		Rml::Core::Colourb colour;
		float speed;
	};

	struct StarField
	{
		void Update();
		double last_update;
		Rml::Core::Vector2f dimensions;

		typedef std::vector< StarLayer > StarLayerList;
		StarLayerList star_layers;
	};
};

#endif
