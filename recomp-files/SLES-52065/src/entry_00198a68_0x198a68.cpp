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

// Function: entry_00198a68
// Address: 0x198a68 - 0x198a80
void entry_00198a68_0x198a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a68_0x198a68");
#endif

    ctx->pc = 0x198a68u;

    // 0x198a68: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x198a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x198a6c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x198a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x198a70: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198A70u;
    {
        const bool branch_taken_0x198a70 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x198A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A70u;
        // 0x198a74: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a70) {
            ctx->pc = 0x198A80u;
            return;
        }
    }
    ctx->pc = 0x198A78u;
    // 0x198a78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198a7c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x198a7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x198a80u;
}
