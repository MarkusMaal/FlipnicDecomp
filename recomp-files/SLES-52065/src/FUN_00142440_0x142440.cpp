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

// Function: FUN_00142440
// Address: 0x142440 - 0x14249c
void FUN_00142440_0x142440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00142440_0x142440");
#endif

    switch (ctx->pc) {
        case 0x142468u: goto label_142468;
        case 0x142474u: goto label_142474;
        default: break;
    }

    ctx->pc = 0x142440u;

    // 0x142440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x142444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x142444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x142448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14244c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142450: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x142450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x142454: 0x8c910038  lw          $s1, 0x38($a0)
    ctx->pc = 0x142454u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x142458: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x142458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14245c: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x14245cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x142460: 0x12300008  beq         $s1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x142460u;
    {
        const bool branch_taken_0x142460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x142460) {
            ctx->pc = 0x142484u;
            goto label_142484;
        }
    }
    ctx->pc = 0x142468u;
label_142468:
    // 0x142468: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14246c: 0xc050928  jal         func_1424A0
    ctx->pc = 0x14246Cu;
    SET_GPR_U32(ctx, 31, 0x142474u);
    ctx->pc = 0x142470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14246Cu;
    // 0x142470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1424A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1424A0u, 0x14246Cu, 0x142474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142474u;
label_142474:
    // 0x142474: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x142474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x142478: 0x0  nop
    ctx->pc = 0x142478u;
    // NOP
    // 0x14247c: 0x1630fffa  bne         $s1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14247Cu;
    {
        const bool branch_taken_0x14247c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x14247c) {
            ctx->pc = 0x142468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142468;
        }
    }
    ctx->pc = 0x142484u;
label_142484:
    // 0x142484: 0x0  nop
    ctx->pc = 0x142484u;
    // NOP
    // 0x142488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x142488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14248c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14248cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142494: 0x3e00008  jr          $ra
    ctx->pc = 0x142494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142494u;
        // 0x142498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14249Cu;
}
