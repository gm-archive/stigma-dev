#ifndef _UVPX_PACKET_H_
#define _UVPX_PACKET_H_

#if defined(_WIN32)
#include <webm/mkvreader.hpp>
#else
#include "mkvreader.hpp"
#endif

namespace uvpx
{
    class Packet
    {
    public:
        enum class Type
        {
            Video,
            Audio
        };

    protected:
        const mkvparser::Block  *m_block;
        Type    m_type;
        double  m_time;

    public:

        Packet(const mkvparser::Block *block, Type type, double time);
        ~Packet();

        Type  type() const;
        const mkvparser::Block *block() const;
        double  time() const;
    };
}
#endif  // _UVPX_PACKET_H_
