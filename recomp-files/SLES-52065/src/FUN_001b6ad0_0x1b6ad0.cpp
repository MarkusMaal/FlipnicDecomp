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

// Function: FUN_001b6ad0
// Address: 0x1b6ad0 - 0x1b6c84
void FUN_001b6ad0_0x1b6ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6ad0_0x1b6ad0");
#endif

    switch (ctx->pc) {
        case 0x1b6b18u: goto label_1b6b18;
        case 0x1b6b2cu: goto label_1b6b2c;
        case 0x1b6b38u: goto label_1b6b38;
        case 0x1b6b40u: goto label_1b6b40;
        case 0x1b6b48u: goto label_1b6b48;
        case 0x1b6b68u: goto label_1b6b68;
        case 0x1b6b7cu: goto label_1b6b7c;
        case 0x1b6b88u: goto label_1b6b88;
        case 0x1b6b90u: goto label_1b6b90;
        case 0x1b6b98u: goto label_1b6b98;
        case 0x1b6ba4u: goto label_1b6ba4;
        case 0x1b6bd0u: goto label_1b6bd0;
        case 0x1b6be4u: goto label_1b6be4;
        case 0x1b6bf0u: goto label_1b6bf0;
        case 0x1b6bf8u: goto label_1b6bf8;
        case 0x1b6c00u: goto label_1b6c00;
        case 0x1b6c20u: goto label_1b6c20;
        case 0x1b6c34u: goto label_1b6c34;
        case 0x1b6c40u: goto label_1b6c40;
        case 0x1b6c48u: goto label_1b6c48;
        case 0x1b6c50u: goto label_1b6c50;
        case 0x1b6c5cu: goto label_1b6c5c;
        case 0x1b6c68u: goto label_1b6c68;
        default: break;
    }

    ctx->pc = 0x1b6ad0u;

label_1b6ad0:
    // 0x1b6ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b6ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b6ad4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b6ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b6ad8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b6ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b6adc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b6ae0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6ae8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6aec: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1b6aecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b6af0: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x1B6AF0u;
    {
        const bool branch_taken_0x1b6af0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AF0u;
        // 0x1b6af4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6af0) {
            ctx->pc = 0x1B6BA4u;
            goto label_1b6ba4;
        }
    }
    ctx->pc = 0x1B6AF8u;
    // 0x1b6af8: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1b6af8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b6afc: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B6AFCu;
    {
        const bool branch_taken_0x1b6afc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6afc) {
            ctx->pc = 0x1B6B48u;
            goto label_1b6b48;
        }
    }
    ctx->pc = 0x1B6B04u;
    // 0x1b6b04: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1b6b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b6b08: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6B08u;
    {
        const bool branch_taken_0x1b6b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b08) {
            ctx->pc = 0x1B6B18u;
            goto label_1b6b18;
        }
    }
    ctx->pc = 0x1B6B10u;
    // 0x1b6b10: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6B10u;
    SET_GPR_U32(ctx, 31, 0x1B6B18u);
    ctx->pc = 0x1B6AD0u;
    goto label_1b6ad0;
    ctx->pc = 0x1B6B18u;
label_1b6b18:
    // 0x1b6b18: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1b6b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b6b1c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6B1Cu;
    {
        const bool branch_taken_0x1b6b1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B1Cu;
        // 0x1b6b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b1c) {
            ctx->pc = 0x1B6B30u;
            goto label_1b6b30;
        }
    }
    ctx->pc = 0x1B6B24u;
    // 0x1b6b24: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6B24u;
    SET_GPR_U32(ctx, 31, 0x1B6B2Cu);
    ctx->pc = 0x1B6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B24u;
    // 0x1b6b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    goto label_1b6ad0;
    ctx->pc = 0x1B6B2Cu;
