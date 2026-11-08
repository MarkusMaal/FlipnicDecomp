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

// Function: caseD_0
// Address: 0x1fc600 - 0x1fc61c
void caseD_0_0x1fc600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1fc600");
#endif

    ctx->pc = 0x1fc600u;

    // 0x1fc600: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fc600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc604: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fc604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc608: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1fc608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1fc60c: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x1fc60cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1fc610: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1fc610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1fc614: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC614u;
    {
        const bool branch_taken_0x1fc614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC614u;
        // 0x1fc618: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc614) {
            ctx->pc = 0x1FC664u;
            return;
        }
    }
    ctx->pc = 0x1FC61Cu;
}
