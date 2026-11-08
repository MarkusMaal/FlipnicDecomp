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

// Function: entry_001b547c
// Address: 0x1b547c - 0x1b54b0
void entry_001b547c_0x1b547c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b547c_0x1b547c");
#endif

    switch (ctx->pc) {
        case 0x1b5484u: goto label_1b5484;
        case 0x1b5498u: goto label_1b5498;
        case 0x1b54a4u: goto label_1b54a4;
        default: break;
    }

    ctx->pc = 0x1b547cu;

    // 0x1b547c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1B547Cu;
    SET_GPR_U32(ctx, 31, 0x1B5484u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1B547Cu, 0x1B5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5484u;
label_1b5484:
    // 0x1b5484: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b5484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b5488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b5488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b548c: 0x8c252e98  lw          $a1, 0x2E98($at)
    ctx->pc = 0x1b548cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x212E98u));
    // 0x1b5490: 0xc062cb4  jal         func_18B2D0
    ctx->pc = 0x1B5490u;
    SET_GPR_U32(ctx, 31, 0x1B5498u);
    ctx->pc = 0x1B5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5490u;
    // 0x1b5494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2D0u, 0x1B5490u, 0x1B5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5498u;
label_1b5498:
    // 0x1b5498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b549c: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x1B549Cu;
    SET_GPR_U32(ctx, 31, 0x1B54A4u);
    ctx->pc = 0x1B54A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B549Cu;
    // 0x1b54a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC80u, 0x1B549Cu, 0x1B54A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54A4u;
label_1b54a4:
    // 0x1b54a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b54a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54a8: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x1B54A8u;
    SET_GPR_U32(ctx, 31, 0x1B54B0u);
    ctx->pc = 0x1B54ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B54A8u;
    // 0x1b54ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC80u, 0x1B54A8u, 0x1B54B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B54B0u;
}
