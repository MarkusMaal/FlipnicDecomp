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

// Function: entry_002000b8
// Address: 0x2000b8 - 0x20010c
void entry_002000b8_0x2000b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002000b8_0x2000b8");
#endif

    ctx->pc = 0x2000b8u;

label_2000b8:
    // 0x2000b8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x2000b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2000bc: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x2000bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2000c0: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x2000c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x2000c4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2000c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2000c8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2000c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2000cc: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x2000ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2000d0: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x2000d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2000d4: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x2000d8: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x2000d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2000dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2000dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2000e0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2000e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2000e4: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x2000e4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2000e8: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x2000e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2000ec: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2000ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2000f0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2000f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2000f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2000f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2000f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2000f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2000fc: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x2000fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x200100: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x200100u;
    {
        const bool branch_taken_0x200100 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x200104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200100u;
        // 0x200104: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200100) {
            ctx->pc = 0x2000B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2000b8;
        }
    }
    ctx->pc = 0x200108u;
    // 0x200108: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x200108u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x20010cu;
}
