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

// Function: caseD_70
// Address: 0x2054d8 - 0x2054f8
void caseD_70_0x2054d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_70_0x2054d8");
#endif

    ctx->pc = 0x2054d8u;

    // 0x2054d8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2054d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2054dc: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x2054dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
    // 0x2054e0: 0x24423628  addiu       $v0, $v0, 0x3628
    ctx->pc = 0x2054e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13864));
    // 0x2054e4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2054e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2054e8: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2054e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x2054ec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2054ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2054f0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2054F0u;
    {
        const bool branch_taken_0x2054f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2054F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054F0u;
        // 0x2054f4: 0xafa20260  sw          $v0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2054f0) {
            ctx->pc = 0x205584u;
            return;
        }
    }
    ctx->pc = 0x2054F8u;
}
