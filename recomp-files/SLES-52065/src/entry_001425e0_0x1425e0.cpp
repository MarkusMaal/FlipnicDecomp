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

// Function: entry_001425e0
// Address: 0x1425e0 - 0x1425f8
void entry_001425e0_0x1425e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001425e0_0x1425e0");
#endif

    ctx->pc = 0x1425e0u;

    // 0x1425e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1425e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1425e4: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x1425e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1425e8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1425E8u;
    {
        const bool branch_taken_0x1425e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1425ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1425E8u;
        // 0x1425ec: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1425e8) {
            ctx->pc = 0x1425B4u;
            return;
        }
    }
    ctx->pc = 0x1425F0u;
    // 0x1425f0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1425F0u;
    {
        const bool branch_taken_0x1425f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425f0) {
            ctx->pc = 0x142648u;
            return;
        }
    }
    ctx->pc = 0x1425F8u;
}
