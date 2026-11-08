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

// Function: CheckLimitsForScoringCounters
// Address: 0x19e940 - 0x19ea5c
void CheckLimitsForScoringCounters_0x19e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLimitsForScoringCounters_0x19e940");
#endif

    switch (ctx->pc) {
        case 0x19e984u: goto label_19e984;
        case 0x19ea18u: goto label_19ea18;
        case 0x19ea30u: goto label_19ea30;
        default: break;
    }

    ctx->pc = 0x19e940u;

    // 0x19e940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e944: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x19e944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x19e948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e94c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x19e94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x19e950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e954: 0x34210002  ori         $at, $at, 0x2
    ctx->pc = 0x19e954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2);
    // 0x19e958: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19e95c: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x19e95cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x19e960: 0x3421540b  ori         $at, $at, 0x540B
    ctx->pc = 0x19e960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21515);
    // 0x19e964: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x19e964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x19e968: 0x3421e400  ori         $at, $at, 0xE400
    ctx->pc = 0x19e968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58368);
    // 0x19e96c: 0xdc442818  ld          $a0, 0x2818($v0)
    ctx->pc = 0x19e96cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 10264)));
    // 0x19e970: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x19e970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x19e974: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x19E974u;
    {
        const bool branch_taken_0x19e974 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E974u;
        // 0x19e978: 0x24502818  addiu       $s0, $v0, 0x2818 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e974) {
            ctx->pc = 0x19E9A0u;
            goto label_19e9a0;
        }
    }
    ctx->pc = 0x19E97Cu;
    // 0x19e97c: 0xc081a86  jal         func_206A18
    ctx->pc = 0x19E97Cu;
    SET_GPR_U32(ctx, 31, 0x19E984u);
    ctx->pc = 0x19E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E97Cu;
    // 0x19e980: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A18u, 0x19E97Cu, 0x19E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E984u;
label_19e984:
    // 0x19e984: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19e984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e988: 0x3c03540b  lui         $v1, 0x540B
    ctx->pc = 0x19e988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21515 << 16));
    // 0x19e98c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19e98cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19e990: 0x3463e39c  ori         $v1, $v1, 0xE39C
    ctx->pc = 0x19e990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58268);
    // 0x19e994: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19e994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19e998: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x19e998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x19e99c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x19e99cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_19e9a0:
    // 0x19e9a0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19e9a4: 0x2443284c  addiu       $v1, $v0, 0x284C
    ctx->pc = 0x19e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10316));
    // 0x19e9a8: 0x8c42284c  lw          $v0, 0x284C($v0)
    ctx->pc = 0x19e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10316)));
    // 0x19e9ac: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x19e9acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19e9b0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E9B0u;
    {
        const bool branch_taken_0x19e9b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9B0u;
        // 0x19e9b4: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9b0) {
            ctx->pc = 0x19E9BCu;
            goto label_19e9bc;
        }
    }
    ctx->pc = 0x19E9B8u;
    // 0x19e9b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19e9bc:
    // 0x19e9bc: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19e9c0: 0x8c432838  lw          $v1, 0x2838($v0)
    ctx->pc = 0x19e9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10296)));
    // 0x19e9c4: 0x24442838  addiu       $a0, $v0, 0x2838
    ctx->pc = 0x19e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10296));
    // 0x19e9c8: 0x286203e8  slti        $v0, $v1, 0x3E8
    ctx->pc = 0x19e9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19e9cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E9CCu;
    {
        const bool branch_taken_0x19e9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9CCu;
        // 0x19e9d0: 0x2462fc18  addiu       $v0, $v1, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9cc) {
            ctx->pc = 0x19E9D8u;
            goto label_19e9d8;
        }
    }
    ctx->pc = 0x19E9D4u;
    // 0x19e9d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x19e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_19e9d8:
    // 0x19e9d8: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19e9dc: 0x8c432840  lw          $v1, 0x2840($v0)
    ctx->pc = 0x19e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10304)));
    // 0x19e9e0: 0x24442840  addiu       $a0, $v0, 0x2840
    ctx->pc = 0x19e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x19e9e4: 0x286203e8  slti        $v0, $v1, 0x3E8
    ctx->pc = 0x19e9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19e9e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E9E8u;
    {
        const bool branch_taken_0x19e9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E9E8u;
        // 0x19e9ec: 0x2462fc18  addiu       $v0, $v1, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e9e8) {
            ctx->pc = 0x19E9F4u;
            goto label_19e9f4;
        }
    }
    ctx->pc = 0x19E9F0u;
    // 0x19e9f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x19e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_19e9f4:
    // 0x19e9f4: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19e9f8: 0x8c43283c  lw          $v1, 0x283C($v0)
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10300)));
    // 0x19e9fc: 0x2444283c  addiu       $a0, $v0, 0x283C
    ctx->pc = 0x19e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10300));
    // 0x19ea00: 0x286203e8  slti        $v0, $v1, 0x3E8
    ctx->pc = 0x19ea00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19ea04: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EA04u;
    {
        const bool branch_taken_0x19ea04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA04u;
        // 0x19ea08: 0x2462fc18  addiu       $v0, $v1, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea04) {
            ctx->pc = 0x19EA10u;
            goto label_19ea10;
        }
    }
    ctx->pc = 0x19EA0Cu;
    // 0x19ea0c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x19ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_19ea10:
    // 0x19ea10: 0xc06cdc4  jal         func_1B3710
    ctx->pc = 0x19EA10u;
    SET_GPR_U32(ctx, 31, 0x19EA18u);
    ctx->pc = 0x19EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA10u;
    // 0x19ea14: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3710u, 0x19EA10u, 0x19EA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA18u;
label_19ea18:
    // 0x19ea18: 0x284303e8  slti        $v1, $v0, 0x3E8
    ctx->pc = 0x19ea18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19ea1c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EA1Cu;
    {
        const bool branch_taken_0x19ea1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ea1c) {
            ctx->pc = 0x19EA30u;
            goto label_19ea30;
        }
    }
    ctx->pc = 0x19EA24u;
    // 0x19ea24: 0x8f848714  lw          $a0, -0x78EC($gp)
    ctx->pc = 0x19ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ea28: 0xc06cdd4  jal         func_1B3750
    ctx->pc = 0x19EA28u;
    SET_GPR_U32(ctx, 31, 0x19EA30u);
    ctx->pc = 0x19EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA28u;
    // 0x19ea2c: 0x2445fc18  addiu       $a1, $v0, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3750u, 0x19EA28u, 0x19EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA30u;
label_19ea30:
    // 0x19ea30: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19ea34: 0x8c642848  lw          $a0, 0x2848($v1)
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10312)));
    // 0x19ea38: 0x24652848  addiu       $a1, $v1, 0x2848
    ctx->pc = 0x19ea38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10312));
    // 0x19ea3c: 0x288303e8  slti        $v1, $a0, 0x3E8
    ctx->pc = 0x19ea3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19ea40: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EA40u;
    {
        const bool branch_taken_0x19ea40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA40u;
        // 0x19ea44: 0x2483fc18  addiu       $v1, $a0, -0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ea40) {
            ctx->pc = 0x19EA4Cu;
            goto label_19ea4c;
        }
    }
    ctx->pc = 0x19EA48u;
    // 0x19ea48: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x19ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_19ea4c:
    // 0x19ea4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ea4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ea50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ea50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ea54: 0x3e00008  jr          $ra
    ctx->pc = 0x19EA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EA54u;
        // 0x19ea58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EA5Cu;
}
