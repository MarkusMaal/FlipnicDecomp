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

// Function: entry_00178614
// Address: 0x178614 - 0x178634
void entry_00178614_0x178614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178614_0x178614");
#endif

    ctx->pc = 0x178614u;

    // 0x178614: 0x0  nop
    ctx->pc = 0x178614u;
    // NOP
    // 0x178618: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x178618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x17861c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x17861Cu;
    {
        const bool branch_taken_0x17861c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17861Cu;
        // 0x178620: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17861c) {
            ctx->pc = 0x1785C8u;
            return;
        }
    }
    ctx->pc = 0x178624u;
    // 0x178624: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x178624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x178628: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x178628u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17862c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x17862Cu;
    {
        const bool branch_taken_0x17862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17862Cu;
        // 0x178630: 0x8fb0007c  lw          $s0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17862c) {
            ctx->pc = 0x1786C4u;
            return;
        }
    }
    ctx->pc = 0x178634u;
}
