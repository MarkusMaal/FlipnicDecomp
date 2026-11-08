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

// Function: entry_001f207c
// Address: 0x1f207c - 0x1f2098
void entry_001f207c_0x1f207c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f207c_0x1f207c");
#endif

    ctx->pc = 0x1f207cu;

    // 0x1f207c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F207Cu;
    {
        const bool branch_taken_0x1f207c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F207Cu;
        // 0x1f2080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f207c) {
            ctx->pc = 0x1F20C0u;
            return;
        }
    }
    ctx->pc = 0x1F2084u;
    // 0x1f2084: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1f2084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1f2088: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f2088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f208c: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f208cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f2090: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f2090u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1f2094: 0x0  nop
    ctx->pc = 0x1f2094u;
    // NOP
    ctx->pc = 0x1f2098u;
}
