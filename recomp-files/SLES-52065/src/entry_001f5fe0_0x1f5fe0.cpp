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

// Function: entry_001f5fe0
// Address: 0x1f5fe0 - 0x1f6000
void entry_001f5fe0_0x1f5fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5fe0_0x1f5fe0");
#endif

    switch (ctx->pc) {
        case 0x1f5fe8u: goto label_1f5fe8;
        case 0x1f5ffcu: goto label_1f5ffc;
        default: break;
    }

    ctx->pc = 0x1f5fe0u;

    // 0x1f5fe0: 0xc07d7ba  jal         func_1F5EE8
    ctx->pc = 0x1F5FE0u;
    SET_GPR_U32(ctx, 31, 0x1F5FE8u);
    ctx->pc = 0x1F5FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FE0u;
    // 0x1f5fe4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5EE8u, 0x1F5FE0u, 0x1F5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FE8u;
label_1f5fe8:
    // 0x1f5fe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ff0: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1f5ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f5ff4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1F5FF4u;
    SET_GPR_U32(ctx, 31, 0x1F5FFCu);
    ctx->pc = 0x1F5FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FF4u;
    // 0x1f5ff8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1F5FF4u, 0x1F5FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FFCu;
label_1f5ffc:
    // 0x1f5ffc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1f5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x1f6000u;
}
