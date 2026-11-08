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

// Function: entry_001b48f8
// Address: 0x1b48f8 - 0x1b4910
void entry_001b48f8_0x1b48f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b48f8_0x1b48f8");
#endif

    ctx->pc = 0x1b48f8u;

    // 0x1b48f8: 0xffa00078  sd          $zero, 0x78($sp)
    ctx->pc = 0x1b48f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 0));
    // 0x1b48fc: 0xffa30070  sd          $v1, 0x70($sp)
    ctx->pc = 0x1b48fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 3));
    // 0x1b4900: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b4900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4904: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b4904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4908: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1B4908u;
    {
        const bool branch_taken_0x1b4908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4908u;
        // 0x1b490c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4908) {
            ctx->pc = 0x1B4A08u;
            return;
        }
    }
    ctx->pc = 0x1B4910u;
}
