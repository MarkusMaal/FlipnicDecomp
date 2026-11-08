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

// Function: FUN_001f0c10
// Address: 0x1f0c10 - 0x1f0e7c
void FUN_001f0c10_0x1f0c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0c10_0x1f0c10");
#endif

    switch (ctx->pc) {
        case 0x1f0c58u: goto label_1f0c58;
        case 0x1f0c70u: goto label_1f0c70;
        case 0x1f0c90u: goto label_1f0c90;
        case 0x1f0cf8u: goto label_1f0cf8;
        case 0x1f0d38u: goto label_1f0d38;
        case 0x1f0d58u: goto label_1f0d58;
        case 0x1f0db0u: goto label_1f0db0;
        case 0x1f0dd0u: goto label_1f0dd0;
        case 0x1f0df8u: goto label_1f0df8;
        case 0x1f0e08u: goto label_1f0e08;
        case 0x1f0e10u: goto label_1f0e10;
        case 0x1f0e24u: goto label_1f0e24;
        case 0x1f0e34u: goto label_1f0e34;
        case 0x1f0e44u: goto label_1f0e44;
        case 0x1f0e4cu: goto label_1f0e4c;
        default: break;
    }

    ctx->pc = 0x1f0c10u;

    // 0x1f0c10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f0c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f0c14: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f0c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f0c18: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1f0c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1f0c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c20: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f0c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f0c24: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1f0c24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c28: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f0c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f0c2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f0c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c30: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1f0c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1f0c34: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1f0c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c38: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f0c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f0c3c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1f0c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f0c40: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1f0c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1f0c44: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x1f0c44u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
    // 0x1f0c48: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1f0c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1f0c4c: 0x26f3e200  addiu       $s3, $s7, -0x1E00
    ctx->pc = 0x1f0c4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f0c50: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F0C50u;
    SET_GPR_U32(ctx, 31, 0x1F0C58u);
    ctx->pc = 0x1F0C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0C50u;
    // 0x1f0c54: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F0C50u, 0x1F0C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C58u;
label_1f0c58:
    // 0x1f0c58: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f0c5c: 0x8c43a45c  lw          $v1, -0x5BA4($v0)
    ctx->pc = 0x1f0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f0c60: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0C60u;
    {
        const bool branch_taken_0x1f0c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0c60) {
            ctx->pc = 0x1F0C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0C60u;
            // 0x1f0c64: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0C74u;
            goto label_1f0c74;
        }
    }
    ctx->pc = 0x1F0C68u;
    // 0x1f0c68: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F0C68u;
    SET_GPR_U32(ctx, 31, 0x1F0C70u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F0C68u, 0x1F0C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C70u;
label_1f0c70:
    // 0x1f0c70: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f0c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1f0c74:
    // 0x1f0c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0c78: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f0c7c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F0C7Cu;
    {
        const bool branch_taken_0x1f0c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C7Cu;
        // 0x1f0c80: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c7c) {
            ctx->pc = 0x1F0CBCu;
            goto label_1f0cbc;
        }
    }
    ctx->pc = 0x1F0C84u;
    // 0x1f0c84: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1f0c84u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1f0c88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f0c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f0c8c: 0x0  nop
    ctx->pc = 0x1f0c8cu;
    // NOP
label_1f0c90:
    // 0x1f0c90: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f0c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f0c94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0C94u;
    {
        const bool branch_taken_0x1f0c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0C94u;
        // 0x1f0c98: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c94) {
            ctx->pc = 0x1F0CC0u;
            goto label_1f0cc0;
        }
    }
    ctx->pc = 0x1F0C9Cu;
    // 0x1f0c9c: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x1f0c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1f0ca0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0ca4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1f0ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0ca8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f0cac: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0CACu;
    {
        const bool branch_taken_0x1f0cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0cac) {
            ctx->pc = 0x1F0CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0CACu;
            // 0x1f0cb0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0c90;
        }
    }
    ctx->pc = 0x1F0CB4u;
    // 0x1f0cb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0CB4u;
    {
        const bool branch_taken_0x1f0cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CB4u;
        // 0x1f0cb8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cb4) {
            ctx->pc = 0x1F0CC4u;
            goto label_1f0cc4;
        }
    }
    ctx->pc = 0x1F0CBCu;
label_1f0cbc:
    // 0x1f0cbc: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1f0cbcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1f0cc0:
    // 0x1f0cc0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1f0cc4:
    // 0x1f0cc4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0CC4u;
    {
        const bool branch_taken_0x1f0cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0cc4) {
            ctx->pc = 0x1F0CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0CC4u;
            // 0x1f0cc8: 0xa260040b  sb          $zero, 0x40B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0CCCu;
            goto label_1f0ccc;
        }
    }
    ctx->pc = 0x1F0CCCu;
