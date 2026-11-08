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

// Function: entry_00142100
// Address: 0x142100 - 0x142110
void entry_00142100_0x142100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142100_0x142100");
#endif

    ctx->pc = 0x142100u;

    // 0x142100: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x142104: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x142104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x142108: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x142108u;
    {
        const bool branch_taken_0x142108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142108u;
        // 0x14210c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142108) {
            ctx->pc = 0x141F90u;
            return;
        }
    }
    ctx->pc = 0x142110u;
}
