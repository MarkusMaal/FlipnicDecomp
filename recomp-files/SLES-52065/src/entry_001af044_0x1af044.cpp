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

// Function: entry_001af044
// Address: 0x1af044 - 0x1af058
void entry_001af044_0x1af044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af044_0x1af044");
#endif

    ctx->pc = 0x1af044u;

    // 0x1af044: 0x0  nop
    ctx->pc = 0x1af044u;
    // NOP
    // 0x1af048: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1af04c: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x1af04cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1af050: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1AF050u;
    {
        const bool branch_taken_0x1af050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF050u;
        // 0x1af054: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af050) {
            ctx->pc = 0x1AEFC8u;
            return;
        }
    }
    ctx->pc = 0x1AF058u;
}
