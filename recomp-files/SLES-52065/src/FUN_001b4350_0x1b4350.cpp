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

// Function: FUN_001b4350
// Address: 0x1b4350 - 0x1b43f8
void FUN_001b4350_0x1b4350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4350_0x1b4350");
#endif

    switch (ctx->pc) {
        case 0x1b4380u: goto label_1b4380;
        case 0x1b438cu: goto label_1b438c;
        case 0x1b43e0u: goto label_1b43e0;
        default: break;
    }

    ctx->pc = 0x1b4350u;

    // 0x1b4350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b4354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b4358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b435c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4364: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B4364u;
    {
        const bool branch_taken_0x1b4364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4364u;
        // 0x1b4368: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4364) {
            ctx->pc = 0x1B43E0u;
            goto label_1b43e0;
        }
    }
    ctx->pc = 0x1B436Cu;
    // 0x1b436c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1b436cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1b4370: 0x2442b8e8  addiu       $v0, $v0, -0x4718
    ctx->pc = 0x1b4370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949096));
    // 0x1b4374: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1b4374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x1b4378: 0xc04018c  jal         func_100630
    ctx->pc = 0x1B4378u;
    SET_GPR_U32(ctx, 31, 0x1B4380u);
    ctx->pc = 0x1B437Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4378u;
    // 0x1b437c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1B4378u, 0x1B4380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4380u;
label_1b4380:
    // 0x1b4380: 0x8f848718  lw          $a0, -0x78E8($gp)
    ctx->pc = 0x1b4380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x1b4384: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b4384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b4388: 0x0  nop
    ctx->pc = 0x1b4388u;
    // NOP
label_1b438c:
    // 0x1b438c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b4390: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4390u;
    {
        const bool branch_taken_0x1b4390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b4390) {
            ctx->pc = 0x1B43B4u;
            goto label_1b43b4;
        }
    }
    ctx->pc = 0x1B4398u;
    // 0x1b4398: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b439c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b439cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1b43a0: 0x8f828718  lw          $v0, -0x78E8($gp)
    ctx->pc = 0x1b43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x1b43a4: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B43A4u;
    {
        const bool branch_taken_0x1b43a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b43a4) {
            ctx->pc = 0x1B43BCu;
            goto label_1b43bc;
        }
    }
    ctx->pc = 0x1B43ACu;
    // 0x1b43ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B43ACu;
    {
        const bool branch_taken_0x1b43ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43ACu;
        // 0x1b43b0: 0xaf838718  sw          $v1, -0x78E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43ac) {
            ctx->pc = 0x1B43BCu;
            goto label_1b43bc;
        }
    }
    ctx->pc = 0x1B43B4u;
label_1b43b4:
    // 0x1b43b4: 0x1444fff5  bne         $v0, $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B43B4u;
    {
        const bool branch_taken_0x1b43b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43B4u;
        // 0x1b43b8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43b4) {
            ctx->pc = 0x1B438Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b438c;
        }
    }
    ctx->pc = 0x1B43BCu;
label_1b43bc:
    // 0x1b43bc: 0x0  nop
    ctx->pc = 0x1b43bcu;
    // NOP
    // 0x1b43c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1b43c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1b43c4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1b43c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1b43c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b43c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b43cc: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x1b43ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x1b43d0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B43D0u;
    {
        const bool branch_taken_0x1b43d0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43D0u;
        // 0x1b43d4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43d0) {
            ctx->pc = 0x1B43E0u;
            goto label_1b43e0;
        }
    }
    ctx->pc = 0x1B43D8u;
    // 0x1b43d8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B43D8u;
    SET_GPR_U32(ctx, 31, 0x1B43E0u);
    ctx->pc = 0x1B43DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B43D8u;
    // 0x1b43dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B43D8u, 0x1B43E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43E0u;
label_1b43e0:
    // 0x1b43e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b43e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b43e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b43e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b43e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b43ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b43ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b43f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B43F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43F0u;
        // 0x1b43f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B43F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B43F8u;
}
