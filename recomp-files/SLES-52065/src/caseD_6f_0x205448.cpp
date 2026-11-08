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

// Function: caseD_6f
// Address: 0x205448 - 0x205464
void caseD_6f_0x205448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6f_0x205448");
#endif

    ctx->pc = 0x205448u;

    // 0x205448: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x205448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x20544c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x20544cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205450: 0x24423628  addiu       $v0, $v0, 0x3628
    ctx->pc = 0x205450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13864));
    // 0x205454: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x205454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x205458: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x205458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20545c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x20545Cu;
    {
        const bool branch_taken_0x20545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20545Cu;
        // 0x205460: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20545c) {
            ctx->pc = 0x205584u;
            return;
        }
    }
    ctx->pc = 0x205464u;
}
