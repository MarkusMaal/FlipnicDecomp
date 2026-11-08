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

// Function: entry_0011aab8
// Address: 0x11aab8 - 0x11aad0
void entry_0011aab8_0x11aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aab8_0x11aab8");
#endif

    ctx->pc = 0x11aab8u;

    // 0x11aab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aabc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AABCu;
    {
        const bool branch_taken_0x11aabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AABCu;
        // 0x11aac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aabc) {
            ctx->pc = 0x11AAD0u;
            return;
        }
    }
    ctx->pc = 0x11AAC4u;
    // 0x11aac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11aac8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11AAC8u;
    {
        const bool branch_taken_0x11aac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAC8u;
        // 0x11aacc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aac8) {
            ctx->pc = 0x11AB0Cu;
            return;
        }
    }
    ctx->pc = 0x11AAD0u;
}
