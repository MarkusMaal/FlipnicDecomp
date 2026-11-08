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

// Function: entry_001ad65c
// Address: 0x1ad65c - 0x1ad66c
void entry_001ad65c_0x1ad65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad65c_0x1ad65c");
#endif

    ctx->pc = 0x1ad65cu;

    // 0x1ad65c: 0x8e2306c4  lw          $v1, 0x6C4($s1)
    ctx->pc = 0x1ad65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1732)));
    // 0x1ad660: 0x18600113  blez        $v1, . + 4 + (0x113 << 2)
    ctx->pc = 0x1AD660u;
    {
        const bool branch_taken_0x1ad660 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AD664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD660u;
        // 0x1ad664: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad660) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD668u;
    // 0x1ad668: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ad668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ad66cu;
}
