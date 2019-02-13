#ifndef HORIZON_ZONE_GAME_MAP_COORDINATES_HPP
#define HORIZON_ZONE_GAME_MAP_COORDINATES_HPP

#include <cstdint>
#include <stdlib.h>
#include <algorithm>

static const int8_t _directions[8][2] = {
	{ 0, 1 }, { -1, 1 }, { -1, 0 }, { -1,-1 },
	{ 0,-1 }, { 1, -1 }, { 1, 0 }, { 1, 1 },
};

template <uint16_t MAX_COORDINATES>
class Coordinates
{
public:
	Coordinates(uint16_t x = 0, uint16_t y = 0)
	: _x(x), _y(y)
	{
		//
	}

	Coordinates(const Coordinates<MAX_COORDINATES> &obj)
	: _x(obj._x), _y(obj._y)
	{
		//
	}

	Coordinates<MAX_COORDINATES> operator = (const Coordinates<MAX_COORDINATES> &right)
	{
		_x = right._x;
		_y = right._y;
		return *this;
	}

	bool operator == (Coordinates<MAX_COORDINATES> const &right) const
	{
		return (_x == right._x && _y == right._y);
	}

	bool operator != (Coordinates<MAX_COORDINATES> const &right) const
	{
		return !(*this == right);
	}

	int8_t direction_to(Coordinates<MAX_COORDINATES> const &to) const
	{
		int8_t diff_x = (to.x() - _x);
		int8_t diff_y = (to.y()- _y);
		
		for (int i = 0; i < 8; i++) {
			if (diff_x == _directions[i][0] && diff_y  == _directions[i][1])
				return i;
		}

		return -1;
	}

	template <uint16_t BOUNDS>
	bool within_range(Coordinates<BOUNDS> const &bounds, int range) const
	{
		int x_diff = _x - bounds.x();
		int y_diff = _y - bounds.y();

		return abs(x_diff) <= range && abs(y_diff) <= range;
	}

	template<uint16_t BOUNDS>
	Coordinates<BOUNDS> at_range(int range) const
	{
		int x = std::max(0, std::min((_x + range), (int) BOUNDS));
		int y = std::max(0, std::min((_y + range), (int) BOUNDS));

		return Coordinates<BOUNDS>(x, y);
	}

	template<uint16_t BLOCK_SIZE, uint16_t BLOCK_COUNT>
	Coordinates<BLOCK_COUNT> scale() const
	{
		int x = _x / BLOCK_SIZE;
		int y = _y / BLOCK_SIZE;

		return Coordinates<BLOCK_COUNT>(x, y);
	}

	uint16_t x() const { return _x; }
	uint16_t y() const { return _y; }

	void inc_x(uint16_t val)
	{
		if (_x + val < MAX_COORDINATES)
			_x += val;
		else
			_x = MAX_COORDINATES - 1;
	}

	void dec_x(uint16_t val)
	{
		if (_x > val)
			_x -= val;
		else
			_x = 0;
	}

	void inc_y(uint16_t val)
	{
		if (_y + val < MAX_COORDINATES)
			_y += val;
		else
			_y = MAX_COORDINATES - 1;
	}

	void dec_y(uint16_t val)
	{
		if (_y > val)
			_y -= val;
		else
			_y = 0;
	}

	bool valid() const
	{
		return _x < MAX_COORDINATES && _y < MAX_COORDINATES;
	}

private:
	uint16_t _x;
	uint16_t _y;
};

#endif /* HORIZON_ZONE_GAME_MAP_COORDINATES_HPP */
