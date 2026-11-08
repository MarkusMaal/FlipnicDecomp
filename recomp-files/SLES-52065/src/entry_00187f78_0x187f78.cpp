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

// Function: entry_00187f78
// Address: 0x187f78 - 0x187f8c
void entry_00187f78_0x187f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187f78_0x187f78");
#endif

    ctx->pc = 0x187f78u;

    // 0x187f78: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x187f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f7c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x187f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x187f80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x187f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187f84: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x187F84u;
    {
        const bool branch_taken_0x187f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187F84u;
        // 0x187f88: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187f84) {
            ctx->pc = 0x187FE0u;
            return;
        }
    }
    ctx->pc = 0x187F8Cu;
}
