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

// Function: FUN_001f39c8
// Address: 0x1f39c8 - 0x1f3ad8
void FUN_001f39c8_0x1f39c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f39c8_0x1f39c8");
#endif

    switch (ctx->pc) {
        case 0x1f39f0u: goto label_1f39f0;
        case 0x1f3a34u: goto label_1f3a34;
        case 0x1f3a44u: goto label_1f3a44;
        case 0x1f3a4cu: goto label_1f3a4c;
        case 0x1f3a60u: goto label_1f3a60;
        case 0x1f3a98u: goto label_1f3a98;
        case 0x1f3ac4u: goto label_1f3ac4;
        default: break;
    }

    ctx->pc = 0x1f39c8u;

    // 0x1f39c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f39c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f39cc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f39d0: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x1f39d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x1f39d4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1f39d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1f39d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1f39dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f39dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39e0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1f39e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f39e4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F39E4u;
    {
        const bool branch_taken_0x1f39e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39E4u;
        // 0x1f39e8: 0x24514450  addiu       $s1, $v0, 0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 17488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f39e4) {
            ctx->pc = 0x1F3A14u;
            goto label_1f3a14;
        }
    }
    ctx->pc = 0x1F39ECu;
    // 0x1f39ec: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x1f39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
label_1f39f0:
    // 0x1f39f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f39f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f39f4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f39f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f39f8: 0x0  nop
    ctx->pc = 0x1f39f8u;
    // NOP
    // 0x1f39fc: 0x0  nop
    ctx->pc = 0x1f39fcu;
    // NOP
    // 0x1f3a00: 0x0  nop
    ctx->pc = 0x1f3a00u;
    // NOP
    // 0x1f3a04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F3A04u;
    {
        const bool branch_taken_0x1f3a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3a04) {
            ctx->pc = 0x1F39F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f39f0;
        }
    }
    ctx->pc = 0x1F3A0Cu;
    // 0x1f3a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3A0Cu;
    {
        const bool branch_taken_0x1f3a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A0Cu;
        // 0x1f3a10: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a0c) {
            ctx->pc = 0x1F3A1Cu;
            goto label_1f3a1c;
        }
    }
    ctx->pc = 0x1F3A14u;
label_1f3a14:
    // 0x1f3a14: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x1f3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
    // 0x1f3a18: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1f3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f3a1c:
    // 0x1f3a1c: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x1f3a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x1f3a20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F3A20u;
    {
        const bool branch_taken_0x1f3a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A20u;
        // 0x1f3a24: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a20) {
            ctx->pc = 0x1F3A3Cu;
            goto label_1f3a3c;
        }
    }
    ctx->pc = 0x1F3A28u;
    // 0x1f3a28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a2c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F3A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A34u);
    ctx->pc = 0x1F3A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A2Cu;
    // 0x1f3a30: 0x24844460  addiu       $a0, $a0, 0x4460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F3A2Cu, 0x1F3A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A34u;
label_1f3a34:
    // 0x1f3a34: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1F3A34u;
    {
        const bool branch_taken_0x1f3a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A34u;
        // 0x1f3a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a34) {
            ctx->pc = 0x1F3AC4u;
            goto label_1f3ac4;
        }
    }
    ctx->pc = 0x1F3A3Cu;
label_1f3a3c:
    // 0x1f3a3c: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x1F3A3Cu;
    SET_GPR_U32(ctx, 31, 0x1F3A44u);
    ctx->pc = 0x1F3A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A3Cu;
    // 0x1f3a40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x1F3A3Cu, 0x1F3A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A44u;
label_1f3a44:
    // 0x1f3a44: 0xc07b802  jal         func_1EE008
    ctx->pc = 0x1F3A44u;
    SET_GPR_U32(ctx, 31, 0x1F3A4Cu);
    ctx->pc = 0x1EE008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE008u, 0x1F3A44u, 0x1F3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A4Cu;
label_1f3a4c:
    // 0x1f3a4c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1f3a4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3a50: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1f3a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F3A54u;
    {
        const bool branch_taken_0x1f3a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A54u;
        // 0x1f3a58: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a54) {
            ctx->pc = 0x1F3A84u;
            goto label_1f3a84;
        }
    }
    ctx->pc = 0x1F3A5Cu;
    // 0x1f3a5c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1f3a5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3a60:
    // 0x1f3a60: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f3a60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3a64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f3a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f3a68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3a6c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1f3a6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3a70: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1f3a70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f3a74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F3A74u;
    {
        const bool branch_taken_0x1f3a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3a74) {
            ctx->pc = 0x1F3A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3a60;
        }
    }
    ctx->pc = 0x1F3A7Cu;
    // 0x1f3a7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3A7Cu;
    {
        const bool branch_taken_0x1f3a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A7Cu;
        // 0x1f3a80: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a7c) {
            ctx->pc = 0x1F3A8Cu;
            goto label_1f3a8c;
        }
    }
    ctx->pc = 0x1F3A84u;
label_1f3a84:
    // 0x1f3a84: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1f3a84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3a88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f3a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f3a8c:
    // 0x1f3a8c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F3A8Cu;
    {
        const bool branch_taken_0x1f3a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3a8c) {
            ctx->pc = 0x1F3A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3A8Cu;
            // 0x1f3a90: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3AB8u;
            goto label_1f3ab8;
        }
    }
    ctx->pc = 0x1F3A94u;
    // 0x1f3a94: 0x0  nop
    ctx->pc = 0x1f3a94u;
    // NOP
label_1f3a98:
    // 0x1f3a98: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f3a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f3a9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f3a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f3aa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3aa4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1f3aa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f3aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3aac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F3AACu;
    {
        const bool branch_taken_0x1f3aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3aac) {
            ctx->pc = 0x1F3A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3a98;
        }
    }
    ctx->pc = 0x1F3AB4u;
    // 0x1f3ab4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1f3ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1f3ab8:
    // 0x1f3ab8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f3ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3abc: 0xc07ce0a  jal         func_1F3828
    ctx->pc = 0x1F3ABCu;
    SET_GPR_U32(ctx, 31, 0x1F3AC4u);
    ctx->pc = 0x1F3AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3ABCu;
    // 0x1f3ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3828u, 0x1F3ABCu, 0x1F3AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3AC4u;
label_1f3ac4:
    // 0x1f3ac4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f3ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f3ac8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1f3ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f3acc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1f3accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f3ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AD0u;
        // 0x1f3ad4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3AD8u;
}
