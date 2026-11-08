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

// Function: entry_0018a34c
// Address: 0x18a34c - 0x18a364
void entry_0018a34c_0x18a34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a34c_0x18a34c");
#endif

    ctx->pc = 0x18a34cu;

    // 0x18a34c: 0x0  nop
    ctx->pc = 0x18a34cu;
    // NOP
    // 0x18a350: 0x290200e0  slti        $v0, $t0, 0xE0
    ctx->pc = 0x18a350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x18a354: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A354u;
    {
        const bool branch_taken_0x18a354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A354u;
        // 0x18a358: 0x290100fd  slti        $at, $t0, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)253) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a354) {
            ctx->pc = 0x18A374u;
            return;
        }
    }
    ctx->pc = 0x18A35Cu;
    // 0x18a35c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A35Cu;
    {
        const bool branch_taken_0x18a35c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a35c) {
            ctx->pc = 0x18A374u;
            return;
        }
    }
    ctx->pc = 0x18A364u;
}
