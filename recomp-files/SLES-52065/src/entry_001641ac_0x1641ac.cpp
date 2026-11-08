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

// Function: entry_001641ac
// Address: 0x1641ac - 0x1641bc
void entry_001641ac_0x1641ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001641ac_0x1641ac");
#endif

    ctx->pc = 0x1641acu;

    // 0x1641ac: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1641ACu;
    {
        const bool branch_taken_0x1641ac = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1641B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641ACu;
        // 0x1641b0: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641ac) {
            ctx->pc = 0x1641BCu;
            return;
        }
    }
    ctx->pc = 0x1641B4u;
    // 0x1641b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1641B4u;
    {
        const bool branch_taken_0x1641b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641B4u;
        // 0x1641b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641b4) {
            ctx->pc = 0x1641DCu;
            return;
        }
    }
    ctx->pc = 0x1641BCu;
}
