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

// Function: FUN_001e9c10
// Address: 0x1e9c10 - 0x1e9dd4
void FUN_001e9c10_0x1e9c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e9c10_0x1e9c10");
#endif

    switch (ctx->pc) {
        case 0x1e9c40u: goto label_1e9c40;
        case 0x1e9c54u: goto label_1e9c54;
        case 0x1e9c60u: goto label_1e9c60;
        case 0x1e9c6cu: goto label_1e9c6c;
        case 0x1e9c84u: goto label_1e9c84;
        case 0x1e9cc0u: goto label_1e9cc0;
        case 0x1e9cfcu: goto label_1e9cfc;
        case 0x1e9d08u: goto label_1e9d08;
        case 0x1e9d48u: goto label_1e9d48;
        case 0x1e9d9cu: goto label_1e9d9c;
        case 0x1e9da8u: goto label_1e9da8;
        case 0x1e9db0u: goto label_1e9db0;
        default: break;
    }

    ctx->pc = 0x1e9c10u;

    // 0x1e9c10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e9c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e9c14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e9c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e9c18: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1e9c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x1e9c1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e9c20: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e9c20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
    // 0x1e9c24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e9c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9c30: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x1e9c30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1e9c34: 0x0  nop
    ctx->pc = 0x1e9c34u;
    // NOP
    // 0x1e9c38: 0xc07a514  jal         func_1E9450
    ctx->pc = 0x1E9C38u;
    SET_GPR_U32(ctx, 31, 0x1E9C40u);
    ctx->pc = 0x1E9C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C38u;
    // 0x1e9c3c: 0xafdd0084  sw          $sp, 0x84($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9450u, 0x1E9C38u, 0x1E9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C40u;
label_1e9c40:
    // 0x1e9c40: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1E9C40u;
    {
        const bool branch_taken_0x1e9c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c40) {
            ctx->pc = 0x1E9DA8u;
            goto label_1e9da8;
        }
    }
    ctx->pc = 0x1E9C48u;
    // 0x1e9c48: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1e9c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e9c4c: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1E9C4Cu;
    SET_GPR_U32(ctx, 31, 0x1E9C54u);
    ctx->pc = 0x1E9C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C4Cu;
    // 0x1e9c50: 0x27c50060  addiu       $a1, $fp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1E9C4Cu, 0x1E9C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C54u;
label_1e9c54:
    // 0x1e9c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c58: 0xc07a574  jal         func_1E95D0
    ctx->pc = 0x1E9C58u;
    SET_GPR_U32(ctx, 31, 0x1E9C60u);
    ctx->pc = 0x1E9C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C58u;
    // 0x1e9c5c: 0x27c50064  addiu       $a1, $fp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95D0u, 0x1E9C58u, 0x1E9C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C60u;
label_1e9c60:
    // 0x1e9c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e9c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c64: 0xc07a59c  jal         func_1E9670
    ctx->pc = 0x1E9C64u;
    SET_GPR_U32(ctx, 31, 0x1E9C6Cu);
    ctx->pc = 0x1E9C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C64u;
    // 0x1e9c68: 0x27c50068  addiu       $a1, $fp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9670u, 0x1E9C64u, 0x1E9C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C6Cu;
label_1e9c6c:
    // 0x1e9c6c: 0x27d3006c  addiu       $s3, $fp, 0x6C
    ctx->pc = 0x1e9c6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 108));
    // 0x1e9c70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1e9c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1e9c74: 0x8fd20074  lw          $s2, 0x74($fp)
    ctx->pc = 0x1e9c74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x1e9c78: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1e9c78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e9c7c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E9C7Cu;
    {
        const bool branch_taken_0x1e9c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C7Cu;
        // 0x1e9c80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c7c) {
            ctx->pc = 0x1E9CD8u;
            goto label_1e9cd8;
        }
    }
    ctx->pc = 0x1E9C84u;
label_1e9c84:
    // 0x1e9c84: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x1e9c84u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1e9c88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e9c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c8c: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1e9c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e9c90: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1e9c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1e9c94: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1e9c94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9c98: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1e9c98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1e9c9c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1e9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1e9ca0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1e9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e9ca4: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1e9ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1e9ca8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e9ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e9cac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e9cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e9cb0: 0xafc200a8  sw          $v0, 0xA8($fp)
    ctx->pc = 0x1e9cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 168), GPR_U32(ctx, 2));
    // 0x1e9cb4: 0x8fc500a8  lw          $a1, 0xA8($fp)
    ctx->pc = 0x1e9cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 168)));
    // 0x1e9cb8: 0xc07a478  jal         func_1E91E0
    ctx->pc = 0x1E9CB8u;
    SET_GPR_U32(ctx, 31, 0x1E9CC0u);
    ctx->pc = 0x1E9CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CB8u;
    // 0x1e9cbc: 0x27c60090  addiu       $a2, $fp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E91E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E91E0u, 0x1E9CB8u, 0x1E9CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CC0u;
label_1e9cc0:
    // 0x1e9cc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9CC0u;
    {
        const bool branch_taken_0x1e9cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9cc0) {
            ctx->pc = 0x1E9CD0u;
            goto label_1e9cd0;
        }
    }
    ctx->pc = 0x1E9CC8u;
    // 0x1e9cc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9CC8u;
    {
        const bool branch_taken_0x1e9cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CC8u;
        // 0x1e9ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cc8) {
            ctx->pc = 0x1E9CE8u;
            goto label_1e9ce8;
        }
    }
    ctx->pc = 0x1E9CD0u;
