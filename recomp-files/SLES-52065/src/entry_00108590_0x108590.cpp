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

// Function: entry_00108590
// Address: 0x108590 - 0x1085a8
void entry_00108590_0x108590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108590_0x108590");
#endif

    switch (ctx->pc) {
        case 0x1085a0u: goto label_1085a0;
        default: break;
    }

    ctx->pc = 0x108590u;

    // 0x108590: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x108590u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x108594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108598: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x108598u;
    SET_GPR_U32(ctx, 31, 0x1085A0u);
    ctx->pc = 0x10859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108598u;
    // 0x10859c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x108598u, 0x1085A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085A0u;
label_1085a0:
    // 0x1085a0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1085A0u;
    {
        const bool branch_taken_0x1085a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1085a0) {
            ctx->pc = 0x1086BCu;
            return;
        }
    }
    ctx->pc = 0x1085A8u;
}
