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

// Function: entry_001449b8
// Address: 0x1449b8 - 0x1449dc
void entry_001449b8_0x1449b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001449b8_0x1449b8");
#endif

    switch (ctx->pc) {
        case 0x1449c4u: goto label_1449c4;
        default: break;
    }

    ctx->pc = 0x1449b8u;

    // 0x1449b8: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1449b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1449bc: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x1449BCu;
    SET_GPR_U32(ctx, 31, 0x1449C4u);
    ctx->pc = 0x1449C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449BCu;
    // 0x1449c0: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x1449BCu, 0x1449C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449C4u;
label_1449c4:
    // 0x1449c4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1449c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1449c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1449c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449cc: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1449ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1449d0: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x1449d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1449d4: 0xc04c93c  jal         func_1324F0
    ctx->pc = 0x1449D4u;
    SET_GPR_U32(ctx, 31, 0x1449DCu);
    ctx->pc = 0x1449D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1449D4u;
    // 0x1449d8: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324F0u, 0x1449D4u, 0x1449DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449DCu;
}
