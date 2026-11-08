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

// Function: FUN_001ee280
// Address: 0x1ee280 - 0x1ee350
void FUN_001ee280_0x1ee280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee280_0x1ee280");
#endif

    switch (ctx->pc) {
        case 0x1ee2b0u: goto label_1ee2b0;
        case 0x1ee2c0u: goto label_1ee2c0;
        case 0x1ee318u: goto label_1ee318;
        default: break;
    }

    ctx->pc = 0x1ee280u;

    // 0x1ee280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee284: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ee284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ee288: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee28c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ee290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ee290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ee294: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee298: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1ee298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ee29c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1ee29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x1ee2a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE2A0u;
    {
        const bool branch_taken_0x1ee2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2a0) {
            ctx->pc = 0x1EE2B8u;
            goto label_1ee2b8;
        }
    }
    ctx->pc = 0x1EE2A8u;
    // 0x1ee2a8: 0xc07b84a  jal         func_1EE128
    ctx->pc = 0x1EE2A8u;
    SET_GPR_U32(ctx, 31, 0x1EE2B0u);
    ctx->pc = 0x1EE2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE2A8u;
    // 0x1ee2ac: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE128u, 0x1EE2A8u, 0x1EE2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2B0u;
label_1ee2b0:
    // 0x1ee2b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE2B0u;
    {
        const bool branch_taken_0x1ee2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2B0u;
        // 0x1ee2b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2b0) {
            ctx->pc = 0x1EE2C4u;
            goto label_1ee2c4;
        }
    }
    ctx->pc = 0x1EE2B8u;
label_1ee2b8:
    // 0x1ee2b8: 0xc07b83e  jal         func_1EE0F8
    ctx->pc = 0x1EE2B8u;
    SET_GPR_U32(ctx, 31, 0x1EE2C0u);
    ctx->pc = 0x1EE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0F8u, 0x1EE2B8u, 0x1EE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2C0u;
label_1ee2c0:
    // 0x1ee2c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ee2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee2c4:
    // 0x1ee2c4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1ee2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ee2c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ee2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee2cc: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1ee2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ee2d0: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x1ee2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x1ee2d4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1ee2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1ee2d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ee2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee2dc: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1ee2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1ee2e0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1ee2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1ee2e4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ee2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1ee2e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee2ec: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ee2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ee2f0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1ee2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ee2f4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ee2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1ee2f8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1ee2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ee2fc: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1ee2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1ee300: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1ee300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1ee304: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1ee304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1ee308: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x1ee308u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1ee30c: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1ee30cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ee310: 0xc07b714  jal         func_1EDC50
    ctx->pc = 0x1EE310u;
    SET_GPR_U32(ctx, 31, 0x1EE318u);
    ctx->pc = 0x1EE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE310u;
    // 0x1ee314: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC50u, 0x1EE310u, 0x1EE318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE318u;
label_1ee318:
    // 0x1ee318: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE318u;
    {
        const bool branch_taken_0x1ee318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE318u;
        // 0x1ee31c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee318) {
            ctx->pc = 0x1EE340u;
            goto label_1ee340;
        }
    }
    ctx->pc = 0x1EE320u;
    // 0x1ee320: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ee320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee324: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1ee324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x1ee328: 0x24a5e220  addiu       $a1, $a1, -0x1DE0
    ctx->pc = 0x1ee328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959648));
    // 0x1ee32c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ee32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee330: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ee330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ee334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee338: 0x807ad00  j           func_1EB400
    ctx->pc = 0x1EE338u;
    ctx->pc = 0x1EE33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE338u;
    // 0x1ee33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB400u;
    iSetAlarm_0x1eb400(rdram, ctx, runtime); return;
    ctx->pc = 0x1EE340u;
label_1ee340:
    // 0x1ee340: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ee340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee348: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE348u;
        // 0x1ee34c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE350u;
}
