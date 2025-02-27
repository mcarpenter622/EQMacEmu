/**
 * DO NOT MODIFY THIS FILE
 *
 * This repository was automatically generated and is NOT to be modified directly.
 * Any repository modifications are meant to be made to the repository extending the base.
 * Any modifications to base repositories are to be made by the generator only
 *
 * @generator ./utils/scripts/generators/repository-generator.pl
 * @docs https://eqemu.gitbook.io/server/in-development/developer-area/repositories
 */

#ifndef EQEMU_BASE_CHARACTER_DATA_REPOSITORY_H
#define EQEMU_BASE_CHARACTER_DATA_REPOSITORY_H

#include "../../database.h"
#include "../../strings.h"
#include <ctime>

class BaseCharacterDataRepository {
public:
	struct CharacterData {
		uint32_t    id;
		int32_t     account_id;
		int32_t     forum_id;
		std::string name;
		std::string last_name;
		std::string title;
		std::string suffix;
		uint32_t    zone_id;
		float       y;
		float       x;
		float       z;
		float       heading;
		uint8_t     gender;
		uint16_t    race;
		uint8_t     class_;
		uint32_t    level;
		uint32_t    deity;
		uint32_t    birthday;
		uint32_t    last_login;
		uint32_t    time_played;
		uint8_t     level2;
		uint8_t     anon;
		uint8_t     gm;
		uint32_t    face;
		uint8_t     hair_color;
		uint8_t     hair_style;
		uint8_t     beard;
		uint8_t     beard_color;
		uint8_t     eye_color_1;
		uint8_t     eye_color_2;
		uint32_t    exp;
		uint32_t    aa_points_spent;
		uint32_t    aa_exp;
		uint32_t    aa_points;
		uint32_t    points;
		int32_t     cur_hp;
		uint32_t    mana;
		uint32_t    endurance;
		uint32_t    intoxication;
		uint32_t    str;
		uint32_t    sta;
		uint32_t    cha;
		uint32_t    dex;
		uint32_t    int_;
		uint32_t    agi;
		uint32_t    wis;
		uint32_t    zone_change_count;
		uint32_t    hunger_level;
		uint32_t    thirst_level;
		uint8_t     pvp_status;
		uint32_t    air_remaining;
		uint32_t    autosplit_enabled;
		std::string mailkey;
		int8_t      firstlogon;
		uint32_t    e_aa_effects;
		uint32_t    e_percent_to_aa;
		uint32_t    e_expended_aa_spent;
		uint32_t    boatid;
		std::string boatname;
		int32_t     famished;
		int8_t      is_deleted;
		int8_t      showhelm;
		int32_t     fatigue;
		int8_t      e_self_found;
		int8_t      e_solo_only;
		int8_t      e_hardcore;
		int64_t     e_hardcore_death_time;
		uint8_t     e_betabuff_gear_flag;
		uint8_t     e_bigger_wolves;
		uint32_t    e_zone_guild_id;
		std::string e_temp_last_name;
		int32_t     e_married_character_id;
		uint8_t     e_char_export_flag;
	};

	static std::string PrimaryKey()
	{
		return std::string("id");
	}

	static std::vector<std::string> Columns()
	{
		return {
			"id",
			"account_id",
			"forum_id",
			"name",
			"last_name",
			"title",
			"suffix",
			"zone_id",
			"y",
			"x",
			"z",
			"heading",
			"gender",
			"race",
			"`class`",
			"level",
			"deity",
			"birthday",
			"last_login",
			"time_played",
			"level2",
			"anon",
			"gm",
			"face",
			"hair_color",
			"hair_style",
			"beard",
			"beard_color",
			"eye_color_1",
			"eye_color_2",
			"exp",
			"aa_points_spent",
			"aa_exp",
			"aa_points",
			"points",
			"cur_hp",
			"mana",
			"endurance",
			"intoxication",
			"str",
			"sta",
			"cha",
			"dex",
			"`int`",
			"agi",
			"wis",
			"zone_change_count",
			"hunger_level",
			"thirst_level",
			"pvp_status",
			"air_remaining",
			"autosplit_enabled",
			"mailkey",
			"firstlogon",
			"e_aa_effects",
			"e_percent_to_aa",
			"e_expended_aa_spent",
			"boatid",
			"boatname",
			"famished",
			"is_deleted",
			"showhelm",
			"fatigue",
			"e_self_found",
			"e_solo_only",
			"e_hardcore",
			"e_hardcore_death_time",
			"e_betabuff_gear_flag",
			"e_bigger_wolves",
			"e_zone_guild_id",
			"e_temp_last_name",
			"e_married_character_id",
			"e_char_export_flag",
		};
	}

	static std::vector<std::string> SelectColumns()
	{
		return {
			"id",
			"account_id",
			"forum_id",
			"name",
			"last_name",
			"title",
			"suffix",
			"zone_id",
			"y",
			"x",
			"z",
			"heading",
			"gender",
			"race",
			"`class`",
			"level",
			"deity",
			"birthday",
			"last_login",
			"time_played",
			"level2",
			"anon",
			"gm",
			"face",
			"hair_color",
			"hair_style",
			"beard",
			"beard_color",
			"eye_color_1",
			"eye_color_2",
			"exp",
			"aa_points_spent",
			"aa_exp",
			"aa_points",
			"points",
			"cur_hp",
			"mana",
			"endurance",
			"intoxication",
			"str",
			"sta",
			"cha",
			"dex",
			"`int`",
			"agi",
			"wis",
			"zone_change_count",
			"hunger_level",
			"thirst_level",
			"pvp_status",
			"air_remaining",
			"autosplit_enabled",
			"mailkey",
			"firstlogon",
			"e_aa_effects",
			"e_percent_to_aa",
			"e_expended_aa_spent",
			"boatid",
			"boatname",
			"famished",
			"is_deleted",
			"showhelm",
			"fatigue",
			"e_self_found",
			"e_solo_only",
			"e_hardcore",
			"e_hardcore_death_time",
			"e_betabuff_gear_flag",
			"e_bigger_wolves",
			"e_zone_guild_id",
			"e_temp_last_name",
			"e_married_character_id",
			"e_char_export_flag",
		};
	}

	static std::string ColumnsRaw()
	{
		return std::string(Strings::Implode(", ", Columns()));
	}

	static std::string SelectColumnsRaw()
	{
		return std::string(Strings::Implode(", ", SelectColumns()));
	}

