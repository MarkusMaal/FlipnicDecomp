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

// Function: caseD_2
// Address: 0x1918a8 - 0x1918c8
void caseD_2_0x1918a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1918a8");
#endif

    ctx->pc = 0x1918a8u;

    // 0x1918a8: 0x1240029e  beqz        $s2, . + 4 + (0x29E << 2)
    ctx->pc = 0x1918A8u;
    {
        const bool branch_taken_0x1918a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1918a8) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1918B0u;
    // 0x1918b0: 0x8e440328  lw          $a0, 0x328($s2)
    ctx->pc = 0x1918b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 808)));
    // 0x1918b4: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1918b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1918b8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1918B8u;
    {
        const bool branch_taken_0x1918b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1918BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918B8u;
        // 0x1918bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918b8) {
            ctx->pc = 0x1918C8u;
            return;
        }
    }
    ctx->pc = 0x1918C0u;
    // 0x1918c0: 0x10000298  b           . + 4 + (0x298 << 2)
    ctx->pc = 0x1918C0u;
    {
        const bool branch_taken_0x1918c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918C0u;
        // 0x1918c4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918c0) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1918C8u;
}
