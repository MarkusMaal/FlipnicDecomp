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
// Address: 0x191738 - 0x191768
void caseD_0_0x191738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x191738");
#endif

    ctx->pc = 0x191738u;

    // 0x191738: 0x124002fa  beqz        $s2, . + 4 + (0x2FA << 2)
    ctx->pc = 0x191738u;
    {
        const bool branch_taken_0x191738 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x191738) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191740u;
    // 0x191740: 0x8e440320  lw          $a0, 0x320($s2)
    ctx->pc = 0x191740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x191744: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x191744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191748: 0x108302f6  beq         $a0, $v1, . + 4 + (0x2F6 << 2)
    ctx->pc = 0x191748u;
    {
        const bool branch_taken_0x191748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x191748) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191750u;
    // 0x191750: 0x8c430510  lw          $v1, 0x510($v0)
    ctx->pc = 0x191750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1296)));
    // 0x191754: 0x146002f3  bnez        $v1, . + 4 + (0x2F3 << 2)
    ctx->pc = 0x191754u;
    {
        const bool branch_taken_0x191754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x191758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191754u;
        // 0x191758: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191754) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x19175Cu;
    // 0x19175c: 0xac4304d0  sw          $v1, 0x4D0($v0)
    ctx->pc = 0x19175cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
    // 0x191760: 0x100002f0  b           . + 4 + (0x2F0 << 2)
    ctx->pc = 0x191760u;
    {
        const bool branch_taken_0x191760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191760u;
        // 0x191764: 0xac430510  sw          $v1, 0x510($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191760) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191768u;
}
