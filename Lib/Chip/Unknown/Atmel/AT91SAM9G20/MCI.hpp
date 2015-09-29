#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//MultiMedia Card Interface
    namespace MciCr{    ///<Control Register
        using Addr = Register::Address<0xfffa8000,0xffffff70,0,unsigned>;
        ///Multi-Media Interface Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mcien{}; 
        ///Multi-Media Interface Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcidis{}; 
        ///Power Save Mode Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pwsen{}; 
        ///Power Save Mode Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwsdis{}; 
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace MciMr{    ///<Mode Register
        using Addr = Register::Address<0xfffa8004,0x00000000,0,unsigned>;
        ///Clock Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkdiv{}; 
        ///Power Saving Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> pwsdiv{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rdproof{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wrproof{}; 
        ///PDC Force Byte Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pdcfbyte{}; 
        ///PDC Padding Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pdcpadv{}; 
        ///PDC-oriented Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pdcmode{}; 
        ///Data Block Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blklen{}; 
    }
    namespace MciDtor{    ///<Data Timeout Register
        using Addr = Register::Address<0xfffa8008,0xffffff80,0,unsigned>;
        ///Data Timeout Cycle Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dtocyc{}; 
        ///Data Timeout Multiplier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> dtomul{}; 
    }
    namespace MciSdcr{    ///<SD/SDIO Card Register
        using Addr = Register::Address<0xfffa800c,0xffffff7c,0,unsigned>;
        ///SDCard/SDIO Slot
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sdcsel{}; 
        ///SDCard/SDIO Bus Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sdcbus{}; 
    }
    namespace MciArgr{    ///<Argument Register
        using Addr = Register::Address<0xfffa8010,0x00000000,0,unsigned>;
        ///Command Argument
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> arg{}; 
    }
    namespace MciCmdr{    ///<Command Register
        using Addr = Register::Address<0xfffa8014,0xfcc0e000,0,unsigned>;
        ///Command Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmdnb{}; 
        ///Response Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rsptyp{}; 
        ///Special Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> spcmd{}; 
        ///Open Drain Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> opdcmd{}; 
        ///Max Latency for Command to Response
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maxlat{}; 
        ///Transfer Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> trcmd{}; 
        ///Transfer Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> trdir{}; 
        ///Transfer Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> trtyp{}; 
        ///SDIO Special Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> iospcmd{}; 
    }
    namespace MciBlkr{    ///<Block Register
        using Addr = Register::Address<0xfffa8018,0x00000000,0,unsigned>;
        ///MMC/SDIO Block Count - SDIO Byte Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bcnt{}; 
        ///Data Block Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blklen{}; 
    }
    namespace MciRspr0{    ///<Response Register
        using Addr = Register::Address<0xfffa8020,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace MciRspr1{    ///<Response Register
        using Addr = Register::Address<0xfffa8024,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace MciRspr2{    ///<Response Register
        using Addr = Register::Address<0xfffa8028,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace MciRspr3{    ///<Response Register
        using Addr = Register::Address<0xfffa802c,0x00000000,0,unsigned>;
        ///Response
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsp{}; 
    }
    namespace MciRdr{    ///<Receive Data Register
        using Addr = Register::Address<0xfffa8030,0x00000000,0,unsigned>;
        ///Data to Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace MciTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0xfffa8034,0x00000000,0,unsigned>;
        ///Data to Write
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace MciSr{    ///<Status Register
        using Addr = Register::Address<0xfffa8040,0x3f803f00,0,unsigned>;
        ///Command Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///MCI Not Busy
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///End of RX Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of TX Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///RX Buffer Full
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///TX Buffer Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Response Index Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace MciIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffa8044,0x3f803f00,0,unsigned>;
        ///Command Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///End of Receive Buffer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Response Index Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Overrun Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///UnderRun Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace MciIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffa8048,0x3f803f00,0,unsigned>;
        ///Command Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///End of Receive Buffer Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Response Index Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Overrun Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///UnderRun Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace MciImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffa804c,0x3f803f00,0,unsigned>;
        ///Command Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdrdy{}; 
        ///Receiver Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Data Block Ended Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> blke{}; 
        ///Data Transfer in Progress Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dtip{}; 
        ///Data Not Busy Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> notbusy{}; 
        ///End of Receive Buffer Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///End of Transmit Buffer Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Response Index Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rinde{}; 
        ///Response Direction Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rdire{}; 
        ///Response CRC Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rcrce{}; 
        ///Response End Bit Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rende{}; 
        ///Response Time-out Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rtoe{}; 
        ///Data CRC Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dcrce{}; 
        ///Data Time-out Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Overrun Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///UnderRun Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> unre{}; 
    }
    namespace MciRpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0xfffa8100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace MciRcr{    ///<Receive Counter Register
        using Addr = Register::Address<0xfffa8104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace MciTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0xfffa8108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace MciTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0xfffa810c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace MciRnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0xfffa8110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace MciRncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0xfffa8114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace MciTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0xfffa8118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace MciTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0xfffa811c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace MciPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffa8120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace MciPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffa8124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}