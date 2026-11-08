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

// Function: entry_001f1bf8
// Address: 0x1f1bf8 - 0x1f1c10
void entry_001f1bf8_0x1f1bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1bf8_0x1f1bf8");
#endif

    ctx->pc = 0x1f1bf8u;

    // 0x1f1bf8: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1BF8u;
    {
        const bool branch_taken_0x1f1bf8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1F1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1BF8u;
        // 0x1f1bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1bf8) {
            ctx->pc = 0x1F1C38u;
            return;
        }
    }
    ctx->pc = 0x1F1C00u;
    // 0x1f1c00: 0x2646080c  addiu       $a2, $s2, 0x80C
    ctx->pc = 0x1f1c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2060));
    // 0x1f1c04: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1f1c04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f1c08: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f1c08u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f1c0c: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f1c0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x1f1c10u;
}
