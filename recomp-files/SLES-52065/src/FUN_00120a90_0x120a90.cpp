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

// Function: FUN_00120a90
// Address: 0x120a90 - 0x120b0c
void FUN_00120a90_0x120a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120a90_0x120a90");
#endif

    switch (ctx->pc) {
        case 0x120ad4u: goto label_120ad4;
        case 0x120adcu: goto label_120adc;
        case 0x120af4u: goto label_120af4;
        default: break;
    }

    ctx->pc = 0x120a90u;

    // 0x120a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x120a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x120a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x120a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x120a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x120aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x120aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120aa4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x120AA4u;
    {
        const bool branch_taken_0x120aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AA4u;
        // 0x120aa8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120aa4) {
            ctx->pc = 0x120AF4u;
            goto label_120af4;
        }
    }
    ctx->pc = 0x120AACu;
    // 0x120aac: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x120aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x120ab0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x120AB0u;
    {
        const bool branch_taken_0x120ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AB0u;
        // 0x120ab4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ab0) {
            ctx->pc = 0x120AE0u;
            goto label_120ae0;
        }
    }
    ctx->pc = 0x120AB8u;
    // 0x120ab8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120abc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x120abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x120ac0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x120AC0u;
    {
        const bool branch_taken_0x120ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AC0u;
        // 0x120ac4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ac0) {
            ctx->pc = 0x120ADCu;
            goto label_120adc;
        }
    }
    ctx->pc = 0x120AC8u;
    // 0x120ac8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x120ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x120acc: 0xc0483d8  jal         func_120F60
    ctx->pc = 0x120ACCu;
    SET_GPR_U32(ctx, 31, 0x120AD4u);
    ctx->pc = 0x120AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120ACCu;
    // 0x120ad0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x120ACCu, 0x120AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120AD4u;
label_120ad4:
    // 0x120ad4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x120AD4u;
    SET_GPR_U32(ctx, 31, 0x120ADCu);
    ctx->pc = 0x120AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120AD4u;
    // 0x120ad8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x120AD4u, 0x120ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120ADCu;
label_120adc:
    // 0x120adc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x120adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_120ae0:
    // 0x120ae0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x120ae0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x120ae4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x120AE4u;
    {
        const bool branch_taken_0x120ae4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x120AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120AE4u;
        // 0x120ae8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ae4) {
            ctx->pc = 0x120AF8u;
            goto label_120af8;
        }
    }
    ctx->pc = 0x120AECu;
    // 0x120aec: 0xc0401a4  jal         func_100690
    ctx->pc = 0x120AECu;
    SET_GPR_U32(ctx, 31, 0x120AF4u);
    ctx->pc = 0x120AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120AECu;
    // 0x120af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x120AECu, 0x120AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120AF4u;
label_120af4:
    // 0x120af4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x120af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120af8:
    // 0x120af8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x120af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x120b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120b04: 0x3e00008  jr          $ra
    ctx->pc = 0x120B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120B04u;
        // 0x120b08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120B0Cu;
}
