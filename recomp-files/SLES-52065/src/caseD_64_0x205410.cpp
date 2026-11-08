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

// Function: caseD_64
// Address: 0x205410 - 0x20542c
void caseD_64_0x205410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_64_0x205410");
#endif

    ctx->pc = 0x205410u;

    // 0x205410: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x205410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x205414: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x205414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x205418: 0x244233d0  addiu       $v0, $v0, 0x33D0
    ctx->pc = 0x205418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13264));
    // 0x20541c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x20541cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x205420: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x205420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x205424: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x205424u;
    {
        const bool branch_taken_0x205424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205424u;
        // 0x205428: 0xafa40260  sw          $a0, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205424) {
            ctx->pc = 0x205584u;
            return;
        }
    }
    ctx->pc = 0x20542Cu;
}
