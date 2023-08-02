#ifndef __POINT_H__
#define __POINT_H__

namespace math
{
template<typename T>
class point
{
private:
T _col, _row;
public:
    point(): _col(T()), _row(T()) {}
    point(T column, T row): _col(column), _row(row) {}
    
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