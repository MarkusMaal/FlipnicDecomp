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

// Function: FUN_001c9030
// Address: 0x1c9030 - 0x1c90cc
void FUN_001c9030_0x1c9030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c9030_0x1c9030");
#endif

    switch (ctx->pc) {
        case 0x1c907cu: goto label_1c907c;
        case 0x1c9098u: goto label_1c9098;
        default: break;
    }

    ctx->pc = 0x1c9030u;

    // 0x1c9030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9034: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c903c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c903cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c9040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c9044: 0x8c23f8b8  lw          $v1, -0x748($at)
    ctx->pc = 0x1c9044u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F8B8u));
    // 0x1c9048: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C9048u;
    {
        const bool branch_taken_0x1c9048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9048u;
        // 0x1c904c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9048) {
            ctx->pc = 0x1C90B8u;
            goto label_1c90b8;
        }
    }
    ctx->pc = 0x1C9050u;
    // 0x1c9050: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c9050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9054: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9054u;
    {
        const bool branch_taken_0x1c9054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9054u;
        // 0x1c9058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9054) {
            ctx->pc = 0x1C9074u;
            goto label_1c9074;
        }
    }
    ctx->pc = 0x1C905Cu;
    // 0x1c905c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C905Cu;
    {
        const bool branch_taken_0x1c905c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c905c) {
            ctx->pc = 0x1C9074u;
            goto label_1c9074;
        }
    }
    ctx->pc = 0x1C9064u;
    // 0x1c9064: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9064u;
    {
        const bool branch_taken_0x1c9064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9064) {
            ctx->pc = 0x1C9074u;
            goto label_1c9074;
        }
    }
    ctx->pc = 0x1C906Cu;
    // 0x1c906c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C906Cu;
    {
        const bool branch_taken_0x1c906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C906Cu;
        // 0x1c9070: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c906c) {
            ctx->pc = 0x1C90BCu;
            goto label_1c90bc;
        }
    }
    ctx->pc = 0x1C9074u;
label_1c9074:
    // 0x1c9074: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C9074u;
    SET_GPR_U32(ctx, 31, 0x1C907Cu);
    ctx->pc = 0x1C9078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9074u;
    // 0x1c9078: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C9074u, 0x1C907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C907Cu;
label_1c907c:
    // 0x1c907c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c9080: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9080u;
    {
        const bool branch_taken_0x1c9080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9080) {
            ctx->pc = 0x1C9090u;
            goto label_1c9090;
        }
    }
    ctx->pc = 0x1C9088u;
    // 0x1c9088: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9088u;
    {
        const bool branch_taken_0x1c9088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9088u;
        // 0x1c908c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9088) {
            ctx->pc = 0x1C90B0u;
            goto label_1c90b0;
        }
    }
    ctx->pc = 0x1C9090u;
label_1c9090:
    // 0x1c9090: 0xc072e84  jal         func_1CBA10
    ctx->pc = 0x1C9090u;
    SET_GPR_U32(ctx, 31, 0x1C9098u);
    ctx->pc = 0x1C9094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9090u;
    // 0x1c9094: 0x8e04006c  lw          $a0, 0x6C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBA10u, 0x1C9090u, 0x1C9098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9098u;
label_1c9098:
    // 0x1c9098: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c9098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c909c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c90a0: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x1c90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x1c90a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c90a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c90a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c90ac: 0x0  nop
    ctx->pc = 0x1c90acu;
    // NOP
label_1c90b0:
    // 0x1c90b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C90B0u;
    {
        const bool branch_taken_0x1c90b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90B0u;
        // 0x1c90b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c90b0) {
            ctx->pc = 0x1C90C0u;
            goto label_1c90c0;
        }
    }
    ctx->pc = 0x1C90B8u;
label_1c90b8:
    // 0x1c90b8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c90bc:
    // 0x1c90bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c90bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c90c0:
    // 0x1c90c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c90c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c90c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C90C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90C4u;
        // 0x1c90c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C90C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C90CCu;
}
