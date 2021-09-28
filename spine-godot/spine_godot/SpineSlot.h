/******************************************************************************
 * Spine Runtimes License Agreement
 * Last updated January 1, 2020. Replaces all prior versions.
 *
 * Copyright (c) 2013-2020, Esoteric Software LLC
 *
 * Integration of the Spine Runtimes into software or otherwise creating
 * derivative works of the Spine Runtimes is permitted under the terms and
 * conditions of Section 2 of the Spine Editor License Agreement:
 * http://esotericsoftware.com/spine-editor-license
 *
 * Otherwise, it is permitted to integrate the Spine Runtimes into software
 * or otherwise create derivative works of the Spine Runtimes (collectively,
 * "Products"), provided that each user of the Products must obtain their own
 * Spine Editor license and redistribution of the Products in any form must
 * include this license and copyright notice.
 *
 * THE SPINE RUNTIMES ARE PROVIDED BY ESOTERIC SOFTWARE LLC "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ESOTERIC SOFTWARE LLC BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES,
 * BUSINESS INTERRUPTION, OR LOSS OF USE, DATA, OR PROFITS) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THE SPINE RUNTIMES, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *****************************************************************************/

#ifndef GODOT_SPINESLOT_H
#define GODOT_SPINESLOT_H

#include "core/variant_parser.h"

#include <spine/spine.h>

#include "SpineSlotData.h"
#include "SpineAttachment.h"

class SpineSkeleton;

class SpineBone;

class SpineSlot : public Reference{
	GDCLASS(SpineSlot, Reference);

protected:
	static void _bind_methods();

private:
	spine::Slot *slot;

public:
	SpineSlot();
	~SpineSlot();

	inline void set_spine_object(spine::Slot *s){
		slot = s;
	}
	inline spine::Slot *get_spine_object(){
		return slot;
	}

	void set_to_setup_pos();

	Ref<SpineSlotData> get_data();

	Ref<SpineBone> get_bone();

	Ref<SpineSkeleton> get_skeleton();

	Color get_color();
	void set_color(Color v);

	Color get_dark_color();
	void set_dark_color(Color v);

	bool has_dark_color();

	Ref<SpineAttachment> get_attachment();
	void set_attachment(Ref<SpineAttachment> v);

	int get_attachment_state();
	void set_attachment_state(int v);

	float get_attachment_time();
	void set_attachment_time(float v);

	Array get_deform();
	void set_deform(Array v);
};

#endif //GODOT_SPINESLOT_H
