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

// Function: entry_0011a1a4
// Address: 0x11a1a4 - 0x11a1d8
void entry_0011a1a4_0x11a1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a1a4_0x11a1a4");
#endif

    switch (ctx->pc) {
        case 0x11a1c8u: goto label_11a1c8;
        case 0x11a1d4u: goto label_11a1d4;
        default: break;
    }

    ctx->pc = 0x11a1a4u;

    // 0x11a1a4: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x11a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x11a1a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11a1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1ac: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x11a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x11a1b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a1b4: 0xafb30064  sw          $s3, 0x64($sp)
    ctx->pc = 0x11a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
    // 0x11a1b8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x11a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x11a1bc: 0xafb20068  sw          $s2, 0x68($sp)
    ctx->pc = 0x11a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
    // 0x11a1c0: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11A1C0u;
    SET_GPR_U32(ctx, 31, 0x11A1C8u);
    ctx->pc = 0x11A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1C0u;
    // 0x11a1c4: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11A1C0u, 0x11A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1C8u;
label_11a1c8:
    // 0x11a1c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x11a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11a1cc: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x11A1CCu;
    SET_GPR_U32(ctx, 31, 0x11A1D4u);
    ctx->pc = 0x11A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1CCu;
    // 0x11a1d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x11A1CCu, 0x11A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1D4u;
label_11a1d4:
    // 0x11a1d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11a1d8u;
}
