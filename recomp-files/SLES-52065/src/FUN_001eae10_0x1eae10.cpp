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

// Function: FUN_001eae10
// Address: 0x1eae10 - 0x1eae5c
void FUN_001eae10_0x1eae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eae10_0x1eae10");
#endif

    switch (ctx->pc) {
        case 0x1eae30u: goto label_1eae30;
        case 0x1eae3cu: goto label_1eae3c;
        case 0x1eae4cu: goto label_1eae4c;
        default: break;
    }

    ctx->pc = 0x1eae10u;

    // 0x1eae10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eae14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eae18: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x1eae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1eae1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eae1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eae20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1eae20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1eae24: 0x30500040  andi        $s0, $v0, 0x40
    ctx->pc = 0x1eae24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1eae28: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAE28u;
    SET_GPR_U32(ctx, 31, 0x1EAE30u);
    ctx->pc = 0x1EAE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE28u;
    // 0x1eae2c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAE28u, 0x1EAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE30u;
label_1eae30:
    // 0x1eae30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eae30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae34: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAE34u;
    SET_GPR_U32(ctx, 31, 0x1EAE3Cu);
    ctx->pc = 0x1EAE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE34u;
    // 0x1eae38: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAE34u, 0x1EAE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE3Cu;
label_1eae3c:
    // 0x1eae3c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAE3Cu;
    {
        const bool branch_taken_0x1eae3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE3Cu;
        // 0x1eae40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae3c) {
            ctx->pc = 0x1EAE4Cu;
            goto label_1eae4c;
        }
    }
    ctx->pc = 0x1EAE44u;
    // 0x1eae44: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1EAE44u;
    SET_GPR_U32(ctx, 31, 0x1EAE4Cu);
    ctx->pc = 0x1EAE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE44u;
    // 0x1eae48: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1EAE44u, 0x1EAE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE4Cu;
label_1eae4c:
    // 0x1eae4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eae4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eae50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eae50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eae54: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE54u;
        // 0x1eae58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAE5Cu;
}