label_1f0ccc:
    // 0x1f0ccc: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0CCCu;
    {
        const bool branch_taken_0x1f0ccc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ccc) {
            ctx->pc = 0x1F0CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0CCCu;
            // 0x1f0cd0: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0CDCu;
            goto label_1f0cdc;
        }
    }
    ctx->pc = 0x1F0CD4u;
    // 0x1f0cd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F0CD4u;
    {
        const bool branch_taken_0x1f0cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CD4u;
        // 0x1f0cd8: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cd4) {
            ctx->pc = 0x1F0D28u;
            goto label_1f0d28;
        }
    }
    ctx->pc = 0x1F0CDCu;
label_1f0cdc:
    // 0x1f0cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ce0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f0ce4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F0CE4u;
    {
        const bool branch_taken_0x1f0ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CE4u;
        // 0x1f0ce8: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ce4) {
            ctx->pc = 0x1F0D1Cu;
            goto label_1f0d1c;
        }
    }
    ctx->pc = 0x1F0CECu;
    // 0x1f0cec: 0x2666040c  addiu       $a2, $s3, 0x40C
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
    // 0x1f0cf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f0cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f0cf4: 0x0  nop
    ctx->pc = 0x1f0cf4u;
    // NOP
label_1f0cf8:
    // 0x1f0cf8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1f0cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1f0cfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0CFCu;
    {
        const bool branch_taken_0x1f0cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CFCu;
        // 0x1f0d00: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cfc) {
            ctx->pc = 0x1F0D1Cu;
            goto label_1f0d1c;
        }
    }
    ctx->pc = 0x1F0D04u;
    // 0x1f0d04: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f0d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f0d08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0d0c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f0d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0d10: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1f0d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f0d14: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0D14u;
    {
        const bool branch_taken_0x1f0d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d14) {
            ctx->pc = 0x1F0D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0D14u;
            // 0x1f0d18: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0cf8;
        }
    }
    ctx->pc = 0x1F0D1Cu;
label_1f0d1c:
    // 0x1f0d1c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1f0d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1f0d20: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0D20u;
    {
        const bool branch_taken_0x1f0d20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0d20) {
            ctx->pc = 0x1F0D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0D20u;
            // 0x1f0d24: 0xa260080b  sb          $zero, 0x80B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0D28u;
            goto label_1f0d28;
        }
    }
    ctx->pc = 0x1F0D28u;
label_1f0d28:
    // 0x1f0d28: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0D28u;
    {
        const bool branch_taken_0x1f0d28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d28) {
            ctx->pc = 0x1F0D40u;
            goto label_1f0d40;
        }
    }
    ctx->pc = 0x1F0D30u;
    // 0x1f0d30: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0D30u;
    SET_GPR_U32(ctx, 31, 0x1F0D38u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0D30u, 0x1F0D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D38u;
label_1f0d38:
    // 0x1f0d38: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F0D38u;
    {
        const bool branch_taken_0x1f0d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D38u;
        // 0x1f0d3c: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d38) {
            ctx->pc = 0x1F0E50u;
            goto label_1f0e50;
        }
    }
    ctx->pc = 0x1F0D40u;
label_1f0d40:
    // 0x1f0d40: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F0D40u;
    {
        const bool branch_taken_0x1f0d40 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1F0D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D40u;
        // 0x1f0d44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d40) {
            ctx->pc = 0x1F0D80u;
            goto label_1f0d80;
        }
    }
    ctx->pc = 0x1F0D48u;
    // 0x1f0d48: 0x2666080c  addiu       $a2, $s3, 0x80C
    ctx->pc = 0x1f0d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2060));
    // 0x1f0d4c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f0d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0d50: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0d50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f0d54: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f0d54u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
label_1f0d58:
    // 0x1f0d58: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x1f0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x1f0d5c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1f0d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f0d60: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f0d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0d64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f0d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f0d68: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x1f0d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1f0d6c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1f0d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0d70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F0D70u;
    {
        const bool branch_taken_0x1f0d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d70) {
            ctx->pc = 0x1F0D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0d58;
        }
    }
    ctx->pc = 0x1F0D78u;
    // 0x1f0d78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0D78u;
    {
        const bool branch_taken_0x1f0d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D78u;
        // 0x1f0d7c: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d78) {
            ctx->pc = 0x1F0D90u;
            goto label_1f0d90;
        }
    }
    ctx->pc = 0x1F0D80u;
label_1f0d80:
    // 0x1f0d80: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f0d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0d84: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1f0d84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1f0d88: 0x3c140039  lui         $s4, 0x39
    ctx->pc = 0x1f0d88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57 << 16));
    // 0x1f0d8c: 0xae710c0c  sw          $s1, 0xC0C($s3)
    ctx->pc = 0x1f0d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
