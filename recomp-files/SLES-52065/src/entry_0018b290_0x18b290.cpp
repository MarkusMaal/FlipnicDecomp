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

// Function: entry_0018b290
// Address: 0x18b290 - 0x18b2a8
void entry_0018b290_0x18b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b290_0x18b290");
#endif

    ctx->pc = 0x18b290u;

    // 0x18b290: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b294: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x18b294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x18b298: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x18b298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b29c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x18B29Cu;
    {
        const bool branch_taken_0x18b29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B29Cu;
        // 0x18b2a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b29c) {
            ctx->pc = 0x18B258u;
            return;
        }
    }
    ctx->pc = 0x18B2A4u;
    // 0x18b2a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18b2a8u;
}
