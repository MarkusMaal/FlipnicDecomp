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

// Function: FUN_001e1a90
// Address: 0x1e1a90 - 0x1e1b08
void FUN_001e1a90_0x1e1a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e1a90_0x1e1a90");
#endif

    switch (ctx->pc) {
        case 0x1e1ad8u: goto label_1e1ad8;
        case 0x1e1af0u: goto label_1e1af0;
        default: break;
    }

    ctx->pc = 0x1e1a90u;

    // 0x1e1a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e1a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e1a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1aa4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E1AA4u;
    {
        const bool branch_taken_0x1e1aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AA4u;
        // 0x1e1aa8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1aa4) {
            ctx->pc = 0x1E1AF0u;
            goto label_1e1af0;
        }
    }
    ctx->pc = 0x1E1AACu;
    // 0x1e1aac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1ab0: 0x2442c230  addiu       $v0, $v0, -0x3DD0
    ctx->pc = 0x1e1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951472));
    // 0x1e1ab4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1AB4u;
    {
        const bool branch_taken_0x1e1ab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AB4u;
        // 0x1e1ab8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ab4) {
            ctx->pc = 0x1E1AD8u;
            goto label_1e1ad8;
        }
    }
    ctx->pc = 0x1E1ABCu;
    // 0x1e1abc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e1ac0: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1e1ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1e1ac4: 0x2442c1f0  addiu       $v0, $v0, -0x3E10
    ctx->pc = 0x1e1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951408));
    // 0x1e1ac8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1AC8u;
    {
        const bool branch_taken_0x1e1ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AC8u;
        // 0x1e1acc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ac8) {
            ctx->pc = 0x1E1AD8u;
            goto label_1e1ad8;
        }
    }
    ctx->pc = 0x1E1AD0u;
    // 0x1e1ad0: 0xc0482a4  jal         func_120A90
    ctx->pc = 0x1E1AD0u;
    SET_GPR_U32(ctx, 31, 0x1E1AD8u);
    ctx->pc = 0x1E1AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1AD0u;
    // 0x1e1ad4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A90u, 0x1E1AD0u, 0x1E1AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1AD8u;
label_1e1ad8:
    // 0x1e1ad8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e1ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e1adc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e1adcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e1ae0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1AE0u;
    {
        const bool branch_taken_0x1e1ae0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1AE0u;
        // 0x1e1ae4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ae0) {
            ctx->pc = 0x1E1AF4u;
            goto label_1e1af4;
        }
    }
    ctx->pc = 0x1E1AE8u;
    // 0x1e1ae8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1E1AE8u;
    SET_GPR_U32(ctx, 31, 0x1E1AF0u);
    ctx->pc = 0x1E1AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1AE8u;
    // 0x1e1aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E1AE8u, 0x1E1AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1AF0u;
label_1e1af0:
    // 0x1e1af0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e1af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e1af4:
    // 0x1e1af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1B00u;
        // 0x1e1b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1B08u;
}