label_1f0d90:
    // 0x1f0d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0d94: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f0d98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f0d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0d9c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f0d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f0da0: 0x26f0e200  addiu       $s0, $s7, -0x1E00
    ctx->pc = 0x1f0da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959616));
    // 0x1f0da4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f0da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f0da8: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F0DA8u;
    SET_GPR_U32(ctx, 31, 0x1F0DB0u);
    ctx->pc = 0x1F0DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DA8u;
    // 0x1f0dac: 0x2694ee40  addiu       $s4, $s4, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F0DA8u, 0x1F0DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DB0u;
label_1f0db0:
    // 0x1f0db0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f0db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0db8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0dbc: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1f0dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x1f0dc0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1f0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1f0dc4: 0x24050c10  addiu       $a1, $zero, 0xC10
    ctx->pc = 0x1f0dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1f0dc8: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F0DC8u;
    SET_GPR_U32(ctx, 31, 0x1F0DD0u);
    ctx->pc = 0x1F0DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DC8u;
    // 0x1f0dcc: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F0DC8u, 0x1F0DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DD0u;
label_1f0dd0:
    // 0x1f0dd0: 0x26a4f900  addiu       $a0, $s5, -0x700
    ctx->pc = 0x1f0dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965504));
    // 0x1f0dd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f0dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0dd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0ddc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f0ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f0de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0de4: 0x24080c10  addiu       $t0, $zero, 0xC10
    ctx->pc = 0x1f0de4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1f0de8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1f0de8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0dec: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f0decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0df0: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F0DF0u;
    SET_GPR_U32(ctx, 31, 0x1F0DF8u);
    ctx->pc = 0x1F0DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DF0u;
    // 0x1f0df4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F0DF0u, 0x1F0DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DF8u;
label_1f0df8:
    // 0x1f0df8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0DF8u;
    {
        const bool branch_taken_0x1f0df8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DF8u;
        // 0x1f0dfc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0df8) {
            ctx->pc = 0x1F0E18u;
            goto label_1f0e18;
        }
    }
    ctx->pc = 0x1F0E00u;
    // 0x1f0e00: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0E00u;
    SET_GPR_U32(ctx, 31, 0x1F0E08u);
    ctx->pc = 0x1F0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E00u;
    // 0x1f0e04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0E00u, 0x1F0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E08u;
label_1f0e08:
    // 0x1f0e08: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0E08u;
    SET_GPR_U32(ctx, 31, 0x1F0E10u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0E08u, 0x1F0E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E10u;
label_1f0e10:
    // 0x1f0e10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F0E10u;
    {
        const bool branch_taken_0x1f0e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E10u;
        // 0x1f0e14: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e10) {
            ctx->pc = 0x1F0E50u;
            goto label_1f0e50;
        }
    }
    ctx->pc = 0x1F0E18u;
label_1f0e18:
    // 0x1f0e18: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1f0e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1f0e1c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0E1Cu;
    SET_GPR_U32(ctx, 31, 0x1F0E24u);
    ctx->pc = 0x1F0E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E1Cu;
    // 0x1f0e20: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0E1Cu, 0x1F0E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E24u;
label_1f0e24:
    // 0x1f0e24: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0E24u;
    {
        const bool branch_taken_0x1f0e24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e24) {
            ctx->pc = 0x1F0E3Cu;
            goto label_1f0e3c;
        }
    }
    ctx->pc = 0x1F0E2Cu;
    // 0x1f0e2c: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F0E34u);
    ctx->pc = 0x1F0E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E2Cu;
    // 0x1f0e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0E2Cu, 0x1F0E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E34u;
label_1f0e34:
    // 0x1f0e34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0E34u;
    {
        const bool branch_taken_0x1f0e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E34u;
        // 0x1f0e38: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0e34) {
            ctx->pc = 0x1F0E50u;
            goto label_1f0e50;
        }
    }
    ctx->pc = 0x1F0E3Cu;
label_1f0e3c:
    // 0x1f0e3c: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1F0E44u);
    ctx->pc = 0x1F0E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E3Cu;
    // 0x1f0e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F0E3Cu, 0x1F0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E44u;
label_1f0e44:
    // 0x1f0e44: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0E44u;
    SET_GPR_U32(ctx, 31, 0x1F0E4Cu);
    ctx->pc = 0x1F0E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0E44u;
    // 0x1f0e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0E44u, 0x1F0E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E4Cu;
label_1f0e4c:
    // 0x1f0e4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0e50:
    // 0x1f0e50: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1f0e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f0e54: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1f0e54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f0e58: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1f0e58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0e5c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1f0e5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0e60: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f0e60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0e64: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f0e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0e68: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f0e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0e6c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f0e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0e70: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E74u;
        // 0x1f0e78: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0E7Cu;
}
