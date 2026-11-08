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

// Function: entry_0021b47c
// Address: 0x21b47c - 0x21b490
void entry_0021b47c_0x21b47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b47c_0x21b47c");
#endif

    ctx->pc = 0x21b47cu;

    // 0x21b47c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x21b47cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b480: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x21b480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x21b484: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x21b484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x21b488: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21B488u;
    {
        const bool branch_taken_0x21b488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B488u;
        // 0x21b48c: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b488) {
            ctx->pc = 0x21B4C0u;
            return;
        }
    }
    ctx->pc = 0x21B490u;
}
