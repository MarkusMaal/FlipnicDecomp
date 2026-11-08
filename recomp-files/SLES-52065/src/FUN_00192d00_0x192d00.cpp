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

// Function: FUN_00192d00
// Address: 0x192d00 - 0x192e20
void FUN_00192d00_0x192d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00192d00_0x192d00");
#endif

    switch (ctx->pc) {
        case 0x192d44u: goto label_192d44;
        case 0x192d50u: goto label_192d50;
        case 0x192d64u: goto label_192d64;
        case 0x192d74u: goto label_192d74;
        case 0x192d80u: goto label_192d80;
        case 0x192dd0u: goto label_192dd0;
        case 0x192de0u: goto label_192de0;
        case 0x192df0u: goto label_192df0;
        default: break;
    }

    ctx->pc = 0x192d00u;

    // 0x192d00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x192d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x192d04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x192d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x192d08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x192d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x192d0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x192d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x192d10: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x192d10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x192d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x192d18: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x192d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x192d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x192d20: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x192d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192d28: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x192d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192d30: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x192d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d38: 0x7fa00070  sq          $zero, 0x70($sp)
    ctx->pc = 0x192d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 0));
    // 0x192d3c: 0xc063f7c  jal         func_18FDF0
    ctx->pc = 0x192D3Cu;
    SET_GPR_U32(ctx, 31, 0x192D44u);
    ctx->pc = 0x192D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D3Cu;
    // 0x192d40: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FDF0u, 0x192D3Cu, 0x192D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D44u;
label_192d44:
    // 0x192d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d48: 0xc0648ec  jal         func_1923B0
    ctx->pc = 0x192D48u;
    SET_GPR_U32(ctx, 31, 0x192D50u);
    ctx->pc = 0x192D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D48u;
    // 0x192d4c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1923B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1923B0u, 0x192D48u, 0x192D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D50u;
label_192d50:
    // 0x192d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d54: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x192D54u;
    {
        const bool branch_taken_0x192d54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x192d54) {
            ctx->pc = 0x192DFCu;
            goto label_192dfc;
        }
    }
    ctx->pc = 0x192D5Cu;
    // 0x192d5c: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x192D5Cu;
    SET_GPR_U32(ctx, 31, 0x192D64u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x192D5Cu, 0x192D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D64u;
label_192d64:
    // 0x192d64: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192D64u;
    {
        const bool branch_taken_0x192d64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x192d64) {
            ctx->pc = 0x192D88u;
            goto label_192d88;
        }
    }
    ctx->pc = 0x192D6Cu;
    // 0x192d6c: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x192D6Cu;
    SET_GPR_U32(ctx, 31, 0x192D74u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x192D6Cu, 0x192D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D74u;
label_192d74:
    // 0x192d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d78: 0xc067f0c  jal         func_19FC30
    ctx->pc = 0x192D78u;
    SET_GPR_U32(ctx, 31, 0x192D80u);
    ctx->pc = 0x192D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192D78u;
    // 0x192d7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC30u, 0x192D78u, 0x192D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D80u;
label_192d80:
    // 0x192d80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192D80u;
    {
        const bool branch_taken_0x192d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D80u;
        // 0x192d84: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d80) {
            ctx->pc = 0x192D90u;
            goto label_192d90;
        }
    }
    ctx->pc = 0x192D88u;
label_192d88:
    // 0x192d88: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x192d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x192d8c: 0x55a821  addu        $s5, $v0, $s5
    ctx->pc = 0x192d8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_192d90:
    // 0x192d90: 0x2b4082a  slt         $at, $s5, $s4
    ctx->pc = 0x192d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x192d94: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x192D94u;
    {
        const bool branch_taken_0x192d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x192D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D94u;
        // 0x192d98: 0x275082a  slt         $at, $s3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d94) {
            ctx->pc = 0x192DB4u;
            goto label_192db4;
        }
    }
    ctx->pc = 0x192D9Cu;
    // 0x192d9c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x192D9Cu;
    {
        const bool branch_taken_0x192d9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D9Cu;
        // 0x192da0: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d9c) {
            ctx->pc = 0x192DACu;
            goto label_192dac;
        }
    }
    ctx->pc = 0x192DA4u;
    // 0x192da4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192DA4u;
    {
        const bool branch_taken_0x192da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DA4u;
        // 0x192da8: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192da4) {
            ctx->pc = 0x192DC8u;
            goto label_192dc8;
        }
    }
    ctx->pc = 0x192DACu;
label_192dac:
    // 0x192dac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x192DACu;
    {
        const bool branch_taken_0x192dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192dac) {
            ctx->pc = 0x192DC8u;
            goto label_192dc8;
        }
    }
    ctx->pc = 0x192DB4u;
label_192db4:
    // 0x192db4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x192DB4u;
    {
        const bool branch_taken_0x192db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x192db4) {
            ctx->pc = 0x192DC8u;
            goto label_192dc8;
        }
    }
    ctx->pc = 0x192DBCu;
    // 0x192dbc: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x192DBCu;
    {
        const bool branch_taken_0x192dbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DBCu;
        // 0x192dc0: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192dbc) {
            ctx->pc = 0x192DC8u;
            goto label_192dc8;
        }
    }
    ctx->pc = 0x192DC4u;
    // 0x192dc4: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x192dc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_192dc8:
    // 0x192dc8: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x192DC8u;
    SET_GPR_U32(ctx, 31, 0x192DD0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x192DC8u, 0x192DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DD0u;
label_192dd0:
    // 0x192dd0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192DD0u;
    {
        const bool branch_taken_0x192dd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x192dd0) {
            ctx->pc = 0x192DF8u;
            goto label_192df8;
        }
    }
    ctx->pc = 0x192DD8u;
    // 0x192dd8: 0xc067f08  jal         func_19FC20
    ctx->pc = 0x192DD8u;
    SET_GPR_U32(ctx, 31, 0x192DE0u);
    ctx->pc = 0x19FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC20u, 0x192DD8u, 0x192DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DE0u;
label_192de0:
    // 0x192de0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192de4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x192de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192de8: 0xc067f68  jal         func_19FDA0
    ctx->pc = 0x192DE8u;
    SET_GPR_U32(ctx, 31, 0x192DF0u);
    ctx->pc = 0x192DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192DE8u;
    // 0x192dec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FDA0u, 0x192DE8u, 0x192DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DF0u;
label_192df0:
    // 0x192df0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192DF0u;
    {
        const bool branch_taken_0x192df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DF0u;
        // 0x192df4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192df0) {
            ctx->pc = 0x192E00u;
            goto label_192e00;
        }
    }
    ctx->pc = 0x192DF8u;
label_192df8:
    // 0x192df8: 0xae150320  sw          $s5, 0x320($s0)
    ctx->pc = 0x192df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 21));
label_192dfc:
    // 0x192dfc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x192dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_192e00:
    // 0x192e00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x192e00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192e04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x192e04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192e08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x192e08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192e0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192e0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192e10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192e18: 0x3e00008  jr          $ra
    ctx->pc = 0x192E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192E18u;
        // 0x192e1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192E20u;
}
