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

// Function: caseD_75
// Address: 0x205464 - 0x205480
void caseD_75_0x205464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_75_0x205464");
#endif

    ctx->pc = 0x205464u;

    // 0x205464: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x205464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x205468: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x205468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20546c: 0x24423628  addiu       $v0, $v0, 0x3628
    ctx->pc = 0x20546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13864));
    // 0x205470: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x205470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205474: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x205474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x205478: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x205478u;
    {
        const bool branch_taken_0x205478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205478u;
        // 0x20547c: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205478) {
            ctx->pc = 0x205584u;
            return;
        }
    }
    ctx->pc = 0x205480u;
}
