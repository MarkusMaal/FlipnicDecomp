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

// Function: entry_00190270
// Address: 0x190270 - 0x190280
void entry_00190270_0x190270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190270_0x190270");
#endif

    ctx->pc = 0x190270u;

    // 0x190270: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190270u;
    {
        const bool branch_taken_0x190270 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x190274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190270u;
        // 0x190274: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190270) {
            ctx->pc = 0x190280u;
            return;
        }
    }
    ctx->pc = 0x190278u;
    // 0x190278: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x190278u;
    {
        const bool branch_taken_0x190278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190278u;
        // 0x19027c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190278) {
            ctx->pc = 0x190478u;
            return;
        }
    }
    ctx->pc = 0x190280u;
}
