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

// Function: entry_00108a70
// Address: 0x108a70 - 0x108a80
void entry_00108a70_0x108a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108a70_0x108a70");
#endif

    ctx->pc = 0x108a70u;

    // 0x108a70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x108a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x108a74: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x108a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108a78: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x108A78u;
    {
        const bool branch_taken_0x108a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A78u;
        // 0x108a7c: 0x651018  mult        $v0, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a78) {
            ctx->pc = 0x108A54u;
            return;
        }
    }
    ctx->pc = 0x108A80u;
}
