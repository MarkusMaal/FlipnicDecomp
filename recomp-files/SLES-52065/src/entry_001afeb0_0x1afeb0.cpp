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

// Function: entry_001afeb0
// Address: 0x1afeb0 - 0x1afec0
void entry_001afeb0_0x1afeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afeb0_0x1afeb0");
#endif

    ctx->pc = 0x1afeb0u;

    // 0x1afeb0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x1afeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1afeb4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AFEB4u;
    {
        const bool branch_taken_0x1afeb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEB4u;
        // 0x1afeb8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afeb4) {
            ctx->pc = 0x1AFEC0u;
            return;
        }
    }
    ctx->pc = 0x1AFEBCu;
    // 0x1afebc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1afebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x1afec0u;
}
