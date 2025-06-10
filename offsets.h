#pragma once
#include <vector>

namespace offsets
{
	std::ptrdiff_t uworld_pointer = 0xC0;
	std::ptrdiff_t uworld_state = 0x9F3F050;
	std::ptrdiff_t uworld_key = 0x24A04C0; // uworld_state + 0x38;        
	std::ptrdiff_t line_of_sight = 0x63005F2;
	std::ptrdiff_t BoneMatrix = 0x660D850;
	std::ptrdiff_t fnamepool = 0xB44F0C0;

	// chams / glow chams colors
	std::ptrdiff_t outline_ally_color = 0x5331A82;
	std::ptrdiff_t outline_enemy_color = 0x5331A89;

	// veh deref
	std::ptrdiff_t TriggerVeh = 0x24BFA00;

	// world
	std::ptrdiff_t persistent_level = 0x38; 
	std::ptrdiff_t game_instance = 0x1a0;

	// player
	std::ptrdiff_t localplayers_array = 0x40; 
	std::ptrdiff_t localplayer = 0x40;
	std::ptrdiff_t player_controller = 0x38; 
	std::ptrdiff_t apawn = 0x448;

	// vector
	std::ptrdiff_t root_component = 0x238;
	std::ptrdiff_t root_position = 0x164;	

	// controllers
	std::ptrdiff_t damage_handler = 0xa08;
	std::ptrdiff_t camera_controller = 0x440;

	// camera
	std::ptrdiff_t camera_position = 0x1260; //		im not sure about this one
	std::ptrdiff_t camera_rotation = 0x128C; //		im not sure about this one
	std::ptrdiff_t camera_fov = 0x1278;      //   im not sure about this one
	std::ptrdiff_t camera_manager = 0x460;

	// level > actors
	std::ptrdiff_t actor_array = 0xa0;
	std::ptrdiff_t actors_count = 0xa8;

	// level > actors info
	std::ptrdiff_t actor_id = 0x18;
	std::ptrdiff_t unique_id = 0x38;
	std::ptrdiff_t team_component = 0x610; 
	std::ptrdiff_t team_id = 0xF8;
	std::ptrdiff_t health = 0x1E0;
	std::ptrdiff_t dormant = 0x100;
	std::ptrdiff_t player_state = 0x3D8;

	// mesh
	std::ptrdiff_t control_rotation = 0x448;
	std::ptrdiff_t mesh = 0x418;
	std::ptrdiff_t component_to_world = 0x250;
	std::ptrdiff_t bone_array = 0x5C8;
	std::ptrdiff_t bone_count = 0x5D0;
	std::ptrdiff_t last_submit_time = 0x380;
	std::ptrdiff_t last_render_time = 0x384; 
	std::ptrdiff_t inventory = 0x9A8; 
	std::ptrdiff_t current_equip = 0x248;

	// minimap
	std::ptrdiff_t portrait_minimap_component = 0x1210;
}
