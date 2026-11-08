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

// Function: entry_001a4080
// Address: 0x1a4080 - 0x1a4098
void entry_001a4080_0x1a4080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4080_0x1a4080");
#endif

    ctx->pc = 0x1a4080u;

    // 0x1a4080: 0x8e220938  lw          $v0, 0x938($s1)
    ctx->pc = 0x1a4080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2360)));
    // 0x1a4084: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1a4084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a4088: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4088u;
    {
        const bool branch_taken_0x1a4088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4088u;
        // 0x1a408c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4088) {
            ctx->pc = 0x1A4074u;
            return;
        }
    }
    ctx->pc = 0x1A4090u;
    // 0x1a4090: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x1a4090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
    // 0x1a4094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a4098u;
}