label_1e9cd0:
    // 0x1e9cd0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e9cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1e9cd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e9cd8:
    // 0x1e9cd8: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x1e9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1e9cdc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e9cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9ce0: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1E9CE0u;
    {
        const bool branch_taken_0x1e9ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CE0u;
        // 0x1e9ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ce0) {
            ctx->pc = 0x1E9C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9c84;
        }
    }
    ctx->pc = 0x1E9CE8u;
label_1e9ce8:
    // 0x1e9ce8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9CE8u;
    {
        const bool branch_taken_0x1e9ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CE8u;
        // 0x1e9cec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ce8) {
            ctx->pc = 0x1E9CFCu;
            goto label_1e9cfc;
        }
    }
    ctx->pc = 0x1E9CF0u;
    // 0x1e9cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9cf4: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E9CF4u;
    SET_GPR_U32(ctx, 31, 0x1E9CFCu);
    ctx->pc = 0x1E9CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CF4u;
    // 0x1e9cf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E9CF4u, 0x1E9CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CFCu;
label_1e9cfc:
    // 0x1e9cfc: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1e9cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e9d00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E9D00u;
    {
        const bool branch_taken_0x1e9d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D00u;
        // 0x1e9d04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d00) {
            ctx->pc = 0x1E9D60u;
            goto label_1e9d60;
        }
    }
    ctx->pc = 0x1E9D08u;
label_1e9d08:
    // 0x1e9d08: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x1e9d08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1e9d0c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e9d10: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1e9d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e9d14: 0x24844070  addiu       $a0, $a0, 0x4070
    ctx->pc = 0x1e9d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16496));
    // 0x1e9d18: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1e9d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1e9d1c: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1e9d1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9d20: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1e9d20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1e9d24: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1e9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1e9d28: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1e9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1e9d2c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1e9d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1e9d30: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1e9d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1e9d34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e9d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e9d38: 0xafc200ac  sw          $v0, 0xAC($fp)
    ctx->pc = 0x1e9d38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 172), GPR_U32(ctx, 2));
    // 0x1e9d3c: 0x8fc500ac  lw          $a1, 0xAC($fp)
    ctx->pc = 0x1e9d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 172)));
    // 0x1e9d40: 0xc07a478  jal         func_1E91E0
    ctx->pc = 0x1E9D40u;
    SET_GPR_U32(ctx, 31, 0x1E9D48u);
    ctx->pc = 0x1E9D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D40u;
    // 0x1e9d44: 0x27c60098  addiu       $a2, $fp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E91E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E91E0u, 0x1E9D40u, 0x1E9D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D48u;
label_1e9d48:
    // 0x1e9d48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9D48u;
    {
        const bool branch_taken_0x1e9d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d48) {
            ctx->pc = 0x1E9D58u;
            goto label_1e9d58;
        }
    }
    ctx->pc = 0x1E9D50u;
    // 0x1e9d50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9D50u;
    {
        const bool branch_taken_0x1e9d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D50u;
        // 0x1e9d54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d50) {
            ctx->pc = 0x1E9D70u;
            goto label_1e9d70;
        }
    }
    ctx->pc = 0x1E9D58u;
label_1e9d58:
    // 0x1e9d58: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e9d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1e9d5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e9d60:
    // 0x1e9d60: 0x8fc20060  lw          $v0, 0x60($fp)
    ctx->pc = 0x1e9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x1e9d64: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e9d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e9d68: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1E9D68u;
    {
        const bool branch_taken_0x1e9d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D68u;
        // 0x1e9d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d68) {
            ctx->pc = 0x1E9D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9d08;
        }
    }
    ctx->pc = 0x1E9D70u;
label_1e9d70:
    // 0x1e9d70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9D70u;
    {
        const bool branch_taken_0x1e9d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D70u;
        // 0x1e9d74: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d70) {
            ctx->pc = 0x1E9DA0u;
            goto label_1e9da0;
        }
    }
    ctx->pc = 0x1E9D78u;
    // 0x1e9d78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e9d7c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e9d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e9d80: 0x2442c360  addiu       $v0, $v0, -0x3CA0
    ctx->pc = 0x1e9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951776));
    // 0x1e9d84: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x1e9d84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x1e9d88: 0x24844090  addiu       $a0, $a0, 0x4090
    ctx->pc = 0x1e9d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16528));
    // 0x1e9d8c: 0xafc200a4  sw          $v0, 0xA4($fp)
    ctx->pc = 0x1e9d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 2));
    // 0x1e9d90: 0x27c500a4  addiu       $a1, $fp, 0xA4
    ctx->pc = 0x1e9d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 164));
    // 0x1e9d94: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E9D94u;
    SET_GPR_U32(ctx, 31, 0x1E9D9Cu);
    ctx->pc = 0x1E9D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D94u;
    // 0x1e9d98: 0x24c69de0  addiu       $a2, $a2, -0x6220 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E9D94u, 0x1E9D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D9Cu;
label_1e9d9c:
    // 0x1e9d9c: 0x27c40070  addiu       $a0, $fp, 0x70
    ctx->pc = 0x1e9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_1e9da0:
    // 0x1e9da0: 0xc07a5c4  jal         func_1E9710
    ctx->pc = 0x1E9DA0u;
    SET_GPR_U32(ctx, 31, 0x1E9DA8u);
    ctx->pc = 0x1E9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9710u, 0x1E9DA0u, 0x1E9DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DA8u;
label_1e9da8:
    // 0x1e9da8: 0xc07a520  jal         func_1E9480
    ctx->pc = 0x1E9DA8u;
    SET_GPR_U32(ctx, 31, 0x1E9DB0u);
    ctx->pc = 0x1E9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9480u, 0x1E9DA8u, 0x1E9DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DB0u;
label_1e9db0:
    // 0x1e9db0: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e9db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1e9db4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e9db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9db8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1e9db8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9dbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9dc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9dc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DCCu;
        // 0x1e9dd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9DD4u;
}
