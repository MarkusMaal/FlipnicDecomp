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

// Function: FUN_001b7f10
// Address: 0x1b7f10 - 0x1b7f58
void FUN_001b7f10_0x1b7f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7f10_0x1b7f10");
#endif

    switch (ctx->pc) {
        case 0x1b7f38u: goto label_1b7f38;
        case 0x1b7f44u: goto label_1b7f44;
        default: break;
    }

    ctx->pc = 0x1b7f10u;

    // 0x1b7f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7f1c: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x1b7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x1b7f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f24: 0xac860048  sw          $a2, 0x48($a0)
    ctx->pc = 0x1b7f24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 6));
    // 0x1b7f28: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1b7f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1b7f2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f30: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1B7F30u;
    SET_GPR_U32(ctx, 31, 0x1B7F38u);
    ctx->pc = 0x1B7F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F30u;
    // 0x1b7f34: 0x24a52ed0  addiu       $a1, $a1, 0x2ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1B7F30u, 0x1B7F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F38u;
label_1b7f38:
    // 0x1b7f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f3c: 0xc06e024  jal         func_1B8090
    ctx->pc = 0x1B7F3Cu;
    SET_GPR_U32(ctx, 31, 0x1B7F44u);
    ctx->pc = 0x1B7F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F3Cu;
    // 0x1b7f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8090u, 0x1B7F3Cu, 0x1B7F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F44u;
label_1b7f44:
    // 0x1b7f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7f48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7f50: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F50u;
        // 0x1b7f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7F58u;
}
