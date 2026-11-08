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

// Function: entry_001d9ba4
// Address: 0x1d9ba4 - 0x1d9bbc
void entry_001d9ba4_0x1d9ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9ba4_0x1d9ba4");
#endif

    switch (ctx->pc) {
        case 0x1d9bb8u: goto label_1d9bb8;
        default: break;
    }

    ctx->pc = 0x1d9ba4u;

    // 0x1d9ba4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9BA4u;
    {
        const bool branch_taken_0x1d9ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ba4) {
            ctx->pc = 0x1D9BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9BA4u;
            // 0x1d9ba8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9BBCu;
            return;
        }
    }
    ctx->pc = 0x1D9BACu;
    // 0x1d9bac: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1d9bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d9bb0: 0xc07548a  jal         func_1D5228
    ctx->pc = 0x1D9BB0u;
    SET_GPR_U32(ctx, 31, 0x1D9BB8u);
    ctx->pc = 0x1D9BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BB0u;
    // 0x1d9bb4: 0x26e670d0  addiu       $a2, $s7, 0x70D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 28880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5228u, 0x1D9BB0u, 0x1D9BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BB8u;
label_1d9bb8:
    // 0x1d9bb8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d9bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->pc = 0x1d9bbcu;
}
