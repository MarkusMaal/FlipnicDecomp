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

// Function: caseD_fffffffc
// Address: 0x1919c8 - 0x1919e8
void caseD_fffffffc_0x1919c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_fffffffc_0x1919c8");
#endif

    ctx->pc = 0x1919c8u;

    // 0x1919c8: 0x12400256  beqz        $s2, . + 4 + (0x256 << 2)
    ctx->pc = 0x1919C8u;
    {
        const bool branch_taken_0x1919c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1919c8) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1919D0u;
    // 0x1919d0: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
    // 0x1919d4: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1919d8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1919D8u;
    {
        const bool branch_taken_0x1919d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1919DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919D8u;
        // 0x1919dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919d8) {
            ctx->pc = 0x1919E8u;
            return;
        }
    }
    ctx->pc = 0x1919E0u;
    // 0x1919e0: 0x10000250  b           . + 4 + (0x250 << 2)
    ctx->pc = 0x1919E0u;
    {
        const bool branch_taken_0x1919e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919E0u;
        // 0x1919e4: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919e0) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x1919E8u;
}
