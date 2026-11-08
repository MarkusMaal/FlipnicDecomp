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

// Function: entry_0013bd48
// Address: 0x13bd48 - 0x13bd7c
void entry_0013bd48_0x13bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bd48_0x13bd48");
#endif

    switch (ctx->pc) {
        case 0x13bd54u: goto label_13bd54;
        case 0x13bd5cu: goto label_13bd5c;
        default: break;
    }

    ctx->pc = 0x13bd48u;

    // 0x13bd48: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x13bd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13bd4c: 0xc048bfc  jal         func_122FF0
    ctx->pc = 0x13BD4Cu;
    SET_GPR_U32(ctx, 31, 0x13BD54u);
    ctx->pc = 0x13BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD4Cu;
    // 0x13bd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FF0u, 0x13BD4Cu, 0x13BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD54u;
label_13bd54:
    // 0x13bd54: 0xc0401a4  jal         func_100690
    ctx->pc = 0x13BD54u;
    SET_GPR_U32(ctx, 31, 0x13BD5Cu);
    ctx->pc = 0x13BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BD54u;
    // 0x13bd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x13BD54u, 0x13BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BD5Cu;
label_13bd5c:
    // 0x13bd5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13bd60: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13bd64: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x13bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x13bd68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13bd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bd6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bd70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bd74: 0x3e00008  jr          $ra
    ctx->pc = 0x13BD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BD74u;
        // 0x13bd78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BD7Cu;
}
