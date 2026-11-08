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

// Function: FUN_00124c70
// Address: 0x124c70 - 0x124d7c
void FUN_00124c70_0x124c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00124c70_0x124c70");
#endif

    switch (ctx->pc) {
        case 0x124cacu: goto label_124cac;
        case 0x124cbcu: goto label_124cbc;
        case 0x124cc4u: goto label_124cc4;
        case 0x124cccu: goto label_124ccc;
        case 0x124cdcu: goto label_124cdc;
        case 0x124cf8u: goto label_124cf8;
        case 0x124d0cu: goto label_124d0c;
        case 0x124d14u: goto label_124d14;
        case 0x124d20u: goto label_124d20;
        case 0x124d48u: goto label_124d48;
        case 0x124d60u: goto label_124d60;
        default: break;
    }

    ctx->pc = 0x124c70u;

    // 0x124c70: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x124c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x124c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x124c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x124c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x124c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x124c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x124c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x124c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x124c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c88: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x124C88u;
    {
        const bool branch_taken_0x124c88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C88u;
        // 0x124c8c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c88) {
            ctx->pc = 0x124D60u;
            goto label_124d60;
        }
    }
    ctx->pc = 0x124C90u;
    // 0x124c90: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x124c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x124c94: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x124c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x124c98: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x124c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x124c9c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x124c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x124ca0: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x124ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x124ca4: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x124CA4u;
    SET_GPR_U32(ctx, 31, 0x124CACu);
    ctx->pc = 0x124CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CA4u;
    // 0x124ca8: 0x24a5f9c0  addiu       $a1, $a1, -0x640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x124CA4u, 0x124CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CACu;
label_124cac:
    // 0x124cac: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x124cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x124cb0: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x124cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x124cb4: 0xc07a394  jal         func_1E8E50
    ctx->pc = 0x124CB4u;
    SET_GPR_U32(ctx, 31, 0x124CBCu);
    ctx->pc = 0x124CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CB4u;
    // 0x124cb8: 0x24a5f9c0  addiu       $a1, $a1, -0x640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E50u, 0x124CB4u, 0x124CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CBCu;
label_124cbc:
    // 0x124cbc: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x124CBCu;
    SET_GPR_U32(ctx, 31, 0x124CC4u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x124CBCu, 0x124CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CC4u;
label_124cc4:
    // 0x124cc4: 0xc080748  jal         func_201D20
    ctx->pc = 0x124CC4u;
    SET_GPR_U32(ctx, 31, 0x124CCCu);
    ctx->pc = 0x124CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CC4u;
    // 0x124cc8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x124CC4u, 0x124CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CCCu;
label_124ccc:
    // 0x124ccc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x124cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cd0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x124cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x124cd4: 0xc080702  jal         func_201C08
    ctx->pc = 0x124CD4u;
    SET_GPR_U32(ctx, 31, 0x124CDCu);
    ctx->pc = 0x124CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124CD4u;
    // 0x124cd8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x124CD4u, 0x124CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CDCu;
label_124cdc:
    // 0x124cdc: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x124cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x124ce0: 0xa0400039  sb          $zero, 0x39($v0)
    ctx->pc = 0x124ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x124ce4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x124ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x124ce8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x124CE8u;
    {
        const bool branch_taken_0x124ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CE8u;
        // 0x124cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ce8) {
            ctx->pc = 0x124D40u;
            goto label_124d40;
        }
    }
    ctx->pc = 0x124CF0u;
    // 0x124cf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x124CF0u;
    {
        const bool branch_taken_0x124cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CF0u;
        // 0x124cf4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cf0) {
            ctx->pc = 0x124D24u;
            goto label_124d24;
        }
    }
    ctx->pc = 0x124CF8u;
label_124cf8:
    // 0x124cf8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x124cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x124cfc: 0x24a5ead0  addiu       $a1, $a1, -0x1530
    ctx->pc = 0x124cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961872));
    // 0x124d00: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x124d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x124d04: 0xc0805c8  jal         func_201720
    ctx->pc = 0x124D04u;
    SET_GPR_U32(ctx, 31, 0x124D0Cu);
    ctx->pc = 0x124D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D04u;
    // 0x124d08: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201720u, 0x124D04u, 0x124D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D0Cu;
label_124d0c:
    // 0x124d0c: 0xc080d98  jal         func_203660
    ctx->pc = 0x124D0Cu;
    SET_GPR_U32(ctx, 31, 0x124D14u);
    ctx->pc = 0x124D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D0Cu;
    // 0x124d10: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203660u, 0x124D0Cu, 0x124D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D14u;
label_124d14:
    // 0x124d14: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x124d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x124d18: 0xc046c14  jal         func_11B050
    ctx->pc = 0x124D18u;
    SET_GPR_U32(ctx, 31, 0x124D20u);
    ctx->pc = 0x124D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D18u;
    // 0x124d1c: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x124D18u, 0x124D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D20u;
label_124d20:
    // 0x124d20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x124d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_124d24:
    // 0x124d24: 0x0  nop
    ctx->pc = 0x124d24u;
    // NOP
    // 0x124d28: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x124d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x124d2c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x124d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x124d30: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x124D30u;
    {
        const bool branch_taken_0x124d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D30u;
        // 0x124d34: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d30) {
            ctx->pc = 0x124CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124cf8;
        }
    }
    ctx->pc = 0x124D38u;
    // 0x124d38: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x124d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x124d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124d40:
    // 0x124d40: 0xc048ee8  jal         func_123BA0
    ctx->pc = 0x124D40u;
    SET_GPR_U32(ctx, 31, 0x124D48u);
    ctx->pc = 0x124D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D40u;
    // 0x124d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123BA0u, 0x124D40u, 0x124D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D48u;
label_124d48:
    // 0x124d48: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x124d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x124d4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x124d4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x124d50: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124D50u;
    {
        const bool branch_taken_0x124d50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x124D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D50u;
        // 0x124d54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d50) {
            ctx->pc = 0x124D64u;
            goto label_124d64;
        }
    }
    ctx->pc = 0x124D58u;
    // 0x124d58: 0xc0401a4  jal         func_100690
    ctx->pc = 0x124D58u;
    SET_GPR_U32(ctx, 31, 0x124D60u);
    ctx->pc = 0x124D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D58u;
    // 0x124d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x124D58u, 0x124D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D60u;
label_124d60:
    // 0x124d60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x124d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124d64:
    // 0x124d64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x124d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124d68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x124d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x124d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124d70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x124d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124d74: 0x3e00008  jr          $ra
    ctx->pc = 0x124D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D74u;
        // 0x124d78: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124D7Cu;
}
