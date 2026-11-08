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

// Function: FUN_00151d50
// Address: 0x151d50 - 0x151e34
void FUN_00151d50_0x151d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151d50_0x151d50");
#endif

    switch (ctx->pc) {
        case 0x151d80u: goto label_151d80;
        case 0x151db8u: goto label_151db8;
        case 0x151df0u: goto label_151df0;
        default: break;
    }

    ctx->pc = 0x151d50u;

    // 0x151d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x151d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x151d54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x151d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x151d58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x151d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x151d5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x151d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x151d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151d64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x151d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151d6c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x151d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x151d70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151d74: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x151d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x151d78: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x151D78u;
    SET_GPR_U32(ctx, 31, 0x151D80u);
    ctx->pc = 0x151D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D78u;
    // 0x151d7c: 0x24a5f378  addiu       $a1, $a1, -0xC88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x151D78u, 0x151D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151D80u;
label_151d80:
    // 0x151d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x151d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d84: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151D84u;
    {
        const bool branch_taken_0x151d84 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x151D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D84u;
        // 0x151d88: 0x8f828388  lw          $v0, -0x7C78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d84) {
            ctx->pc = 0x151D94u;
            goto label_151d94;
        }
    }
    ctx->pc = 0x151D8Cu;
    // 0x151d8c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151D8Cu;
    {
        const bool branch_taken_0x151d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D8Cu;
        // 0x151d90: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d8c) {
            ctx->pc = 0x151DACu;
            goto label_151dac;
        }
    }
    ctx->pc = 0x151D94u;
label_151d94:
    // 0x151d94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x151d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151d98: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x151d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151d9c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x151d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151da4: 0x84520008  lh          $s2, 0x8($v0)
    ctx->pc = 0x151da4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x151da8: 0x0  nop
    ctx->pc = 0x151da8u;
    // NOP
label_151dac:
    // 0x151dac: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x151dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x151db0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x151DB0u;
    {
        const bool branch_taken_0x151db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DB0u;
        // 0x151db4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151db0) {
            ctx->pc = 0x151E10u;
            goto label_151e10;
        }
    }
    ctx->pc = 0x151DB8u;
label_151db8:
    // 0x151db8: 0x8f838388  lw          $v1, -0x7C78($gp)
    ctx->pc = 0x151db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x151dbc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x151dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151dc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151dc4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x151dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151dc8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x151dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x151dcc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x151dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x151dd0: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x151dd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x151dd4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x151dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x151dd8: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x151dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x151ddc: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x151ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151de0: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x151de0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x151de4: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x151de4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151de8: 0xc057040  jal         func_15C100
    ctx->pc = 0x151DE8u;
    SET_GPR_U32(ctx, 31, 0x151DF0u);
    ctx->pc = 0x151DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DE8u;
    // 0x151dec: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x151DE8u, 0x151DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DF0u;
label_151df0:
    // 0x151df0: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x151DF0u;
    {
        const bool branch_taken_0x151df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x151df0) {
            ctx->pc = 0x151E00u;
            goto label_151e00;
        }
    }
    ctx->pc = 0x151DF8u;
    // 0x151df8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x151DF8u;
    {
        const bool branch_taken_0x151df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DF8u;
        // 0x151dfc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151df8) {
            ctx->pc = 0x151E14u;
            goto label_151e14;
        }
    }
    ctx->pc = 0x151E00u;
label_151e00:
    // 0x151e00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x151e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x151e04: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x151e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x151e08: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x151E08u;
    {
        const bool branch_taken_0x151e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151e08) {
            ctx->pc = 0x151DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151db8;
        }
    }
    ctx->pc = 0x151E10u;
label_151e10:
    // 0x151e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x151e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151e14:
    // 0x151e14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x151e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151e18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x151e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151e1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151e1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151e20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x151E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E2Cu;
        // 0x151e30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151E34u;
}
