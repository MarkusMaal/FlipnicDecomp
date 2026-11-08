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

// Function: caseD_78
// Address: 0x1d86a0 - 0x1d86b8
void caseD_78_0x1d86a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_78_0x1d86a0");
#endif

    ctx->pc = 0x1d86a0u;

    // 0x1d86a0: 0x8c83054c  lw          $v1, 0x54C($a0)
    ctx->pc = 0x1d86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d86a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d86a8: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d86ac: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1d86acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d86b0: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x1D86B0u;
    {
        const bool branch_taken_0x1d86b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86B0u;
        // 0x1d86b4: 0x90660003  lbu         $a2, 0x3($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86b0) {
            ctx->pc = 0x1D8A60u;
            return;
        }
    }
    ctx->pc = 0x1D86B8u;
}
