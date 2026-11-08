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

// Function: entry_001b4e88
// Address: 0x1b4e88 - 0x1b4eb0
void entry_001b4e88_0x1b4e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4e88_0x1b4e88");
#endif

    switch (ctx->pc) {
        case 0x1b4e98u: goto label_1b4e98;
        case 0x1b4ea4u: goto label_1b4ea4;
        default: break;
    }

    ctx->pc = 0x1b4e88u;

    // 0x1b4e88: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1b4e88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b4e8c: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1b4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1b4e90: 0xc07307c  jal         func_1CC1F0
    ctx->pc = 0x1B4E90u;
    SET_GPR_U32(ctx, 31, 0x1B4E98u);
    ctx->pc = 0x1B4E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E90u;
    // 0x1b4e94: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1F0u, 0x1B4E90u, 0x1B4E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E98u;
label_1b4e98:
    // 0x1b4e98: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1b4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1b4e9c: 0xc073084  jal         func_1CC210
    ctx->pc = 0x1B4E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B4EA4u);
    ctx->pc = 0x1B4EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E9Cu;
    // 0x1b4ea0: 0x8c440050  lw          $a0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC210u, 0x1B4E9Cu, 0x1B4EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EA4u;
label_1b4ea4:
    // 0x1b4ea4: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1b4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1b4ea8: 0xc073080  jal         func_1CC200
    ctx->pc = 0x1B4EA8u;
    SET_GPR_U32(ctx, 31, 0x1B4EB0u);
    ctx->pc = 0x1B4EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EA8u;
    // 0x1b4eac: 0x8c440080  lw          $a0, 0x80($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC200u, 0x1B4EA8u, 0x1B4EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EB0u;
}
