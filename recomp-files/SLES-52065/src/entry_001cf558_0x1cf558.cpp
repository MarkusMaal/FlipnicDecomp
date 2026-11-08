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

// Function: entry_001cf558
// Address: 0x1cf558 - 0x1cf56c
void entry_001cf558_0x1cf558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf558_0x1cf558");
#endif

    ctx->pc = 0x1cf558u;

    // 0x1cf558: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x1cf558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
    // 0x1cf55c: 0x8ea20078  lw          $v0, 0x78($s5)
    ctx->pc = 0x1cf55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1cf560: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CF560u;
    {
        const bool branch_taken_0x1cf560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF560u;
        // 0x1cf564: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf560) {
            ctx->pc = 0x1CF5BCu;
            return;
        }
    }
    ctx->pc = 0x1CF568u;
    // 0x1cf568: 0x26060005  addiu       $a2, $s0, 0x5
    ctx->pc = 0x1cf568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    ctx->pc = 0x1cf56cu;
}
