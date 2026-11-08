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

// Function: entry_0013e470
// Address: 0x13e470 - 0x13e484
void entry_0013e470_0x13e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e470_0x13e470");
#endif

    ctx->pc = 0x13e470u;

    // 0x13e470: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13e470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13e474: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x13e474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x13e478: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x13e478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x13e47c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x13E47Cu;
    {
        const bool branch_taken_0x13e47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E47Cu;
        // 0x13e480: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e47c) {
            ctx->pc = 0x13E3E0u;
            return;
        }
    }
    ctx->pc = 0x13E484u;
}
