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

// Function: entry_001a47cc
// Address: 0x1a47cc - 0x1a47e8
void entry_001a47cc_0x1a47cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a47cc_0x1a47cc");
#endif

    ctx->pc = 0x1a47ccu;

    // 0x1a47cc: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x1a47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1a47d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A47D0u;
    {
        const bool branch_taken_0x1a47d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47D0u;
        // 0x1a47d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47d0) {
            ctx->pc = 0x1A47E8u;
            return;
        }
    }
    ctx->pc = 0x1A47D8u;
    // 0x1a47d8: 0x8e220674  lw          $v0, 0x674($s1)
    ctx->pc = 0x1a47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
    // 0x1a47dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A47DCu;
    {
        const bool branch_taken_0x1a47dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47DCu;
        // 0x1a47e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47dc) {
            ctx->pc = 0x1A4800u;
            return;
        }
    }
    ctx->pc = 0x1A47E4u;
    // 0x1a47e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a47e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a47e8u;
}
