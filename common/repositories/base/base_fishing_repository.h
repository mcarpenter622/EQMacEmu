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

#ifndef EQEMU_BASE_FISHING_REPOSITORY_H
#define EQEMU_BASE_FISHING_REPOSITORY_H

#include "../../database.h"
#include "../../strings.h"
#include <ctime>

class BaseFishingRepository {
public:
	struct Fishing {
		int32_t     id;
		int32_t     zoneid;
		int32_t     Itemid;
		int16_t     skill_level;
		int16_t     chance;
		std::string content_flags;
		std::string content_flags_disabled;
		float       min_expansion;
		float       max_expansion;
	};

	static std::string PrimaryKey()
	{
		return std::string("id");
	}

	static std::vector<std::string> Columns()
	{
		return {
			"id",
			"zoneid",
			"Itemid",
			"skill_level",
			"chance",
			"content_flags",
			"content_flags_disabled",
			"min_expansion",
			"max_expansion",
		};
	}

	static std::vector<std::string> SelectColumns()
	{
		return {
			"id",
			"zoneid",
			"Itemid",
			"skill_level",
			"chance",
			"content_flags",
			"content_flags_disabled",
			"min_expansion",
			"max_expansion",
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
		return std::string("fishing");
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

	static Fishing NewEntity()
	{
		Fishing e{};

		e.id                     = 0;
		e.zoneid                 = 0;
		e.Itemid                 = 0;
		e.skill_level            = 0;
		e.chance                 = 0;
		e.content_flags          = "";
		e.content_flags_disabled = "";
		e.min_expansion          = -1;
		e.max_expansion          = -1;

		return e;
	}

	static Fishing GetFishing(
		const std::vector<Fishing> &fishings,
		int fishing_id
	)
	{
		for (auto &fishing : fishings) {
			if (fishing.id == fishing_id) {
				return fishing;
			}
		}

		return NewEntity();
	}

	static Fishing FindOne(
		Database& db,
		int fishing_id
	)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"{} WHERE {} = {} LIMIT 1",
				BaseSelect(),
				PrimaryKey(),
				fishing_id
			)
		);

		auto row = results.begin();
		if (results.RowCount() == 1) {
			Fishing e{};

			e.id                     = row[0] ? static_cast<int32_t>(atoi(row[0])) : 0;
			e.zoneid                 = row[1] ? static_cast<int32_t>(atoi(row[1])) : 0;
			e.Itemid                 = row[2] ? static_cast<int32_t>(atoi(row[2])) : 0;
			e.skill_level            = row[3] ? static_cast<int16_t>(atoi(row[3])) : 0;
			e.chance                 = row[4] ? static_cast<int16_t>(atoi(row[4])) : 0;
			e.content_flags          = row[5] ? row[5] : "";
			e.content_flags_disabled = row[6] ? row[6] : "";
			e.min_expansion          = row[7] ? strtof(row[7], nullptr) : -1;
			e.max_expansion          = row[8] ? strtof(row[8], nullptr) : -1;

			return e;
		}

