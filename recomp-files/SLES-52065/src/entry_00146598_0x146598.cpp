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

// Function: entry_00146598
// Address: 0x146598 - 0x1465b8
void entry_00146598_0x146598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146598_0x146598");
#endif

    switch (ctx->pc) {
        case 0x1465a4u: goto label_1465a4;
        case 0x1465b0u: goto label_1465b0;
        default: break;
    }

    ctx->pc = 0x146598u;

    // 0x146598: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x146598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x14659c: 0xc04018c  jal         func_100630
    ctx->pc = 0x14659Cu;
    SET_GPR_U32(ctx, 31, 0x1465A4u);
    ctx->pc = 0x1465A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14659Cu;
    // 0x1465a0: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x14659Cu, 0x1465A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465A4u;
label_1465a4:
    // 0x1465a4: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x1465a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x1465a8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1465A8u;
    SET_GPR_U32(ctx, 31, 0x1465B0u);
    ctx->pc = 0x1465ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1465A8u;
    // 0x1465ac: 0x8c440120  lw          $a0, 0x120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1465A8u, 0x1465B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465B0u;
label_1465b0:
    // 0x1465b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1465b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1465b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1465b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1465b8u;
}
