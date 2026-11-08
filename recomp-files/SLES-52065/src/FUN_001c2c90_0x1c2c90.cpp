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

// Function: FUN_001c2c90
// Address: 0x1c2c90 - 0x1c2d2c
void FUN_001c2c90_0x1c2c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c2c90_0x1c2c90");
#endif

    switch (ctx->pc) {
        case 0x1c2cacu: goto label_1c2cac;
        case 0x1c2cbcu: goto label_1c2cbc;
        case 0x1c2cccu: goto label_1c2ccc;
        case 0x1c2cdcu: goto label_1c2cdc;
        case 0x1c2cecu: goto label_1c2cec;
        case 0x1c2cf4u: goto label_1c2cf4;
        case 0x1c2d04u: goto label_1c2d04;
        case 0x1c2d0cu: goto label_1c2d0c;
        case 0x1c2d18u: goto label_1c2d18;
        default: break;
    }

    ctx->pc = 0x1c2c90u;

    // 0x1c2c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2c94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c2c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2c98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2ca4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2CA4u;
    SET_GPR_U32(ctx, 31, 0x1C2CACu);
    ctx->pc = 0x1C2CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CA4u;
    // 0x1c2ca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2CA4u, 0x1C2CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CACu;
label_1c2cac:
    // 0x1c2cac: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c2cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c2cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c2cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2cb4: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C2CB4u;
    SET_GPR_U32(ctx, 31, 0x1C2CBCu);
    ctx->pc = 0x1C2CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CB4u;
    // 0x1c2cb8: 0x24a55130  addiu       $a1, $a1, 0x5130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C2CB4u, 0x1C2CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CBCu;
label_1c2cbc:
    // 0x1c2cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2cc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2cc4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2CC4u;
    SET_GPR_U32(ctx, 31, 0x1C2CCCu);
    ctx->pc = 0x1C2CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CC4u;
    // 0x1c2cc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2CC4u, 0x1C2CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CCCu;
label_1c2ccc:
    // 0x1c2ccc: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1c2cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1c2cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c2cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2cd4: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1C2CD4u;
    SET_GPR_U32(ctx, 31, 0x1C2CDCu);
    ctx->pc = 0x1C2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CD4u;
    // 0x1c2cd8: 0x24a55130  addiu       $a1, $a1, 0x5130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1C2CD4u, 0x1C2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CDCu;
label_1c2cdc:
    // 0x1c2cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ce0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c2ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2ce4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2CE4u;
    SET_GPR_U32(ctx, 31, 0x1C2CECu);
    ctx->pc = 0x1C2CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CE4u;
    // 0x1c2ce8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2CE4u, 0x1C2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CECu;
label_1c2cec:
    // 0x1c2cec: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1C2CECu;
    SET_GPR_U32(ctx, 31, 0x1C2CF4u);
    ctx->pc = 0x1C2CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CECu;
    // 0x1c2cf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1C2CECu, 0x1C2CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2CF4u;
label_1c2cf4:
    // 0x1c2cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2cf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c2cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2cfc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C2CFCu;
    SET_GPR_U32(ctx, 31, 0x1C2D04u);
    ctx->pc = 0x1C2D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2CFCu;
    // 0x1c2d00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C2CFCu, 0x1C2D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D04u;
label_1c2d04:
    // 0x1c2d04: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1C2D04u;
    SET_GPR_U32(ctx, 31, 0x1C2D0Cu);
    ctx->pc = 0x1C2D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D04u;
    // 0x1c2d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1C2D04u, 0x1C2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D0Cu;
label_1c2d0c:
    // 0x1c2d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d10: 0xc070b4c  jal         func_1C2D30
    ctx->pc = 0x1C2D10u;
    SET_GPR_U32(ctx, 31, 0x1C2D18u);
    ctx->pc = 0x1C2D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D10u;
    // 0x1c2d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2D30u, 0x1C2D10u, 0x1C2D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D18u;
label_1c2d18:
    // 0x1c2d18: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x1c2d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x1c2d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c2d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D24u;
        // 0x1c2d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2D2Cu;
}
