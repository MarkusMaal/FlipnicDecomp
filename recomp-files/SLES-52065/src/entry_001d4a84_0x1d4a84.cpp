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

// Function: entry_001d4a84
// Address: 0x1d4a84 - 0x1d4ab0
void entry_001d4a84_0x1d4a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4a84_0x1d4a84");
#endif

    switch (ctx->pc) {
        case 0x1d4aa4u: goto label_1d4aa4;
        default: break;
    }

    ctx->pc = 0x1d4a84u;

    // 0x1d4a84: 0x8e060230  lw          $a2, 0x230($s0)
    ctx->pc = 0x1d4a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1d4a88: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d4a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a8c: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x1d4a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x1d4a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d4a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4a98: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d4a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d4a9c: 0xc075184  jal         func_1D4610
    ctx->pc = 0x1D4A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D4AA4u);
    ctx->pc = 0x1D4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A9Cu;
    // 0x1d4aa0: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4610u, 0x1D4A9Cu, 0x1D4AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AA4u;
label_1d4aa4:
    // 0x1d4aa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4AA4u;
    {
        const bool branch_taken_0x1d4aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AA4u;
        // 0x1d4aa8: 0x8e0202d4  lw          $v0, 0x2D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4aa4) {
            ctx->pc = 0x1D4ABCu;
            return;
        }
    }
    ctx->pc = 0x1D4AACu;
    // 0x1d4aac: 0x0  nop
    ctx->pc = 0x1d4aacu;
    // NOP
    ctx->pc = 0x1d4ab0u;
}
