#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001258a4
// Address: 0x1258a4 - 0x125a10
void entry_001258a4_0x1258a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001258a4_0x1258a4");
#endif

    ctx->pc = 0x1258a4u;

    // 0x1258a4: 0x8f858430  lw          $a1, -0x7BD0($gp)
    ctx->pc = 0x1258a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935600)));
    // 0x1258a8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1258a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1258ac: 0x96460060  lhu         $a2, 0x60($s2)
    ctx->pc = 0x1258acu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1258b0: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x1258b0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x1258b4: 0x346d0003  ori         $t5, $v1, 0x3
    ctx->pc = 0x1258b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1258b8: 0xe203c  dsll32      $a0, $t6, 0
    ctx->pc = 0x1258b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1258bc: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x1258bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x1258c0: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1258c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1258c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1258c8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x1258c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1258cc: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1258ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1258d0: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x1258d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1258d4: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x1258d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x1258d8: 0x240bffc0  addiu       $t3, $zero, -0x40
    ctx->pc = 0x1258d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1258dc: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x1258dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1258e0: 0x640a0004  daddiu      $t2, $zero, 0x4
    ctx->pc = 0x1258e0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x1258e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1258e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1258e8: 0x3009003f  andi        $t1, $zero, 0x3F
    ctx->pc = 0x1258e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)63);
    // 0x1258ec: 0xa6440060  sh          $a0, 0x60($s2)
    ctx->pc = 0x1258ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x1258f0: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x1258f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1258f4: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x1258f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1258f8: 0x2406f000  addiu       $a2, $zero, -0x1000
    ctx->pc = 0x1258f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1258fc: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x1258fcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x125900: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x125900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x125904: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125908: 0xa2930003  sb          $s3, 0x3($s4)
    ctx->pc = 0x125908u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 19));
    // 0x12590c: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x12590cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125910: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x125910u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x125914: 0xa68f0000  sh          $t7, 0x0($s4)
    ctx->pc = 0x125914u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x125918: 0xae8e0008  sw          $t6, 0x8($s4)
    ctx->pc = 0x125918u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 14));
    // 0x12591c: 0xae8d000c  sw          $t5, 0xC($s4)
    ctx->pc = 0x12591cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 13));
    // 0x125920: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x125920u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125924: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x125924u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x125928: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x125928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
    // 0x12592c: 0xffa300a0  sd          $v1, 0xA0($sp)
    ctx->pc = 0x12592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 3));
    // 0x125930: 0xffac00a8  sd          $t4, 0xA8($sp)
    ctx->pc = 0x125930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 12));
    // 0x125934: 0x7bac00a0  lq          $t4, 0xA0($sp)
    ctx->pc = 0x125934u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x125938: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x125938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12593c: 0x7c6c0000  sq          $t4, 0x0($v1)
    ctx->pc = 0x12593cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 12));
    // 0x125940: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x125940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125944: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x125944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x125948: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x125948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x12594c: 0x8f8d8430  lw          $t5, -0x7BD0($gp)
    ctx->pc = 0x12594cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935600)));
    // 0x125950: 0x97ae00d4  lhu         $t6, 0xD4($sp)
    ctx->pc = 0x125950u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x125954: 0x93ac00d6  lbu         $t4, 0xD6($sp)
    ctx->pc = 0x125954u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 214)));
    // 0x125958: 0x93a300d7  lbu         $v1, 0xD7($sp)
    ctx->pc = 0x125958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 215)));
    // 0x12595c: 0x31ad3fff  andi        $t5, $t5, 0x3FFF
    ctx->pc = 0x12595cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16383);
    // 0x125960: 0x1c21024  and         $v0, $t6, $v0
    ctx->pc = 0x125960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
    // 0x125964: 0x4d6825  or          $t5, $v0, $t5
    ctx->pc = 0x125964u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x125968: 0x18b1024  and         $v0, $t4, $t3
    ctx->pc = 0x125968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x12596c: 0xa7ad00d4  sh          $t5, 0xD4($sp)
    ctx->pc = 0x12596cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 13));
    // 0x125970: 0x4a5025  or          $t2, $v0, $t2
    ctx->pc = 0x125970u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x125974: 0x6b1024  and         $v0, $v1, $t3
    ctx->pc = 0x125974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x125978: 0xa3aa00d6  sb          $t2, 0xD6($sp)
    ctx->pc = 0x125978u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 214), (uint8_t)GPR_U32(ctx, 10));
    // 0x12597c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x12597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x125980: 0xa3a200d7  sb          $v0, 0xD7($sp)
    ctx->pc = 0x125980u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 215), (uint8_t)GPR_U32(ctx, 2));
    // 0x125984: 0xdfa300d0  ld          $v1, 0xD0($sp)
    ctx->pc = 0x125984u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x125988: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x125988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12598c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x12598cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x125990: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x125990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125994: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x125994u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x125998: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x125998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12599c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1259a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1259a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1259a4: 0x97a300dc  lhu         $v1, 0xDC($sp)
    ctx->pc = 0x1259a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1259a8: 0x97a200d8  lhu         $v0, 0xD8($sp)
    ctx->pc = 0x1259a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1259ac: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1259acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1259b0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1259b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1259b4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1259b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1259b8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1259b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1259bc: 0xa7a300dc  sh          $v1, 0xDC($sp)
    ctx->pc = 0x1259bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 3));
    // 0x1259c0: 0xa7a200d8  sh          $v0, 0xD8($sp)
    ctx->pc = 0x1259c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x1259c4: 0xdfa300d8  ld          $v1, 0xD8($sp)
    ctx->pc = 0x1259c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1259c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1259c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1259cc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1259ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1259d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1259d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1259d4: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1259d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1259d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1259d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1259dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1259dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1259e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1259e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1259e4: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x1259e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1259e8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1259e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x1259ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1259ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1259f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1259f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1259f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1259f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1259f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1259f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1259fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1259fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x125a00: 0x16240003  bne         $s1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125A00u;
    {
        const bool branch_taken_0x125a00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x125A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A00u;
        // 0x125a04: 0x8c4800dc  lw          $t0, 0xDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a00) {
            ctx->pc = 0x125A10u;
            return;
        }
    }
    ctx->pc = 0x125A08u;
    // 0x125a08: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x125a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x125a0c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x125a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    ctx->pc = 0x125a10u;
}
