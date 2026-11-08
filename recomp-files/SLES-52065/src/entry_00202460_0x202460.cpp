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

// Function: entry_00202460
// Address: 0x202460 - 0x202474
void entry_00202460_0x202460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202460_0x202460");
#endif

    ctx->pc = 0x202460u;

    // 0x202460: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x202460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x202464: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202464u;
    {
        const bool branch_taken_0x202464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202464u;
        // 0x202468: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202464) {
            ctx->pc = 0x202474u;
            return;
        }
    }
    ctx->pc = 0x20246Cu;
    // 0x20246c: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x20246cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x202470: 0x29078  dsll        $s2, $v0, 1
    ctx->pc = 0x202470u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 1);
    ctx->pc = 0x202474u;
}
