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

// Function: caseD_4
// Address: 0x1919a0 - 0x1919c0
void caseD_4_0x1919a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1919a0");
#endif

    ctx->pc = 0x1919a0u;

    // 0x1919a0: 0x12400260  beqz        $s2, . + 4 + (0x260 << 2)
    ctx->pc = 0x1919A0u;
    {
        const bool branch_taken_0x1919a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919a0) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1919A8u;
    // 0x1919a8: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x1919a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
    // 0x1919ac: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1919acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1919b0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1919B0u;
    {
        const bool branch_taken_0x1919b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1919B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919B0u;
        // 0x1919b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919b0) {
            ctx->pc = 0x1919C0u;
            return;
        }
    }
    ctx->pc = 0x1919B8u;
    // 0x1919b8: 0x1000025a  b           . + 4 + (0x25A << 2)
    ctx->pc = 0x1919B8u;
    {
        const bool branch_taken_0x1919b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919B8u;
        // 0x1919bc: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919b8) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1919C0u;
}
