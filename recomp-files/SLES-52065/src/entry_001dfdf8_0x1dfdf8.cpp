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

// Function: entry_001dfdf8
// Address: 0x1dfdf8 - 0x1dfe10
void entry_001dfdf8_0x1dfdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfdf8_0x1dfdf8");
#endif

    ctx->pc = 0x1dfdf8u;

    // 0x1dfdf8: 0x8ea5ab10  lw          $a1, -0x54F0($s5)
    ctx->pc = 0x1dfdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945552)));
    // 0x1dfdfc: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DFDFCu;
    {
        const bool branch_taken_0x1dfdfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfdfc) {
            ctx->pc = 0x1DFE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DFDFCu;
            // 0x1dfe00: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DFE14u;
            return;
        }
    }
    ctx->pc = 0x1DFE04u;
    // 0x1dfe04: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1dfe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dfe08: 0xc07548a  jal         func_1D5228
    ctx->pc = 0x1DFE08u;
    SET_GPR_U32(ctx, 31, 0x1DFE10u);
    ctx->pc = 0x1DFE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE08u;
    // 0x1dfe0c: 0x26e6a310  addiu       $a2, $s7, -0x5CF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5228u, 0x1DFE08u, 0x1DFE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE10u;
}
