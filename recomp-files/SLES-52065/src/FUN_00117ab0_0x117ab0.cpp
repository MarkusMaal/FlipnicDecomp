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

// Function: FUN_00117ab0
// Address: 0x117ab0 - 0x117b24
void FUN_00117ab0_0x117ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117ab0_0x117ab0");
#endif

    switch (ctx->pc) {
        case 0x117accu: goto label_117acc;
        case 0x117ad4u: goto label_117ad4;
        case 0x117ae4u: goto label_117ae4;
        case 0x117aecu: goto label_117aec;
        case 0x117b10u: goto label_117b10;
        default: break;
    }

    ctx->pc = 0x117ab0u;

    // 0x117ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117abc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x117abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ac0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x117ac4: 0xc06090c  jal         func_182430
    ctx->pc = 0x117AC4u;
    SET_GPR_U32(ctx, 31, 0x117ACCu);
    ctx->pc = 0x117AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AC4u;
    // 0x117ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182430u, 0x117AC4u, 0x117ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117ACCu;
label_117acc:
    // 0x117acc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x117accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_117ad4:
    // 0x117ad4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x117ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x117ad8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x117ad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117adc: 0xc061734  jal         func_185CD0
    ctx->pc = 0x117ADCu;
    SET_GPR_U32(ctx, 31, 0x117AE4u);
    ctx->pc = 0x117AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117ADCu;
    // 0x117ae0: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x117ADCu, 0x117AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AE4u;
label_117ae4:
    // 0x117ae4: 0xc060ba8  jal         func_182EA0
    ctx->pc = 0x117AE4u;
    SET_GPR_U32(ctx, 31, 0x117AECu);
    ctx->pc = 0x117AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AE4u;
    // 0x117ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182EA0u, 0x117AE4u, 0x117AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AECu;
label_117aec:
    // 0x117aec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x117aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x117af0: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x117af0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x117af4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x117AF4u;
    {
        const bool branch_taken_0x117af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117AF4u;
        // 0x117af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117af4) {
            ctx->pc = 0x117AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117ad4;
        }
    }
    ctx->pc = 0x117AFCu;
    // 0x117afc: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x117afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x117b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b08: 0xc061734  jal         func_185CD0
    ctx->pc = 0x117B08u;
    SET_GPR_U32(ctx, 31, 0x117B10u);
    ctx->pc = 0x117B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B08u;
    // 0x117b0c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185CD0u, 0x117B08u, 0x117B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B10u;
label_117b10:
    // 0x117b10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x117B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B1Cu;
        // 0x117b20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117B24u;
}
