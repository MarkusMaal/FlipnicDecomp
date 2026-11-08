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

// Function: entry_001315b0
// Address: 0x1315b0 - 0x1315e8
void entry_001315b0_0x1315b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001315b0_0x1315b0");
#endif

    switch (ctx->pc) {
        case 0x1315c0u: goto label_1315c0;
        case 0x1315d8u: goto label_1315d8;
        default: break;
    }

    ctx->pc = 0x1315b0u;

    // 0x1315b0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1315b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1315b4: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x1315b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1315b8: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x1315B8u;
    SET_GPR_U32(ctx, 31, 0x1315C0u);
    ctx->pc = 0x1315BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315B8u;
    // 0x1315bc: 0xac500064  sw          $s0, 0x64($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1313A0u, 0x1315B8u, 0x1315C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315C0u;
label_1315c0:
    // 0x1315c0: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x1315c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1315c4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1315c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1315c8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1315c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1315cc: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1315ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1315d0: 0xc04c93c  jal         func_1324F0
    ctx->pc = 0x1315D0u;
    SET_GPR_U32(ctx, 31, 0x1315D8u);
    ctx->pc = 0x1315D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1315D0u;
    // 0x1315d4: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324F0u, 0x1315D0u, 0x1315D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315D8u;
label_1315d8:
    // 0x1315d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1315d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1315dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1315dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1315e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1315E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1315E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1315E0u;
        // 0x1315e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1315E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1315E8u;
}