	static std::string TableName()
	{
		return std::string("character_data");
	}

	static std::string BaseSelect()
	{
		return fmt::format(
			"SELECT {} FROM {}",
			SelectColumnsRaw(),
			TableName()
		);
	}

	static std::string BaseInsert()
	{
		return fmt::format(
			"INSERT INTO {} ({}) ",
			TableName(),
			ColumnsRaw()
		);
	}

	static CharacterData NewEntity()
	{
		CharacterData e{};

		e.id                     = 0;
		e.account_id             = 0;
		e.forum_id               = 0;
		e.name                   = "";
		e.last_name              = "";
		e.title                  = "";
		e.suffix                 = "";
		e.zone_id                = 0;
		e.y                      = 0;
		e.x                      = 0;
		e.z                      = 0;
		e.heading                = 0;
		e.gender                 = 0;
		e.race                   = 0;
		e.class_                 = 0;
		e.level                  = 0;
		e.deity                  = 0;
		e.birthday               = 0;
		e.last_login             = 0;
		e.time_played            = 0;
		e.level2                 = 0;
		e.anon                   = 0;
		e.gm                     = 0;
		e.face                   = 0;
		e.hair_color             = 0;
		e.hair_style             = 0;
		e.beard                  = 0;
		e.beard_color            = 0;
		e.eye_color_1            = 0;
		e.eye_color_2            = 0;
		e.exp                    = 0;
		e.aa_points_spent        = 0;
		e.aa_exp                 = 0;
		e.aa_points              = 0;
		e.points                 = 0;
		e.cur_hp                 = 0;
		e.mana                   = 0;
		e.endurance              = 0;
		e.intoxication           = 0;
		e.str                    = 0;
		e.sta                    = 0;
		e.cha                    = 0;
		e.dex                    = 0;
		e.int_                   = 0;
		e.agi                    = 0;
		e.wis                    = 0;
		e.zone_change_count      = 0;
		e.hunger_level           = 0;
		e.thirst_level           = 0;
		e.pvp_status             = 0;
		e.air_remaining          = 0;
		e.autosplit_enabled      = 0;
		e.mailkey                = "";
		e.firstlogon             = 0;
		e.e_aa_effects           = 0;
		e.e_percent_to_aa        = 0;
		e.e_expended_aa_spent    = 0;
		e.boatid                 = 0;
		e.boatname               = "";
		e.famished               = 0;
		e.is_deleted             = 0;
		e.showhelm               = 1;
		e.fatigue                = 0;
		e.e_self_found           = 0;
		e.e_solo_only            = 0;
		e.e_hardcore             = 0;
		e.e_hardcore_death_time  = 0;
		e.e_betabuff_gear_flag   = 0;
		e.e_bigger_wolves        = 0;
		e.e_zone_guild_id        = 4294967295;
		e.e_temp_last_name       = "";
		e.e_married_character_id = 0;
		e.e_char_export_flag     = 0;

		return e;
	}

	static CharacterData GetCharacterData(
		const std::vector<CharacterData> &character_datas,
		int character_data_id
	)
	{
		for (auto &character_data : character_datas) {
			if (character_data.id == character_data_id) {
				return character_data;
			}
		}

		return NewEntity();
	}