		return NewEntity();
	}

	static int DeleteOne(
		Database& db,
		int fishing_id
	)
	{
		auto results = db.QueryDatabase(
			fmt::format(
				"DELETE FROM {} WHERE {} = {}",
				TableName(),
				PrimaryKey(),
				fishing_id
			)
		);

		return (results.Success() ? results.RowsAffected() : 0);
	}

	static int UpdateOne(
		Database& db,
		const Fishing &e
	)
	{
		std::vector<std::string> v;

		auto columns = Columns();

		v.push_back(columns[1] + " = " + std::to_string(e.zoneid));
		v.push_back(columns[2] + " = " + std::to_string(e.Itemid));
		v.push_back(columns[3] + " = " + std::to_string(e.skill_level));
		v.push_back(columns[4] + " = " + std::to_string(e.chance));
		v.push_back(columns[5] + " = '" + Strings::Escape(e.content_flags) + "'");
		v.push_back(columns[6] + " = '" + Strings::Escape(e.content_flags_disabled) + "'");
		v.push_back(columns[7] + " = " + std::to_string(e.min_expansion));
		v.push_back(columns[8] + " = " + std::to_string(e.max_expansion));

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

	static Fishing InsertOne(
		Database& db,
		Fishing e
	)
	{
		std::vector<std::string> v;

		v.push_back(std::to_string(e.id));
		v.push_back(std::to_string(e.zoneid));
		v.push_back(std::to_string(e.Itemid));
		v.push_back(std::to_string(e.skill_level));
		v.push_back(std::to_string(e.chance));
		v.push_back("'" + Strings::Escape(e.content_flags) + "'");
		v.push_back("'" + Strings::Escape(e.content_flags_disabled) + "'");
		v.push_back(std::to_string(e.min_expansion));
		v.push_back(std::to_string(e.max_expansion));

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
		const std::vector<Fishing> &entries
	)
	{
		std::vector<std::string> insert_chunks;

		for (auto &e: entries) {
			std::vector<std::string> v;

			v.push_back(std::to_string(e.id));
			v.push_back(std::to_string(e.zoneid));
			v.push_back(std::to_string(e.Itemid));
			v.push_back(std::to_string(e.skill_level));
			v.push_back(std::to_string(e.chance));
			v.push_back("'" + Strings::Escape(e.content_flags) + "'");
			v.push_back("'" + Strings::Escape(e.content_flags_disabled) + "'");
			v.push_back(std::to_string(e.min_expansion));
			v.push_back(std::to_string(e.max_expansion));

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

	static std::vector<Fishing> All(Database& db)
	{
		std::vector<Fishing> all_entries;

		auto results = db.QueryDatabase(
			fmt::format(
				"{}",
				BaseSelect()
			)
		);

		all_entries.reserve(results.RowCount());

		for (auto row = results.begin(); row != results.end(); ++row) {
			Fishing e{};

			e.id                     = row[0] ? static_cast<int32_t>(atoi(row[0])) : 0;
			e.zoneid                 = row[1] ? static_cast<int32_t>(atoi(row[1])) : 0;
			e.Itemid                 = row[2] ? static_cast<int32_t>(atoi(row[2])) : 0;
			e.skill_level            = row[3] ? static_cast<int16_t>(atoi(row[3])) : 0;
			e.chance                 = row[4] ? static_cast<int16_t>(atoi(row[4])) : 0;
			e.content_flags          = row[5] ? row[5] : "";
			e.content_flags_disabled = row[6] ? row[6] : "";
			e.min_expansion          = row[7] ? strtof(row[7], nullptr) : -1;
			e.max_expansion          = row[8] ? strtof(row[8], nullptr) : -1;

			all_entries.push_back(e);
		}

		return all_entries;
	}

	static std::vector<Fishing> GetWhere(Database& db, const std::string &where_filter)
	{
		std::vector<Fishing> all_entries;

		auto results = db.QueryDatabase(
			fmt::format(
				"{} WHERE {}",
				BaseSelect(),
				where_filter
			)
		);

		all_entries.reserve(results.RowCount());

		for (auto row = results.begin(); row != results.end(); ++row) {
			Fishing e{};

			e.id                     = row[0] ? static_cast<int32_t>(atoi(row[0])) : 0;
			e.zoneid                 = row[1] ? static_cast<int32_t>(atoi(row[1])) : 0;
			e.Itemid                 = row[2] ? static_cast<int32_t>(atoi(row[2])) : 0;
			e.skill_level            = row[3] ? static_cast<int16_t>(atoi(row[3])) : 0;
			e.chance                 = row[4] ? static_cast<int16_t>(atoi(row[4])) : 0;
			e.content_flags          = row[5] ? row[5] : "";
			e.content_flags_disabled = row[6] ? row[6] : "";
			e.min_expansion          = row[7] ? strtof(row[7], nullptr) : -1;
			e.max_expansion          = row[8] ? strtof(row[8], nullptr) : -1;

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

#endif //EQEMU_BASE_FISHING_REPOSITORY_H
