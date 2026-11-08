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

// Function: entry_0011c63c
// Address: 0x11c63c - 0x11c650
void entry_0011c63c_0x11c63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c63c_0x11c63c");
#endif

    ctx->pc = 0x11c63cu;

    // 0x11c63c: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x11c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x11c640: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C640u;
    {
        const bool branch_taken_0x11c640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C640u;
        // 0x11c644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c640) {
            ctx->pc = 0x11C654u;
            return;
        }
    }
    ctx->pc = 0x11C648u;
    // 0x11c648: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C648u;
    {
        const bool branch_taken_0x11c648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C648u;
        // 0x11c64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c648) {
            ctx->pc = 0x11C654u;
            return;
        }
    }
    ctx->pc = 0x11C650u;
}