	static CharacterData FindOne(
		Database& db,
		int character_data_id
	)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"{} WHERE {} = {} LIMIT 1",
				BaseSelect(),
				PrimaryKey(),
				character_data_id
			)
		);

		auto row = results.begin();
		if (results.RowCount() == 1) {
			CharacterData e{};

			e.id                     = row[0] ? static_cast<uint32_t>(strtoul(row[0], nullptr, 10)) : 0;
			e.account_id             = row[1] ? static_cast<int32_t>(atoi(row[1])) : 0;
			e.forum_id               = row[2] ? static_cast<int32_t>(atoi(row[2])) : 0;
			e.name                   = row[3] ? row[3] : "";
			e.last_name              = row[4] ? row[4] : "";
			e.title                  = row[5] ? row[5] : "";
			e.suffix                 = row[6] ? row[6] : "";
			e.zone_id                = row[7] ? static_cast<uint32_t>(strtoul(row[7], nullptr, 10)) : 0;
			e.y                      = row[8] ? strtof(row[8], nullptr) : 0;
			e.x                      = row[9] ? strtof(row[9], nullptr) : 0;
			e.z                      = row[10] ? strtof(row[10], nullptr) : 0;
			e.heading                = row[11] ? strtof(row[11], nullptr) : 0;
			e.gender                 = row[12] ? static_cast<uint8_t>(strtoul(row[12], nullptr, 10)) : 0;
			e.race                   = row[13] ? static_cast<uint16_t>(strtoul(row[13], nullptr, 10)) : 0;
			e.class_                 = row[14] ? static_cast<uint8_t>(strtoul(row[14], nullptr, 10)) : 0;
			e.level                  = row[15] ? static_cast<uint32_t>(strtoul(row[15], nullptr, 10)) : 0;
			e.deity                  = row[16] ? static_cast<uint32_t>(strtoul(row[16], nullptr, 10)) : 0;
			e.birthday               = row[17] ? static_cast<uint32_t>(strtoul(row[17], nullptr, 10)) : 0;
			e.last_login             = row[18] ? static_cast<uint32_t>(strtoul(row[18], nullptr, 10)) : 0;
			e.time_played            = row[19] ? static_cast<uint32_t>(strtoul(row[19], nullptr, 10)) : 0;
			e.level2                 = row[20] ? static_cast<uint8_t>(strtoul(row[20], nullptr, 10)) : 0;
			e.anon                   = row[21] ? static_cast<uint8_t>(strtoul(row[21], nullptr, 10)) : 0;
			e.gm                     = row[22] ? static_cast<uint8_t>(strtoul(row[22], nullptr, 10)) : 0;
			e.face                   = row[23] ? static_cast<uint32_t>(strtoul(row[23], nullptr, 10)) : 0;
			e.hair_color             = row[24] ? static_cast<uint8_t>(strtoul(row[24], nullptr, 10)) : 0;
			e.hair_style             = row[25] ? static_cast<uint8_t>(strtoul(row[25], nullptr, 10)) : 0;
			e.beard                  = row[26] ? static_cast<uint8_t>(strtoul(row[26], nullptr, 10)) : 0;
			e.beard_color            = row[27] ? static_cast<uint8_t>(strtoul(row[27], nullptr, 10)) : 0;
			e.eye_color_1            = row[28] ? static_cast<uint8_t>(strtoul(row[28], nullptr, 10)) : 0;
			e.eye_color_2            = row[29] ? static_cast<uint8_t>(strtoul(row[29], nullptr, 10)) : 0;
			e.exp                    = row[30] ? static_cast<uint32_t>(strtoul(row[30], nullptr, 10)) : 0;
			e.aa_points_spent        = row[31] ? static_cast<uint32_t>(strtoul(row[31], nullptr, 10)) : 0;
			e.aa_exp                 = row[32] ? static_cast<uint32_t>(strtoul(row[32], nullptr, 10)) : 0;
			e.aa_points              = row[33] ? static_cast<uint32_t>(strtoul(row[33], nullptr, 10)) : 0;
			e.points                 = row[34] ? static_cast<uint32_t>(strtoul(row[34], nullptr, 10)) : 0;
			e.cur_hp                 = row[35] ? static_cast<int32_t>(atoi(row[35])) : 0;
			e.mana                   = row[36] ? static_cast<uint32_t>(strtoul(row[36], nullptr, 10)) : 0;
			e.endurance              = row[37] ? static_cast<uint32_t>(strtoul(row[37], nullptr, 10)) : 0;
			e.intoxication           = row[38] ? static_cast<uint32_t>(strtoul(row[38], nullptr, 10)) : 0;
			e.str                    = row[39] ? static_cast<uint32_t>(strtoul(row[39], nullptr, 10)) : 0;
			e.sta                    = row[40] ? static_cast<uint32_t>(strtoul(row[40], nullptr, 10)) : 0;
			e.cha                    = row[41] ? static_cast<uint32_t>(strtoul(row[41], nullptr, 10)) : 0;
			e.dex                    = row[42] ? static_cast<uint32_t>(strtoul(row[42], nullptr, 10)) : 0;
			e.int_                   = row[43] ? static_cast<uint32_t>(strtoul(row[43], nullptr, 10)) : 0;
			e.agi                    = row[44] ? static_cast<uint32_t>(strtoul(row[44], nullptr, 10)) : 0;
			e.wis                    = row[45] ? static_cast<uint32_t>(strtoul(row[45], nullptr, 10)) : 0;
			e.zone_change_count      = row[46] ? static_cast<uint32_t>(strtoul(row[46], nullptr, 10)) : 0;
			e.hunger_level           = row[47] ? static_cast<uint32_t>(strtoul(row[47], nullptr, 10)) : 0;
			e.thirst_level           = row[48] ? static_cast<uint32_t>(strtoul(row[48], nullptr, 10)) : 0;
			e.pvp_status             = row[49] ? static_cast<uint8_t>(strtoul(row[49], nullptr, 10)) : 0;
			e.air_remaining          = row[50] ? static_cast<uint32_t>(strtoul(row[50], nullptr, 10)) : 0;
			e.autosplit_enabled      = row[51] ? static_cast<uint32_t>(strtoul(row[51], nullptr, 10)) : 0;
			e.mailkey                = row[52] ? row[52] : "";
			e.firstlogon             = row[53] ? static_cast<int8_t>(atoi(row[53])) : 0;
			e.e_aa_effects           = row[54] ? static_cast<uint32_t>(strtoul(row[54], nullptr, 10)) : 0;
			e.e_percent_to_aa        = row[55] ? static_cast<uint32_t>(strtoul(row[55], nullptr, 10)) : 0;
			e.e_expended_aa_spent    = row[56] ? static_cast<uint32_t>(strtoul(row[56], nullptr, 10)) : 0;
			e.boatid                 = row[57] ? static_cast<uint32_t>(strtoul(row[57], nullptr, 10)) : 0;
			e.boatname               = row[58] ? row[58] : "";
			e.famished               = row[59] ? static_cast<int32_t>(atoi(row[59])) : 0;
			e.is_deleted             = row[60] ? static_cast<int8_t>(atoi(row[60])) : 0;
			e.showhelm               = row[61] ? static_cast<int8_t>(atoi(row[61])) : 1;
			e.fatigue                = row[62] ? static_cast<int32_t>(atoi(row[62])) : 0;
			e.e_self_found           = row[63] ? static_cast<int8_t>(atoi(row[63])) : 0;
			e.e_solo_only            = row[64] ? static_cast<int8_t>(atoi(row[64])) : 0;
			e.e_hardcore             = row[65] ? static_cast<int8_t>(atoi(row[65])) : 0;
			e.e_hardcore_death_time  = row[66] ? strtoll(row[66], nullptr, 10) : 0;
			e.e_betabuff_gear_flag   = row[67] ? static_cast<uint8_t>(strtoul(row[67], nullptr, 10)) : 0;
			e.e_bigger_wolves        = row[68] ? static_cast<uint8_t>(strtoul(row[68], nullptr, 10)) : 0;
			e.e_zone_guild_id        = row[69] ? static_cast<uint32_t>(strtoul(row[69], nullptr, 10)) : 4294967295;
			e.e_temp_last_name       = row[70] ? row[70] : "";
			e.e_married_character_id = row[71] ? static_cast<int32_t>(atoi(row[71])) : 0;
			e.e_char_export_flag     = row[72] ? static_cast<uint8_t>(strtoul(row[72], nullptr, 10)) : 0;

			return e;
		}

		return NewEntity();
	}

	static int DeleteOne(
		Database& db,
		int character_data_id
	)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"DELETE FROM {} WHERE {} = {}",
				TableName(),
				PrimaryKey(),
				character_data_id
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int UpdateOne(
		Database& db,
		const CharacterData &e
	)
	{
		std::vector<std::string> v;

		auto columns = Columns();

		v.push_back(columns[1] + " = " + std::to_string(e.account_id));
		v.push_back(columns[2] + " = " + std::to_string(e.forum_id));
		v.push_back(columns[3] + " = '" + Strings::Escape(e.name) + "'");
		v.push_back(columns[4] + " = '" + Strings::Escape(e.last_name) + "'");
		v.push_back(columns[5] + " = '" + Strings::Escape(e.title) + "'");
		v.push_back(columns[6] + " = '" + Strings::Escape(e.suffix) + "'");
		v.push_back(columns[7] + " = " + std::to_string(e.zone_id));
		v.push_back(columns[8] + " = " + std::to_string(e.y));
		v.push_back(columns[9] + " = " + std::to_string(e.x));
		v.push_back(columns[10] + " = " + std::to_string(e.z));
		v.push_back(columns[11] + " = " + std::to_string(e.heading));
		v.push_back(columns[12] + " = " + std::to_string(e.gender));
		v.push_back(columns[13] + " = " + std::to_string(e.race));
		v.push_back(columns[14] + " = " + std::to_string(e.class_));
		v.push_back(columns[15] + " = " + std::to_string(e.level));
		v.push_back(columns[16] + " = " + std::to_string(e.deity));
		v.push_back(columns[17] + " = " + std::to_string(e.birthday));
		v.push_back(columns[18] + " = " + std::to_string(e.last_login));
		v.push_back(columns[19] + " = " + std::to_string(e.time_played));
		v.push_back(columns[20] + " = " + std::to_string(e.level2));
		v.push_back(columns[21] + " = " + std::to_string(e.anon));
		v.push_back(columns[22] + " = " + std::to_string(e.gm));
		v.push_back(columns[23] + " = " + std::to_string(e.face));
		v.push_back(columns[24] + " = " + std::to_string(e.hair_color));
		v.push_back(columns[25] + " = " + std::to_string(e.hair_style));
		v.push_back(columns[26] + " = " + std::to_string(e.beard));
		v.push_back(columns[27] + " = " + std::to_string(e.beard_color));
		v.push_back(columns[28] + " = " + std::to_string(e.eye_color_1));
		v.push_back(columns[29] + " = " + std::to_string(e.eye_color_2));
		v.push_back(columns[30] + " = " + std::to_string(e.exp));
		v.push_back(columns[31] + " = " + std::to_string(e.aa_points_spent));
		v.push_back(columns[32] + " = " + std::to_string(e.aa_exp));
		v.push_back(columns[33] + " = " + std::to_string(e.aa_points));
		v.push_back(columns[34] + " = " + std::to_string(e.points));
		v.push_back(columns[35] + " = " + std::to_string(e.cur_hp));
		v.push_back(columns[36] + " = " + std::to_string(e.mana));
		v.push_back(columns[37] + " = " + std::to_string(e.endurance));
		v.push_back(columns[38] + " = " + std::to_string(e.intoxication));
		v.push_back(columns[39] + " = " + std::to_string(e.str));
		v.push_back(columns[40] + " = " + std::to_string(e.sta));
		v.push_back(columns[41] + " = " + std::to_string(e.cha));
		v.push_back(columns[42] + " = " + std::to_string(e.dex));
		v.push_back(columns[43] + " = " + std::to_string(e.int_));
		v.push_back(columns[44] + " = " + std::to_string(e.agi));
		v.push_back(columns[45] + " = " + std::to_string(e.wis));
		v.push_back(columns[46] + " = " + std::to_string(e.zone_change_count));
		v.push_back(columns[47] + " = " + std::to_string(e.hunger_level));
		v.push_back(columns[48] + " = " + std::to_string(e.thirst_level));
		v.push_back(columns[49] + " = " + std::to_string(e.pvp_status));
		v.push_back(columns[50] + " = " + std::to_string(e.air_remaining));
		v.push_back(columns[51] + " = " + std::to_string(e.autosplit_enabled));
		v.push_back(columns[52] + " = '" + Strings::Escape(e.mailkey) + "'");
		v.push_back(columns[53] + " = " + std::to_string(e.firstlogon));
		v.push_back(columns[54] + " = " + std::to_string(e.e_aa_effects));
		v.push_back(columns[55] + " = " + std::to_string(e.e_percent_to_aa));
		v.push_back(columns[56] + " = " + std::to_string(e.e_expended_aa_spent));
		v.push_back(columns[57] + " = " + std::to_string(e.boatid));
		v.push_back(columns[58] + " = '" + Strings::Escape(e.boatname) + "'");
		v.push_back(columns[59] + " = " + std::to_string(e.famished));
		v.push_back(columns[60] + " = " + std::to_string(e.is_deleted));
		v.push_back(columns[61] + " = " + std::to_string(e.showhelm));
		v.push_back(columns[62] + " = " + std::to_string(e.fatigue));
		v.push_back(columns[63] + " = " + std::to_string(e.e_self_found));
		v.push_back(columns[64] + " = " + std::to_string(e.e_solo_only));
		v.push_back(columns[65] + " = " + std::to_string(e.e_hardcore));
		v.push_back(columns[66] + " = " + std::to_string(e.e_hardcore_death_time));
		v.push_back(columns[67] + " = " + std::to_string(e.e_betabuff_gear_flag));
		v.push_back(columns[68] + " = " + std::to_string(e.e_bigger_wolves));
		v.push_back(columns[69] + " = " + std::to_string(e.e_zone_guild_id));
		v.push_back(columns[70] + " = '" + Strings::Escape(e.e_temp_last_name) + "'");
		v.push_back(columns[71] + " = " + std::to_string(e.e_married_character_id));
		v.push_back(columns[72] + " = " + std::to_string(e.e_char_export_flag));

		auto results = db.QueryDatabase(
			fmt::format(
				"UPDATE {} SET {} WHERE {} = {}",
				TableName(),
				Strings::Implode(", ", v),
				PrimaryKey(),
				e.id
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static CharacterData InsertOne(
		Database& db,
		CharacterData e
	)
	{
		std::vector<std::string> v;

		v.push_back(std::to_string(e.id));
		v.push_back(std::to_string(e.account_id));
		v.push_back(std::to_string(e.forum_id));
		v.push_back("'" + Strings::Escape(e.name) + "'");
		v.push_back("'" + Strings::Escape(e.last_name) + "'");
		v.push_back("'" + Strings::Escape(e.title) + "'");
		v.push_back("'" + Strings::Escape(e.suffix) + "'");
		v.push_back(std::to_string(e.zone_id));
		v.push_back(std::to_string(e.y));
		v.push_back(std::to_string(e.x));
		v.push_back(std::to_string(e.z));
		v.push_back(std::to_string(e.heading));
		v.push_back(std::to_string(e.gender));
		v.push_back(std::to_string(e.race));
		v.push_back(std::to_string(e.class_));
		v.push_back(std::to_string(e.level));
		v.push_back(std::to_string(e.deity));
		v.push_back(std::to_string(e.birthday));
		v.push_back(std::to_string(e.last_login));
		v.push_back(std::to_string(e.time_played));
		v.push_back(std::to_string(e.level2));
		v.push_back(std::to_string(e.anon));
		v.push_back(std::to_string(e.gm));
		v.push_back(std::to_string(e.face));
		v.push_back(std::to_string(e.hair_color));
		v.push_back(std::to_string(e.hair_style));
		v.push_back(std::to_string(e.beard));
		v.push_back(std::to_string(e.beard_color));
		v.push_back(std::to_string(e.eye_color_1));
		v.push_back(std::to_string(e.eye_color_2));
		v.push_back(std::to_string(e.exp));
		v.push_back(std::to_string(e.aa_points_spent));
		v.push_back(std::to_string(e.aa_exp));
		v.push_back(std::to_string(e.aa_points));
		v.push_back(std::to_string(e.points));
		v.push_back(std::to_string(e.cur_hp));
		v.push_back(std::to_string(e.mana));
		v.push_back(std::to_string(e.endurance));
		v.push_back(std::to_string(e.intoxication));
		v.push_back(std::to_string(e.str));
		v.push_back(std::to_string(e.sta));
		v.push_back(std::to_string(e.cha));
		v.push_back(std::to_string(e.dex));
		v.push_back(std::to_string(e.int_));
		v.push_back(std::to_string(e.agi));
		v.push_back(std::to_string(e.wis));
		v.push_back(std::to_string(e.zone_change_count));
		v.push_back(std::to_string(e.hunger_level));
		v.push_back(std::to_string(e.thirst_level));
		v.push_back(std::to_string(e.pvp_status));
		v.push_back(std::to_string(e.air_remaining));
		v.push_back(std::to_string(e.autosplit_enabled));
		v.push_back("'" + Strings::Escape(e.mailkey) + "'");
		v.push_back(std::to_string(e.firstlogon));
		v.push_back(std::to_string(e.e_aa_effects));
		v.push_back(std::to_string(e.e_percent_to_aa));
		v.push_back(std::to_string(e.e_expended_aa_spent));
		v.push_back(std::to_string(e.boatid));
		v.push_back("'" + Strings::Escape(e.boatname) + "'");
		v.push_back(std::to_string(e.famished));
		v.push_back(std::to_string(e.is_deleted));
		v.push_back(std::to_string(e.showhelm));
		v.push_back(std::to_string(e.fatigue));
		v.push_back(std::to_string(e.e_self_found));
		v.push_back(std::to_string(e.e_solo_only));
		v.push_back(std::to_string(e.e_hardcore));
		v.push_back(std::to_string(e.e_hardcore_death_time));
		v.push_back(std::to_string(e.e_betabuff_gear_flag));
		v.push_back(std::to_string(e.e_bigger_wolves));
		v.push_back(std::to_string(e.e_zone_guild_id));
		v.push_back("'" + Strings::Escape(e.e_temp_last_name) + "'");
		v.push_back(std::to_string(e.e_married_character_id));
		v.push_back(std::to_string(e.e_char_export_flag));

		auto results = db.QueryDatabase(
			fmt::format(
				"{} VALUES ({})",
				BaseInsert(),
				Strings::Implode(",", v)
			)
		);

		if (results.Success()) {
			e.id = results.LastInsertedID();
			return e;
		}

		e = NewEntity();

		return e;
	}

	static int InsertMany(
		Database& db,
		const std::vector<CharacterData> &entries
	)
	{
		std::vector<std::string> insert_chunks;

		for (auto &e: entries) {
			std::vector<std::string> v;

			v.push_back(std::to_string(e.id));
			v.push_back(std::to_string(e.account_id));
			v.push_back(std::to_string(e.forum_id));
			v.push_back("'" + Strings::Escape(e.name) + "'");
			v.push_back("'" + Strings::Escape(e.last_name) + "'");
			v.push_back("'" + Strings::Escape(e.title) + "'");
			v.push_back("'" + Strings::Escape(e.suffix) + "'");
			v.push_back(std::to_string(e.zone_id));
			v.push_back(std::to_string(e.y));
			v.push_back(std::to_string(e.x));
			v.push_back(std::to_string(e.z));
			v.push_back(std::to_string(e.heading));
			v.push_back(std::to_string(e.gender));
			v.push_back(std::to_string(e.race));
			v.push_back(std::to_string(e.class_));
			v.push_back(std::to_string(e.level));
			v.push_back(std::to_string(e.deity));
			v.push_back(std::to_string(e.birthday));
			v.push_back(std::to_string(e.last_login));
			v.push_back(std::to_string(e.time_played));
			v.push_back(std::to_string(e.level2));
			v.push_back(std::to_string(e.anon));
			v.push_back(std::to_string(e.gm));
			v.push_back(std::to_string(e.face));
			v.push_back(std::to_string(e.hair_color));
			v.push_back(std::to_string(e.hair_style));
			v.push_back(std::to_string(e.beard));
			v.push_back(std::to_string(e.beard_color));
			v.push_back(std::to_string(e.eye_color_1));
			v.push_back(std::to_string(e.eye_color_2));
			v.push_back(std::to_string(e.exp));
			v.push_back(std::to_string(e.aa_points_spent));
			v.push_back(std::to_string(e.aa_exp));
			v.push_back(std::to_string(e.aa_points));
			v.push_back(std::to_string(e.points));
			v.push_back(std::to_string(e.cur_hp));
			v.push_back(std::to_string(e.mana));
			v.push_back(std::to_string(e.endurance));
			v.push_back(std::to_string(e.intoxication));
			v.push_back(std::to_string(e.str));
			v.push_back(std::to_string(e.sta));
			v.push_back(std::to_string(e.cha));
			v.push_back(std::to_string(e.dex));
			v.push_back(std::to_string(e.int_));
			v.push_back(std::to_string(e.agi));
			v.push_back(std::to_string(e.wis));
			v.push_back(std::to_string(e.zone_change_count));
			v.push_back(std::to_string(e.hunger_level));
			v.push_back(std::to_string(e.thirst_level));
			v.push_back(std::to_string(e.pvp_status));
			v.push_back(std::to_string(e.air_remaining));
			v.push_back(std::to_string(e.autosplit_enabled));
			v.push_back("'" + Strings::Escape(e.mailkey) + "'");
			v.push_back(std::to_string(e.firstlogon));
			v.push_back(std::to_string(e.e_aa_effects));
			v.push_back(std::to_string(e.e_percent_to_aa));
			v.push_back(std::to_string(e.e_expended_aa_spent));
			v.push_back(std::to_string(e.boatid));
			v.push_back("'" + Strings::Escape(e.boatname) + "'");
			v.push_back(std::to_string(e.famished));
			v.push_back(std::to_string(e.is_deleted));
			v.push_back(std::to_string(e.showhelm));
			v.push_back(std::to_string(e.fatigue));
			v.push_back(std::to_string(e.e_self_found));
			v.push_back(std::to_string(e.e_solo_only));
			v.push_back(std::to_string(e.e_hardcore));
			v.push_back(std::to_string(e.e_hardcore_death_time));
			v.push_back(std::to_string(e.e_betabuff_gear_flag));
			v.push_back(std::to_string(e.e_bigger_wolves));
			v.push_back(std::to_string(e.e_zone_guild_id));
			v.push_back("'" + Strings::Escape(e.e_temp_last_name) + "'");
			v.push_back(std::to_string(e.e_married_character_id));
			v.push_back(std::to_string(e.e_char_export_flag));

			insert_chunks.push_back("(" + Strings::Implode(",", v) + ")");
		}

		std::vector<std::string> v;

		auto results = db.QueryDatabase(
			fmt::format(
				"{} VALUES {}",
				BaseInsert(),
				Strings::Implode(",", insert_chunks)
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static std::vector<CharacterData> All(Database& db)
	{
		std::vector<CharacterData> all_entries;

		auto results = db.QueryDatabase(
			fmt::format(
				"{}",
				BaseSelect()
			)
		);

		all_entries.reserve(results.RowCount());

		for (auto row = results.begin(); row != results.end(); ++row) {
			CharacterData e{};

			e.id                     = row[0] ? static_cast<uint32_t>(strtoul(row[0], nullptr, 10)) : 0;
			e.account_id             = row[1] ? static_cast<int32_t>(atoi(row[1])) : 0;
			e.forum_id               = row[2] ? static_cast<int32_t>(atoi(row[2])) : 0;
			e.name                   = row[3] ? row[3] : "";
			e.last_name              = row[4] ? row[4] : "";
			e.title                  = row[5] ? row[5] : "";
			e.suffix                 = row[6] ? row[6] : "";
			e.zone_id                = row[7] ? static_cast<uint32_t>(strtoul(row[7], nullptr, 10)) : 0;
			e.y                      = row[8] ? strtof(row[8], nullptr) : 0;
			e.x                      = row[9] ? strtof(row[9], nullptr) : 0;
			e.z                      = row[10] ? strtof(row[10], nullptr) : 0;
			e.heading                = row[11] ? strtof(row[11], nullptr) : 0;
			e.gender                 = row[12] ? static_cast<uint8_t>(strtoul(row[12], nullptr, 10)) : 0;
			e.race                   = row[13] ? static_cast<uint16_t>(strtoul(row[13], nullptr, 10)) : 0;
			e.class_                 = row[14] ? static_cast<uint8_t>(strtoul(row[14], nullptr, 10)) : 0;
			e.level                  = row[15] ? static_cast<uint32_t>(strtoul(row[15], nullptr, 10)) : 0;
			e.deity                  = row[16] ? static_cast<uint32_t>(strtoul(row[16], nullptr, 10)) : 0;
			e.birthday               = row[17] ? static_cast<uint32_t>(strtoul(row[17], nullptr, 10)) : 0;
			e.last_login             = row[18] ? static_cast<uint32_t>(strtoul(row[18], nullptr, 10)) : 0;
			e.time_played            = row[19] ? static_cast<uint32_t>(strtoul(row[19], nullptr, 10)) : 0;
			e.level2                 = row[20] ? static_cast<uint8_t>(strtoul(row[20], nullptr, 10)) : 0;
			e.anon                   = row[21] ? static_cast<uint8_t>(strtoul(row[21], nullptr, 10)) : 0;
			e.gm                     = row[22] ? static_cast<uint8_t>(strtoul(row[22], nullptr, 10)) : 0;
			e.face                   = row[23] ? static_cast<uint32_t>(strtoul(row[23], nullptr, 10)) : 0;
			e.hair_color             = row[24] ? static_cast<uint8_t>(strtoul(row[24], nullptr, 10)) : 0;
			e.hair_style             = row[25] ? static_cast<uint8_t>(strtoul(row[25], nullptr, 10)) : 0;
			e.beard                  = row[26] ? static_cast<uint8_t>(strtoul(row[26], nullptr, 10)) : 0;
			e.beard_color            = row[27] ? static_cast<uint8_t>(strtoul(row[27], nullptr, 10)) : 0;
			e.eye_color_1            = row[28] ? static_cast<uint8_t>(strtoul(row[28], nullptr, 10)) : 0;
			e.eye_color_2            = row[29] ? static_cast<uint8_t>(strtoul(row[29], nullptr, 10)) : 0;
			e.exp                    = row[30] ? static_cast<uint32_t>(strtoul(row[30], nullptr, 10)) : 0;
			e.aa_points_spent        = row[31] ? static_cast<uint32_t>(strtoul(row[31], nullptr, 10)) : 0;
			e.aa_exp                 = row[32] ? static_cast<uint32_t>(strtoul(row[32], nullptr, 10)) : 0;
			e.aa_points              = row[33] ? static_cast<uint32_t>(strtoul(row[33], nullptr, 10)) : 0;
			e.points                 = row[34] ? static_cast<uint32_t>(strtoul(row[34], nullptr, 10)) : 0;
			e.cur_hp                 = row[35] ? static_cast<int32_t>(atoi(row[35])) : 0;
			e.mana                   = row[36] ? static_cast<uint32_t>(strtoul(row[36], nullptr, 10)) : 0;
			e.endurance              = row[37] ? static_cast<uint32_t>(strtoul(row[37], nullptr, 10)) : 0;
			e.intoxication           = row[38] ? static_cast<uint32_t>(strtoul(row[38], nullptr, 10)) : 0;
			e.str                    = row[39] ? static_cast<uint32_t>(strtoul(row[39], nullptr, 10)) : 0;
			e.sta                    = row[40] ? static_cast<uint32_t>(strtoul(row[40], nullptr, 10)) : 0;
			e.cha                    = row[41] ? static_cast<uint32_t>(strtoul(row[41], nullptr, 10)) : 0;
			e.dex                    = row[42] ? static_cast<uint32_t>(strtoul(row[42], nullptr, 10)) : 0;
			e.int_                   = row[43] ? static_cast<uint32_t>(strtoul(row[43], nullptr, 10)) : 0;
			e.agi                    = row[44] ? static_cast<uint32_t>(strtoul(row[44], nullptr, 10)) : 0;
			e.wis                    = row[45] ? static_cast<uint32_t>(strtoul(row[45], nullptr, 10)) : 0;
			e.zone_change_count      = row[46] ? static_cast<uint32_t>(strtoul(row[46], nullptr, 10)) : 0;
			e.hunger_level           = row[47] ? static_cast<uint32_t>(strtoul(row[47], nullptr, 10)) : 0;
			e.thirst_level           = row[48] ? static_cast<uint32_t>(strtoul(row[48], nullptr, 10)) : 0;
			e.pvp_status             = row[49] ? static_cast<uint8_t>(strtoul(row[49], nullptr, 10)) : 0;
			e.air_remaining          = row[50] ? static_cast<uint32_t>(strtoul(row[50], nullptr, 10)) : 0;
			e.autosplit_enabled      = row[51] ? static_cast<uint32_t>(strtoul(row[51], nullptr, 10)) : 0;
			e.mailkey                = row[52] ? row[52] : "";
			e.firstlogon             = row[53] ? static_cast<int8_t>(atoi(row[53])) : 0;
			e.e_aa_effects           = row[54] ? static_cast<uint32_t>(strtoul(row[54], nullptr, 10)) : 0;
			e.e_percent_to_aa        = row[55] ? static_cast<uint32_t>(strtoul(row[55], nullptr, 10)) : 0;
			e.e_expended_aa_spent    = row[56] ? static_cast<uint32_t>(strtoul(row[56], nullptr, 10)) : 0;
			e.boatid                 = row[57] ? static_cast<uint32_t>(strtoul(row[57], nullptr, 10)) : 0;
			e.boatname               = row[58] ? row[58] : "";
			e.famished               = row[59] ? static_cast<int32_t>(atoi(row[59])) : 0;
			e.is_deleted             = row[60] ? static_cast<int8_t>(atoi(row[60])) : 0;
			e.showhelm               = row[61] ? static_cast<int8_t>(atoi(row[61])) : 1;
			e.fatigue                = row[62] ? static_cast<int32_t>(atoi(row[62])) : 0;
			e.e_self_found           = row[63] ? static_cast<int8_t>(atoi(row[63])) : 0;
			e.e_solo_only            = row[64] ? static_cast<int8_t>(atoi(row[64])) : 0;
			e.e_hardcore             = row[65] ? static_cast<int8_t>(atoi(row[65])) : 0;
			e.e_hardcore_death_time  = row[66] ? strtoll(row[66], nullptr, 10) : 0;
			e.e_betabuff_gear_flag   = row[67] ? static_cast<uint8_t>(strtoul(row[67], nullptr, 10)) : 0;
			e.e_bigger_wolves        = row[68] ? static_cast<uint8_t>(strtoul(row[68], nullptr, 10)) : 0;
			e.e_zone_guild_id        = row[69] ? static_cast<uint32_t>(strtoul(row[69], nullptr, 10)) : 4294967295;
			e.e_temp_last_name       = row[70] ? row[70] : "";
			e.e_married_character_id = row[71] ? static_cast<int32_t>(atoi(row[71])) : 0;
			e.e_char_export_flag     = row[72] ? static_cast<uint8_t>(strtoul(row[72], nullptr, 10)) : 0;

			all_entries.push_back(e);
		}

		return all_entries;
	}

	static std::vector<CharacterData> GetWhere(Database& db, const std::string &where_filter)
	{
		std::vector<CharacterData> all_entries;

		auto results = db.QueryDatabase(
			fmt::format(
				"{} WHERE {}",
				BaseSelect(),
				where_filter
			)
		);

		all_entries.reserve(results.RowCount());

		for (auto row = results.begin(); row != results.end(); ++row) {
			CharacterData e{};

			e.id                     = row[0] ? static_cast<uint32_t>(strtoul(row[0], nullptr, 10)) : 0;
			e.account_id             = row[1] ? static_cast<int32_t>(atoi(row[1])) : 0;
			e.forum_id               = row[2] ? static_cast<int32_t>(atoi(row[2])) : 0;
			e.name                   = row[3] ? row[3] : "";
			e.last_name              = row[4] ? row[4] : "";
			e.title                  = row[5] ? row[5] : "";
			e.suffix                 = row[6] ? row[6] : "";
			e.zone_id                = row[7] ? static_cast<uint32_t>(strtoul(row[7], nullptr, 10)) : 0;
			e.y                      = row[8] ? strtof(row[8], nullptr) : 0;
			e.x                      = row[9] ? strtof(row[9], nullptr) : 0;
			e.z                      = row[10] ? strtof(row[10], nullptr) : 0;
			e.heading                = row[11] ? strtof(row[11], nullptr) : 0;
			e.gender                 = row[12] ? static_cast<uint8_t>(strtoul(row[12], nullptr, 10)) : 0;
			e.race                   = row[13] ? static_cast<uint16_t>(strtoul(row[13], nullptr, 10)) : 0;
			e.class_                 = row[14] ? static_cast<uint8_t>(strtoul(row[14], nullptr, 10)) : 0;
			e.level                  = row[15] ? static_cast<uint32_t>(strtoul(row[15], nullptr, 10)) : 0;
			e.deity                  = row[16] ? static_cast<uint32_t>(strtoul(row[16], nullptr, 10)) : 0;
			e.birthday               = row[17] ? static_cast<uint32_t>(strtoul(row[17], nullptr, 10)) : 0;
			e.last_login             = row[18] ? static_cast<uint32_t>(strtoul(row[18], nullptr, 10)) : 0;
			e.time_played            = row[19] ? static_cast<uint32_t>(strtoul(row[19], nullptr, 10)) : 0;
			e.level2                 = row[20] ? static_cast<uint8_t>(strtoul(row[20], nullptr, 10)) : 0;
			e.anon                   = row[21] ? static_cast<uint8_t>(strtoul(row[21], nullptr, 10)) : 0;
			e.gm                     = row[22] ? static_cast<uint8_t>(strtoul(row[22], nullptr, 10)) : 0;
			e.face                   = row[23] ? static_cast<uint32_t>(strtoul(row[23], nullptr, 10)) : 0;
			e.hair_color             = row[24] ? static_cast<uint8_t>(strtoul(row[24], nullptr, 10)) : 0;
			e.hair_style             = row[25] ? static_cast<uint8_t>(strtoul(row[25], nullptr, 10)) : 0;
			e.beard                  = row[26] ? static_cast<uint8_t>(strtoul(row[26], nullptr, 10)) : 0;
			e.beard_color            = row[27] ? static_cast<uint8_t>(strtoul(row[27], nullptr, 10)) : 0;
			e.eye_color_1            = row[28] ? static_cast<uint8_t>(strtoul(row[28], nullptr, 10)) : 0;
			e.eye_color_2            = row[29] ? static_cast<uint8_t>(strtoul(row[29], nullptr, 10)) : 0;
			e.exp                    = row[30] ? static_cast<uint32_t>(strtoul(row[30], nullptr, 10)) : 0;
			e.aa_points_spent        = row[31] ? static_cast<uint32_t>(strtoul(row[31], nullptr, 10)) : 0;
			e.aa_exp                 = row[32] ? static_cast<uint32_t>(strtoul(row[32], nullptr, 10)) : 0;
			e.aa_points              = row[33] ? static_cast<uint32_t>(strtoul(row[33], nullptr, 10)) : 0;
			e.points                 = row[34] ? static_cast<uint32_t>(strtoul(row[34], nullptr, 10)) : 0;
			e.cur_hp                 = row[35] ? static_cast<int32_t>(atoi(row[35])) : 0;
			e.mana                   = row[36] ? static_cast<uint32_t>(strtoul(row[36], nullptr, 10)) : 0;
			e.endurance              = row[37] ? static_cast<uint32_t>(strtoul(row[37], nullptr, 10)) : 0;
			e.intoxication           = row[38] ? static_cast<uint32_t>(strtoul(row[38], nullptr, 10)) : 0;
			e.str                    = row[39] ? static_cast<uint32_t>(strtoul(row[39], nullptr, 10)) : 0;
			e.sta                    = row[40] ? static_cast<uint32_t>(strtoul(row[40], nullptr, 10)) : 0;
			e.cha                    = row[41] ? static_cast<uint32_t>(strtoul(row[41], nullptr, 10)) : 0;
			e.dex                    = row[42] ? static_cast<uint32_t>(strtoul(row[42], nullptr, 10)) : 0;
			e.int_                   = row[43] ? static_cast<uint32_t>(strtoul(row[43], nullptr, 10)) : 0;
			e.agi                    = row[44] ? static_cast<uint32_t>(strtoul(row[44], nullptr, 10)) : 0;
			e.wis                    = row[45] ? static_cast<uint32_t>(strtoul(row[45], nullptr, 10)) : 0;
			e.zone_change_count      = row[46] ? static_cast<uint32_t>(strtoul(row[46], nullptr, 10)) : 0;
			e.hunger_level           = row[47] ? static_cast<uint32_t>(strtoul(row[47], nullptr, 10)) : 0;
			e.thirst_level           = row[48] ? static_cast<uint32_t>(strtoul(row[48], nullptr, 10)) : 0;
			e.pvp_status             = row[49] ? static_cast<uint8_t>(strtoul(row[49], nullptr, 10)) : 0;
			e.air_remaining          = row[50] ? static_cast<uint32_t>(strtoul(row[50], nullptr, 10)) : 0;
			e.autosplit_enabled      = row[51] ? static_cast<uint32_t>(strtoul(row[51], nullptr, 10)) : 0;
			e.mailkey                = row[52] ? row[52] : "";
			e.firstlogon             = row[53] ? static_cast<int8_t>(atoi(row[53])) : 0;
			e.e_aa_effects           = row[54] ? static_cast<uint32_t>(strtoul(row[54], nullptr, 10)) : 0;
			e.e_percent_to_aa        = row[55] ? static_cast<uint32_t>(strtoul(row[55], nullptr, 10)) : 0;
			e.e_expended_aa_spent    = row[56] ? static_cast<uint32_t>(strtoul(row[56], nullptr, 10)) : 0;
			e.boatid                 = row[57] ? static_cast<uint32_t>(strtoul(row[57], nullptr, 10)) : 0;
			e.boatname               = row[58] ? row[58] : "";
			e.famished               = row[59] ? static_cast<int32_t>(atoi(row[59])) : 0;
			e.is_deleted             = row[60] ? static_cast<int8_t>(atoi(row[60])) : 0;
			e.showhelm               = row[61] ? static_cast<int8_t>(atoi(row[61])) : 1;
			e.fatigue                = row[62] ? static_cast<int32_t>(atoi(row[62])) : 0;
			e.e_self_found           = row[63] ? static_cast<int8_t>(atoi(row[63])) : 0;
			e.e_solo_only            = row[64] ? static_cast<int8_t>(atoi(row[64])) : 0;
			e.e_hardcore             = row[65] ? static_cast<int8_t>(atoi(row[65])) : 0;
			e.e_hardcore_death_time  = row[66] ? strtoll(row[66], nullptr, 10) : 0;
			e.e_betabuff_gear_flag   = row[67] ? static_cast<uint8_t>(strtoul(row[67], nullptr, 10)) : 0;
			e.e_bigger_wolves        = row[68] ? static_cast<uint8_t>(strtoul(row[68], nullptr, 10)) : 0;
			e.e_zone_guild_id        = row[69] ? static_cast<uint32_t>(strtoul(row[69], nullptr, 10)) : 4294967295;
			e.e_temp_last_name       = row[70] ? row[70] : "";
			e.e_married_character_id = row[71] ? static_cast<int32_t>(atoi(row[71])) : 0;
			e.e_char_export_flag     = row[72] ? static_cast<uint8_t>(strtoul(row[72], nullptr, 10)) : 0;

			all_entries.push_back(e);
		}

		return all_entries;
	}

	static int DeleteWhere(Database& db, const std::string &where_filter)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"DELETE FROM {} WHERE {}",
				TableName(),
				where_filter
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int Truncate(Database& db)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"TRUNCATE TABLE {}",
				TableName()
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int64 GetMaxId(Database& db)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"SELECT COALESCE(MAX({}), 0) FROM {}",
				PrimaryKey(),
				TableName()
			)
		);

		return (results.Success() && results.begin()[0] ? strtoll(results.begin()[0], nullptr, 10) : 0);
	}

	static int64 Count(Database& db, const std::string &where_filter = "")
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"SELECT COUNT(*) FROM {} {}",
				TableName(),
				(where_filter.empty() ? "" : "WHERE " + where_filter)
			)
		);

		return (results.Success() && results.begin()[0] ? strtoll(results.begin()[0], nullptr, 10) : 0);
	}

};

#endif //EQEMU_BASE_CHARACTER_DATA_REPOSITORY_H
