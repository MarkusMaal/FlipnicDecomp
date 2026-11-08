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

// Function: FUN_00122ae0
// Address: 0x122ae0 - 0x122be8
void FUN_00122ae0_0x122ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122ae0_0x122ae0");
#endif

    switch (ctx->pc) {
        case 0x122b10u: goto label_122b10;
        case 0x122b30u: goto label_122b30;
        case 0x122b38u: goto label_122b38;
        case 0x122b6cu: goto label_122b6c;
        case 0x122b8cu: goto label_122b8c;
        case 0x122b94u: goto label_122b94;
        case 0x122bacu: goto label_122bac;
        default: break;
    }

    ctx->pc = 0x122ae0u;

    // 0x122ae0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x122ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x122ae4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x122ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x122ae8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x122ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x122aec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x122aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x122af0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x122af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x122af4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x122af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122af8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122afc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x122afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x122b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b04: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x122b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x122b08: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122B08u;
    SET_GPR_U32(ctx, 31, 0x122B10u);
    ctx->pc = 0x122B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B08u;
    // 0x122b0c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122B08u, 0x122B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B10u;
label_122b10:
    // 0x122b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b14: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x122B14u;
    {
        const bool branch_taken_0x122b14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x122B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B14u;
        // 0x122b18: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b14) {
            ctx->pc = 0x122B38u;
            goto label_122b38;
        }
    }
    ctx->pc = 0x122B1Cu;
    // 0x122b1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122b20: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122b24: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122b28: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122B28u;
    SET_GPR_U32(ctx, 31, 0x122B30u);
    ctx->pc = 0x122B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B28u;
    // 0x122b2c: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122B28u, 0x122B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B30u;
label_122b30:
    // 0x122b30: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122B30u;
    SET_GPR_U32(ctx, 31, 0x122B38u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122B30u, 0x122B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B38u;
label_122b38:
    // 0x122b38: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x122b38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x122b3c: 0x2328023  subu        $s0, $s1, $s2
    ctx->pc = 0x122b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x122b40: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x122b40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122b44: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x122B44u;
    {
        const bool branch_taken_0x122b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B44u;
        // 0x122b48: 0x26030003  addiu       $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b44) {
            ctx->pc = 0x122B98u;
            goto label_122b98;
        }
    }
    ctx->pc = 0x122B4Cu;
    // 0x122b4c: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x122b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x122b50: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x122b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x122b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122b58: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x122b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x122b5c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x122b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x122b60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x122b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x122b64: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122B64u;
    SET_GPR_U32(ctx, 31, 0x122B6Cu);
    ctx->pc = 0x122B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B64u;
    // 0x122b68: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122B64u, 0x122B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B6Cu;
label_122b6c:
    // 0x122b6c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122b6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b70: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x122B70u;
    {
        const bool branch_taken_0x122b70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x122B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B70u;
        // 0x122b74: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b70) {
            ctx->pc = 0x122B94u;
            goto label_122b94;
        }
    }
    ctx->pc = 0x122B78u;
    // 0x122b78: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122b7c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122b80: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122b84: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122B84u;
    SET_GPR_U32(ctx, 31, 0x122B8Cu);
    ctx->pc = 0x122B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B84u;
    // 0x122b88: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122B84u, 0x122B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B8Cu;
label_122b8c:
    // 0x122b8c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122B8Cu;
    SET_GPR_U32(ctx, 31, 0x122B94u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122B8Cu, 0x122B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B94u;
label_122b94:
    // 0x122b94: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x122b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
label_122b98:
    // 0x122b98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x122b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122b9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x122b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ba0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122ba4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x122BA4u;
    SET_GPR_U32(ctx, 31, 0x122BACu);
    ctx->pc = 0x122BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122BA4u;
    // 0x122ba8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x122BA4u, 0x122BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BACu;
label_122bac:
    // 0x122bac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x122bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122bb0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x122bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x122bb4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x122bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122bb8: 0x9384804c  lbu         $a0, -0x7FB4($gp)
    ctx->pc = 0x122bb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934604)));
    // 0x122bbc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x122bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x122bc0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x122bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x122bc4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122bc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x122bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122bcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x122bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122bd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122bd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122bd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122bd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122bd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122be0: 0x3e00008  jr          $ra
    ctx->pc = 0x122BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122BE0u;
        // 0x122be4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122BE8u;
}
