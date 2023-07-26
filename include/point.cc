#ifndef __POINT_CC__
#define __POINT_CC__
#pragma once

namespace math
{
//TODO: add a methods to restrict types
template<typename T>
class point
{
private:
T _col, _row;
public:
    Point(): _col(T()), _row(T()) {}
    Point(T column, T row): _col(column), _row(row) {}
    
    inline T get_col() noexcept
    {
        return this->_col;
    }
    inline void set_col(T new_column) noexcept
    {
        this->_col = new_column;
    }
    inline T get_row() noexcept
    {
        return this->_row;
    }
    inline void set_row(T new_row) noexcept
    {
        this->_row = new_row;
    }

    inline T& x() noexcept
    {
        return this->_col;
    }

    inline T& y() noexcept
    {
        return this->_row;
    }
};

}

#endif //__TOOLS_H__