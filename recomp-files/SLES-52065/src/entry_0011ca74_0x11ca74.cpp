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

// Function: entry_0011ca74
// Address: 0x11ca74 - 0x11cac8
void entry_0011ca74_0x11ca74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca74_0x11ca74");
#endif

    ctx->pc = 0x11ca74u;

    // 0x11ca74: 0x0  nop
    ctx->pc = 0x11ca74u;
    // NOP
    // 0x11ca78: 0x2088023  subu        $s0, $s0, $t0
    ctx->pc = 0x11ca78u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x11ca7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ca80: 0x2503000f  addiu       $v1, $t0, 0xF
    ctx->pc = 0x11ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x11ca84: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x11ca84u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x11ca88: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x11ca88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x11ca8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ca90: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x11ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x11ca94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11ca94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11ca98: 0x22738  dsll        $a0, $v0, 28
    ctx->pc = 0x11ca98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 28);
    // 0x11ca9c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x11ca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11caa0: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x11caa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11caa4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11caa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11caa8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11caa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11caac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x11caacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x11cab0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11cab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11cab4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11cab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11cab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11cabc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x11cabcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x11cac0: 0x1600ffe5  bnez        $s0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x11CAC0u;
    {
        const bool branch_taken_0x11cac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAC0u;
        // 0x11cac4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cac0) {
            ctx->pc = 0x11CA58u;
            return;
        }
    }
    ctx->pc = 0x11CAC8u;
}
