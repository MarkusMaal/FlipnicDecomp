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

// Function: entry_001240c4
// Address: 0x1240c4 - 0x124198
void entry_001240c4_0x1240c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001240c4_0x1240c4");
#endif

    ctx->pc = 0x1240c4u;

    // 0x1240c4: 0x0  nop
    ctx->pc = 0x1240c4u;
    // NOP
    // 0x1240c8: 0x92850068  lbu         $a1, 0x68($s4)
    ctx->pc = 0x1240c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x1240cc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1240ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1240d0: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x1240d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1240d4: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1240d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1240d8: 0x240cffe3  addiu       $t4, $zero, -0x1D
    ctx->pc = 0x1240d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x1240dc: 0x240afe3f  addiu       $t2, $zero, -0x1C1
    ctx->pc = 0x1240dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
    // 0x1240e0: 0x640b0140  daddiu      $t3, $zero, 0x140
    ctx->pc = 0x1240e0u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)320);
    // 0x1240e4: 0x2408ffdf  addiu       $t0, $zero, -0x21
    ctx->pc = 0x1240e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1240e8: 0x64090020  daddiu      $t1, $zero, 0x20
    ctx->pc = 0x1240e8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x1240ec: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x1240ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1240f0: 0x43840  sll         $a3, $a0, 1
    ctx->pc = 0x1240f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1240f4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1240f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1240f8: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1240f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1240fc: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1240fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x124100: 0xa2820068  sb          $v0, 0x68($s4)
    ctx->pc = 0x124100u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x124104: 0x2404ffe7  addiu       $a0, $zero, -0x19
    ctx->pc = 0x124104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x124108: 0x8e8e008c  lw          $t6, 0x8C($s4)
    ctx->pc = 0x124108u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x12410c: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x12410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x124110: 0x928d0068  lbu         $t5, 0x68($s4)
    ctx->pc = 0x124110u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x124114: 0x30030fff  andi        $v1, $zero, 0xFFF
    ctx->pc = 0x124114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)4095);
    // 0x124118: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x124118u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x12411c: 0x1ac6024  and         $t4, $t5, $t4
    ctx->pc = 0x12411cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x124120: 0x31cd0007  andi        $t5, $t6, 0x7
    ctx->pc = 0x124120u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)7);
    // 0x124124: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x124124u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x124128: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x124128u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x12412c: 0xa28c0068  sb          $t4, 0x68($s4)
    ctx->pc = 0x12412cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 104), (uint8_t)GPR_U32(ctx, 12));
    // 0x124130: 0x968c0068  lhu         $t4, 0x68($s4)
    ctx->pc = 0x124130u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x124134: 0x18a5024  and         $t2, $t4, $t2
    ctx->pc = 0x124134u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 10));
    // 0x124138: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x124138u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x12413c: 0xa68a0068  sh          $t2, 0x68($s4)
    ctx->pc = 0x12413cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 104), (uint16_t)GPR_U32(ctx, 10));
    // 0x124140: 0x928a0068  lbu         $t2, 0x68($s4)
    ctx->pc = 0x124140u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x124144: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x124144u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x124148: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x124148u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x12414c: 0xa2880068  sb          $t0, 0x68($s4)
    ctx->pc = 0x12414cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 104), (uint8_t)GPR_U32(ctx, 8));
    // 0x124150: 0x92880069  lbu         $t0, 0x69($s4)
    ctx->pc = 0x124150u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 105)));
    // 0x124154: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x124154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x124158: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x124158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x12415c: 0xa2860069  sb          $a2, 0x69($s4)
    ctx->pc = 0x12415cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 105), (uint8_t)GPR_U32(ctx, 6));
    // 0x124160: 0x9286006a  lbu         $a2, 0x6A($s4)
    ctx->pc = 0x124160u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 106)));
    // 0x124164: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x124164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x124168: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x124168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x12416c: 0xa284006a  sb          $a0, 0x6A($s4)
    ctx->pc = 0x12416cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 106), (uint8_t)GPR_U32(ctx, 4));
    // 0x124170: 0x9684006c  lhu         $a0, 0x6C($s4)
    ctx->pc = 0x124170u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x124174: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x124174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x124178: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x124178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12417c: 0xa682006c  sh          $v0, 0x6C($s4)
    ctx->pc = 0x12417cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x124180: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x124180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x124184: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x124184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x124188: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x124188u;
    {
        const bool branch_taken_0x124188 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124188u;
        // 0x12418c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124188) {
            ctx->pc = 0x124198u;
            return;
        }
    }
    ctx->pc = 0x124190u;
    // 0x124190: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x124190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x124194: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x124194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    ctx->pc = 0x124198u;
}
