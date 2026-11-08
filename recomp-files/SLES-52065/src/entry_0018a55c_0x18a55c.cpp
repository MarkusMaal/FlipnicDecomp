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

// Function: entry_0018a55c
// Address: 0x18a55c - 0x18a570
void entry_0018a55c_0x18a55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a55c_0x18a55c");
#endif

    ctx->pc = 0x18a55cu;

    // 0x18a55c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18a560: 0x16830003  bne         $s4, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A560u;
    {
        const bool branch_taken_0x18a560 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a560) {
            ctx->pc = 0x18A570u;
            return;
        }
    }
    ctx->pc = 0x18A568u;
    // 0x18a568: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18A568u;
    {
        const bool branch_taken_0x18a568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A568u;
        // 0x18a56c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a568) {
            ctx->pc = 0x18A57Cu;
            return;
        }
    }
    ctx->pc = 0x18A570u;
}
