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

// Function: FUN_001d0d10
// Address: 0x1d0d10 - 0x1d0e1c
void FUN_001d0d10_0x1d0d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0d10_0x1d0d10");
#endif

    switch (ctx->pc) {
        case 0x1d0d40u: goto label_1d0d40;
        case 0x1d0d48u: goto label_1d0d48;
        case 0x1d0d5cu: goto label_1d0d5c;
        case 0x1d0d74u: goto label_1d0d74;
        case 0x1d0de0u: goto label_1d0de0;
        case 0x1d0dfcu: goto label_1d0dfc;
        default: break;
    }

    ctx->pc = 0x1d0d10u;

    // 0x1d0d10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d0d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d0d14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d0d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d0d18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d0d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d0d1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d0d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d0d20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d0d20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d0d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d0d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d0d2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0d30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d34: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d0d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d0d38: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D0D38u;
    SET_GPR_U32(ctx, 31, 0x1D0D40u);
    ctx->pc = 0x1D0D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D38u;
    // 0x1d0d3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D0D38u, 0x1D0D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D40u;
label_1d0d40:
    // 0x1d0d40: 0x90520000  lbu         $s2, 0x0($v0)
    ctx->pc = 0x1d0d40u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0d44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d48:
    // 0x1d0d48: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x1d0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d0d4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d50: 0x3051000f  andi        $s1, $v0, 0xF
    ctx->pc = 0x1d0d50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1d0d54: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D0D54u;
    SET_GPR_U32(ctx, 31, 0x1D0D5Cu);
    ctx->pc = 0x1D0D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D54u;
    // 0x1d0d58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D0D54u, 0x1D0D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D5Cu;
label_1d0d5c:
    // 0x1d0d5c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d0d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0d60: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d68: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1d0d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1d0d6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d0d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d0d70: 0x24843200  addiu       $a0, $a0, 0x3200
    ctx->pc = 0x1d0d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12800));
label_1d0d74:
    // 0x1d0d74: 0x0  nop
    ctx->pc = 0x1d0d74u;
    // NOP
    // 0x1d0d78: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1d0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d0d7c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d0d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0d80: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0D80u;
    {
        const bool branch_taken_0x1d0d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d0d80) {
            ctx->pc = 0x1D0D90u;
            goto label_1d0d90;
        }
    }
    ctx->pc = 0x1D0D88u;
    // 0x1d0d88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0D88u;
    {
        const bool branch_taken_0x1d0d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D88u;
        // 0x1d0d8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d88) {
            ctx->pc = 0x1D0DA0u;
            goto label_1d0da0;
        }
    }
    ctx->pc = 0x1D0D90u;
label_1d0d90:
    // 0x1d0d90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d0d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d0d94: 0x28a20022  slti        $v0, $a1, 0x22
    ctx->pc = 0x1d0d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1d0d98: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D0D98u;
    {
        const bool branch_taken_0x1d0d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d98) {
            ctx->pc = 0x1D0D74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0d74;
        }
    }
    ctx->pc = 0x1D0DA0u;
label_1d0da0:
    // 0x1d0da0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1d0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1d0da4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1d0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d0da8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d0dac: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1d0dacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d0db0: 0x24423230  addiu       $v0, $v0, 0x3230
    ctx->pc = 0x1d0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12848));
    // 0x1d0db4: 0x21d1821  addu        $v1, $s0, $sp
    ctx->pc = 0x1d0db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1d0db8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d0dbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d0dc0: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x1d0dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d0dc4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1d0dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d0dc8: 0x2e020013  sltiu       $v0, $s0, 0x13
    ctx->pc = 0x1d0dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x1d0dcc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D0DCCu;
    {
        const bool branch_taken_0x1d0dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DCCu;
        // 0x1d0dd0: 0xa0640060  sb          $a0, 0x60($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dcc) {
            ctx->pc = 0x1D0D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0d48;
        }
    }
    ctx->pc = 0x1D0DD4u;
    // 0x1d0dd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dd8: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D0DD8u;
    SET_GPR_U32(ctx, 31, 0x1D0DE0u);
    ctx->pc = 0x1D0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DD8u;
    // 0x1d0ddc: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D0DD8u, 0x1D0DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DE0u;
label_1d0de0:
    // 0x1d0de0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1d0de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0de4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0de8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1d0de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d0dec: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x1d0decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1d0df0: 0xa3a20073  sb          $v0, 0x73($sp)
    ctx->pc = 0x1d0df0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0df4: 0xc04889c  jal         func_122270
    ctx->pc = 0x1D0DF4u;
    SET_GPR_U32(ctx, 31, 0x1D0DFCu);
    ctx->pc = 0x1D0DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DF4u;
    // 0x1d0df8: 0xa3a00074  sb          $zero, 0x74($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1D0DF4u, 0x1D0DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DFCu;
label_1d0dfc:
    // 0x1d0dfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d0dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d0e00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d0e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0e04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d0e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0e08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e14: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E14u;
        // 0x1d0e18: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E1Cu;
}
