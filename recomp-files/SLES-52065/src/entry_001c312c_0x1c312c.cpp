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

// Function: entry_001c312c
// Address: 0x1c312c - 0x1c3148
void entry_001c312c_0x1c312c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c312c_0x1c312c");
#endif

    switch (ctx->pc) {
        case 0x1c3138u: goto label_1c3138;
        case 0x1c3144u: goto label_1c3144;
        default: break;
    }

    ctx->pc = 0x1c312cu;

    // 0x1c312c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3130: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C3130u;
    SET_GPR_U32(ctx, 31, 0x1C3138u);
    ctx->pc = 0x1C3134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3130u;
    // 0x1c3134: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C3130u, 0x1C3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3138u;
label_1c3138:
    // 0x1c3138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c313c: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1C313Cu;
    SET_GPR_U32(ctx, 31, 0x1C3144u);
    ctx->pc = 0x1C3140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C313Cu;
    // 0x1c3140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1C313Cu, 0x1C3144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3144u;
label_1c3144:
    // 0x1c3144: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1c3144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->pc = 0x1c3148u;
}