label_1b6b2c:
    // 0x1b6b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b30:
    // 0x1b6b30: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6B30u;
    SET_GPR_U32(ctx, 31, 0x1B6B38u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6B30u, 0x1B6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B38u;
label_1b6b38:
    // 0x1b6b38: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6B38u;
    SET_GPR_U32(ctx, 31, 0x1B6B40u);
    ctx->pc = 0x1B6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B38u;
    // 0x1b6b3c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6B38u, 0x1B6B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B40u;
label_1b6b40:
    // 0x1b6b40: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6B40u;
    SET_GPR_U32(ctx, 31, 0x1B6B48u);
    ctx->pc = 0x1B6B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B40u;
    // 0x1b6b44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6B40u, 0x1B6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B48u;
label_1b6b48:
    // 0x1b6b48: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1b6b48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b6b4c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6B4Cu;
    {
        const bool branch_taken_0x1b6b4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B4Cu;
        // 0x1b6b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b4c) {
            ctx->pc = 0x1B6B9Cu;
            goto label_1b6b9c;
        }
    }
    ctx->pc = 0x1B6B54u;
    // 0x1b6b54: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1b6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b6b58: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6B58u;
    {
        const bool branch_taken_0x1b6b58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B58u;
        // 0x1b6b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b58) {
            ctx->pc = 0x1B6B68u;
            goto label_1b6b68;
        }
    }
    ctx->pc = 0x1B6B60u;
    // 0x1b6b60: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6B60u;
    SET_GPR_U32(ctx, 31, 0x1B6B68u);
    ctx->pc = 0x1B6AD0u;
    goto label_1b6ad0;
    ctx->pc = 0x1B6B68u;
label_1b6b68:
    // 0x1b6b68: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1b6b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b6b6c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6B6Cu;
    {
        const bool branch_taken_0x1b6b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B6Cu;
        // 0x1b6b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b6c) {
            ctx->pc = 0x1B6B80u;
            goto label_1b6b80;
        }
    }
    ctx->pc = 0x1B6B74u;
    // 0x1b6b74: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6B74u;
    SET_GPR_U32(ctx, 31, 0x1B6B7Cu);
    ctx->pc = 0x1B6B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B74u;
    // 0x1b6b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    goto label_1b6ad0;
    ctx->pc = 0x1B6B7Cu;
label_1b6b7c:
    // 0x1b6b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b80:
    // 0x1b6b80: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6B80u;
    SET_GPR_U32(ctx, 31, 0x1B6B88u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6B80u, 0x1B6B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B88u;
label_1b6b88:
    // 0x1b6b88: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6B88u;
    SET_GPR_U32(ctx, 31, 0x1B6B90u);
    ctx->pc = 0x1B6B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B88u;
    // 0x1b6b8c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6B88u, 0x1B6B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B90u;
label_1b6b90:
    // 0x1b6b90: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6B90u;
    SET_GPR_U32(ctx, 31, 0x1B6B98u);
    ctx->pc = 0x1B6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B90u;
    // 0x1b6b94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6B90u, 0x1B6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B98u;
label_1b6b98:
    // 0x1b6b98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6b9c:
    // 0x1b6b9c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B6BA4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6B9Cu, 0x1B6BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BA4u;
label_1b6ba4:
    // 0x1b6ba4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x1b6ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6ba8: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B6BA8u;
    {
        const bool branch_taken_0x1b6ba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BA8u;
        // 0x1b6bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ba8) {
            ctx->pc = 0x1B6C60u;
            goto label_1b6c60;
        }
    }
    ctx->pc = 0x1B6BB0u;
    // 0x1b6bb0: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1b6bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b6bb4: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B6BB4u;
    {
        const bool branch_taken_0x1b6bb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6bb4) {
            ctx->pc = 0x1B6C00u;
            goto label_1b6c00;
        }
    }
    ctx->pc = 0x1B6BBCu;
    // 0x1b6bbc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1b6bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b6bc0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6BC0u;
    {
        const bool branch_taken_0x1b6bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BC0u;
        // 0x1b6bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bc0) {
            ctx->pc = 0x1B6BD0u;
            goto label_1b6bd0;
        }
    }
    ctx->pc = 0x1B6BC8u;
    // 0x1b6bc8: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6BC8u;
    SET_GPR_U32(ctx, 31, 0x1B6BD0u);
    ctx->pc = 0x1B6AD0u;
    goto label_1b6ad0;
    ctx->pc = 0x1B6BD0u;
