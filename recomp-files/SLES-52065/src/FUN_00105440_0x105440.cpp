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

// Function: FUN_00105440
// Address: 0x105440 - 0x1054d0
void FUN_00105440_0x105440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105440_0x105440");
#endif

    switch (ctx->pc) {
        case 0x1054a0u: goto label_1054a0;
        case 0x1054b8u: goto label_1054b8;
        default: break;
    }

    ctx->pc = 0x105440u;

    // 0x105440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x105444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x105448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10544c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x105450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105454: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x105454u;
    {
        const bool branch_taken_0x105454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105454u;
        // 0x105458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105454) {
            ctx->pc = 0x1054B8u;
            goto label_1054b8;
        }
    }
    ctx->pc = 0x10545Cu;
    // 0x10545c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10545cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105460: 0x24429890  addiu       $v0, $v0, -0x6770
    ctx->pc = 0x105460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940816));
    // 0x105464: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x105464u;
    {
        const bool branch_taken_0x105464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105464u;
        // 0x105468: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105464) {
            ctx->pc = 0x1054A0u;
            goto label_1054a0;
        }
    }
    ctx->pc = 0x10546Cu;
    // 0x10546c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105470: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x105470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x105474: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x105474u;
    {
        const bool branch_taken_0x105474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105474u;
        // 0x105478: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105474) {
            ctx->pc = 0x1054A0u;
            goto label_1054a0;
        }
    }
    ctx->pc = 0x10547Cu;
    // 0x10547c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x10547cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x105480: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x105480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x105484: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x105484u;
    {
        const bool branch_taken_0x105484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105484u;
        // 0x105488: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105484) {
            ctx->pc = 0x1054A0u;
            goto label_1054a0;
        }
    }
    ctx->pc = 0x10548Cu;
    // 0x10548c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x10548cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x105490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105494: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x105494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x105498: 0xc0416c8  jal         func_105B20
    ctx->pc = 0x105498u;
    SET_GPR_U32(ctx, 31, 0x1054A0u);
    ctx->pc = 0x10549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105498u;
    // 0x10549c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B20u, 0x105498u, 0x1054A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054A0u;
label_1054a0:
    // 0x1054a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1054a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1054a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1054a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1054a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1054A8u;
    {
        const bool branch_taken_0x1054a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1054ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054A8u;
        // 0x1054ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054a8) {
            ctx->pc = 0x1054BCu;
            goto label_1054bc;
        }
    }
    ctx->pc = 0x1054B0u;
    // 0x1054b0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1054B0u;
    SET_GPR_U32(ctx, 31, 0x1054B8u);
    ctx->pc = 0x1054B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1054B0u;
    // 0x1054b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1054B0u, 0x1054B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054B8u;
label_1054b8:
    // 0x1054b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1054b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1054bc:
    // 0x1054bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1054bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1054c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1054c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1054c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1054c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1054c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1054C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1054CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054C8u;
        // 0x1054cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1054C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1054D0u;
}
