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

// Function: entry_001c0be0
// Address: 0x1c0be0 - 0x1c0c00
void entry_001c0be0_0x1c0be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0be0_0x1c0be0");
#endif

    switch (ctx->pc) {
        case 0x1c0bf0u: goto label_1c0bf0;
        default: break;
    }

    ctx->pc = 0x1c0be0u;

    // 0x1c0be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0be4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c0be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c0be8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C0BE8u;
    SET_GPR_U32(ctx, 31, 0x1C0BF0u);
    ctx->pc = 0x1C0BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BE8u;
    // 0x1c0bec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C0BE8u, 0x1C0BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BF0u;
label_1c0bf0:
    // 0x1c0bf0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c0bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c0bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0bf8: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C0BF8u;
    SET_GPR_U32(ctx, 31, 0x1C0C00u);
    ctx->pc = 0x1C0BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BF8u;
    // 0x1c0bfc: 0x24a53f20  addiu       $a1, $a1, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C0BF8u, 0x1C0C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C00u;
}
