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

// Function: FUN_001e7a40
// Address: 0x1e7a40 - 0x1e7ae8
void FUN_001e7a40_0x1e7a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7a40_0x1e7a40");
#endif

    switch (ctx->pc) {
        case 0x1e7a9cu: goto label_1e7a9c;
        case 0x1e7aa4u: goto label_1e7aa4;
        case 0x1e7ad0u: goto label_1e7ad0;
        default: break;
    }

    ctx->pc = 0x1e7a40u;

    // 0x1e7a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7a50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a54: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E7A54u;
    {
        const bool branch_taken_0x1e7a54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A54u;
        // 0x1e7a58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a54) {
            ctx->pc = 0x1E7AD0u;
            goto label_1e7ad0;
        }
    }
    ctx->pc = 0x1E7A5Cu;
    // 0x1e7a5c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e7a60: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x1e7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1e7a64: 0x2463c320  addiu       $v1, $v1, -0x3CE0
    ctx->pc = 0x1e7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951712));
    // 0x1e7a68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E7A68u;
    {
        const bool branch_taken_0x1e7a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A68u;
        // 0x1e7a6c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a68) {
            ctx->pc = 0x1E7AA4u;
            goto label_1e7aa4;
        }
    }
    ctx->pc = 0x1E7A70u;
    // 0x1e7a70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E7A70u;
    {
        const bool branch_taken_0x1e7a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a70) {
            ctx->pc = 0x1E7AA4u;
            goto label_1e7aa4;
        }
    }
    ctx->pc = 0x1E7A78u;
    // 0x1e7a78: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e7a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7a7c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7A7Cu;
    {
        const bool branch_taken_0x1e7a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a7c) {
            ctx->pc = 0x1E7AA4u;
            goto label_1e7aa4;
        }
    }
    ctx->pc = 0x1E7A84u;
    // 0x1e7a84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e7a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7a88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e7a8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7A8Cu;
    {
        const bool branch_taken_0x1e7a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A8Cu;
        // 0x1e7a90: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a8c) {
            ctx->pc = 0x1E7AA4u;
            goto label_1e7aa4;
        }
    }
    ctx->pc = 0x1E7A94u;
    // 0x1e7a94: 0xc04018c  jal         func_100630
    ctx->pc = 0x1E7A94u;
    SET_GPR_U32(ctx, 31, 0x1E7A9Cu);
    ctx->pc = 0x1E7A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A94u;
    // 0x1e7a98: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1E7A94u, 0x1E7A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7A9Cu;
label_1e7a9c:
    // 0x1e7a9c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1E7AA4u);
    ctx->pc = 0x1E7AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A9Cu;
    // 0x1e7aa0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E7A9Cu, 0x1E7AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7AA4u;
label_1e7aa4:
    // 0x1e7aa4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7AA4u;
    {
        const bool branch_taken_0x1e7aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AA4u;
        // 0x1e7aa8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7aa4) {
            ctx->pc = 0x1E7ABCu;
            goto label_1e7abc;
        }
    }
    ctx->pc = 0x1E7AACu;
    // 0x1e7aac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e7ab0: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1e7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1e7ab4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e7ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e7ab8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e7ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e7abc:
    // 0x1e7abc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e7abcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e7ac0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7AC0u;
    {
        const bool branch_taken_0x1e7ac0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AC0u;
        // 0x1e7ac4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ac0) {
            ctx->pc = 0x1E7AD4u;
            goto label_1e7ad4;
        }
    }
    ctx->pc = 0x1E7AC8u;
    // 0x1e7ac8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E7AC8u;
    SET_GPR_U32(ctx, 31, 0x1E7AD0u);
    ctx->pc = 0x1E7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AC8u;
    // 0x1e7acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E7AC8u, 0x1E7AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7AD0u;
label_1e7ad0:
    // 0x1e7ad0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e7ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e7ad4:
    // 0x1e7ad4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e7ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7ad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AE0u;
        // 0x1e7ae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7AE8u;
}