label_1b6bd0:
    // 0x1b6bd0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1b6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b6bd4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6BD4u;
    {
        const bool branch_taken_0x1b6bd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6BD4u;
        // 0x1b6bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6bd4) {
            ctx->pc = 0x1B6BE8u;
            goto label_1b6be8;
        }
    }
    ctx->pc = 0x1B6BDCu;
    // 0x1b6bdc: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6BDCu;
    SET_GPR_U32(ctx, 31, 0x1B6BE4u);
    ctx->pc = 0x1B6BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BDCu;
    // 0x1b6be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    goto label_1b6ad0;
    ctx->pc = 0x1B6BE4u;
label_1b6be4:
    // 0x1b6be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6be8:
    // 0x1b6be8: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6BE8u;
    SET_GPR_U32(ctx, 31, 0x1B6BF0u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6BE8u, 0x1B6BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BF0u;
label_1b6bf0:
    // 0x1b6bf0: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6BF0u;
    SET_GPR_U32(ctx, 31, 0x1B6BF8u);
    ctx->pc = 0x1B6BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BF0u;
    // 0x1b6bf4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6BF0u, 0x1B6BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6BF8u;
label_1b6bf8:
    // 0x1b6bf8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6BF8u;
    SET_GPR_U32(ctx, 31, 0x1B6C00u);
    ctx->pc = 0x1B6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6BF8u;
    // 0x1b6bfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6BF8u, 0x1B6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C00u;
label_1b6c00:
    // 0x1b6c00: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1b6c00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b6c04: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6C04u;
    {
        const bool branch_taken_0x1b6c04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C04u;
        // 0x1b6c08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c04) {
            ctx->pc = 0x1B6C54u;
            goto label_1b6c54;
        }
    }
    ctx->pc = 0x1B6C0Cu;
    // 0x1b6c0c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1b6c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b6c10: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6C10u;
    {
        const bool branch_taken_0x1b6c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C10u;
        // 0x1b6c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c10) {
            ctx->pc = 0x1B6C20u;
            goto label_1b6c20;
        }
    }
    ctx->pc = 0x1B6C18u;
    // 0x1b6c18: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6C18u;
    SET_GPR_U32(ctx, 31, 0x1B6C20u);
    ctx->pc = 0x1B6AD0u;
    goto label_1b6ad0;
    ctx->pc = 0x1B6C20u;
label_1b6c20:
    // 0x1b6c20: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1b6c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b6c24: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6C24u;
    {
        const bool branch_taken_0x1b6c24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C24u;
        // 0x1b6c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c24) {
            ctx->pc = 0x1B6C38u;
            goto label_1b6c38;
        }
    }
    ctx->pc = 0x1B6C2Cu;
    // 0x1b6c2c: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B6C34u);
    ctx->pc = 0x1B6C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C2Cu;
    // 0x1b6c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    goto label_1b6ad0;
    ctx->pc = 0x1B6C34u;
label_1b6c34:
    // 0x1b6c34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c38:
    // 0x1b6c38: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6C38u;
    SET_GPR_U32(ctx, 31, 0x1B6C40u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6C38u, 0x1B6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C40u;
label_1b6c40:
    // 0x1b6c40: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6C40u;
    SET_GPR_U32(ctx, 31, 0x1B6C48u);
    ctx->pc = 0x1B6C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C40u;
    // 0x1b6c44: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6C40u, 0x1B6C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C48u;
label_1b6c48:
    // 0x1b6c48: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6C48u;
    SET_GPR_U32(ctx, 31, 0x1B6C50u);
    ctx->pc = 0x1B6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6C48u;
    // 0x1b6c4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6C48u, 0x1B6C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C50u;
label_1b6c50:
    // 0x1b6c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c54:
    // 0x1b6c54: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6C54u;
    SET_GPR_U32(ctx, 31, 0x1B6C5Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6C54u, 0x1B6C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C5Cu;
label_1b6c5c:
    // 0x1b6c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c60:
    // 0x1b6c60: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6C60u;
    SET_GPR_U32(ctx, 31, 0x1B6C68u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6C60u, 0x1B6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C68u;
label_1b6c68:
    // 0x1b6c68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b6c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6c6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6c6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6c70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C7Cu;
        // 0x1b6c80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6C84u;
}
