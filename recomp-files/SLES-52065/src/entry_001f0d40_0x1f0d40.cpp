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

// Function: entry_001f0d40
// Address: 0x1f0d40 - 0x1f0d58
void entry_001f0d40_0x1f0d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0d40_0x1f0d40");
#endif

    ctx->pc = 0x1f0d40u;

    // 0x1f0d40: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F0D40u;
    {
        const bool branch_taken_0x1f0d40 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1F0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D40u;
        // 0x1f0d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d40) {
            ctx->pc = 0x1F0D80u;
            return;
        }
    }
    ctx->pc = 0x1F0D48u;
    // 0x1f0d48: 0x2666080c  addiu       $a2, $s3, 0x80C
    ctx->pc = 0x1f0d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2060));
    // 0x1f0d4c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f0d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0d50: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0d50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f0d54: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f0d54u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f0d58u;
}
