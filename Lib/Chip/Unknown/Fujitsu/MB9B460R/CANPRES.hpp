#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CAN Prescaler Register
    namespace CanpresCanpre{    ///<CAN Prescaler Register
        using Addr = Register::Address<0x40037000,0xfffffff0,0x00000000,unsigned char>;
        ///CAN prescaler setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> canpre{}; 
    }
}
