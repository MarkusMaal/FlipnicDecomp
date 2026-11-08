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

// Function: FUN_00118a90
// Address: 0x118a90 - 0x118b98
void FUN_00118a90_0x118a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00118a90_0x118a90");
#endif

    switch (ctx->pc) {
        case 0x118ad0u: goto label_118ad0;
        case 0x118b08u: goto label_118b08;
        case 0x118b10u: goto label_118b10;
        case 0x118b20u: goto label_118b20;
        case 0x118b28u: goto label_118b28;
        case 0x118b38u: goto label_118b38;
        case 0x118b40u: goto label_118b40;
        case 0x118b4cu: goto label_118b4c;
        case 0x118b54u: goto label_118b54;
        case 0x118b60u: goto label_118b60;
        case 0x118b68u: goto label_118b68;
        case 0x118b78u: goto label_118b78;
        default: break;
    }

    ctx->pc = 0x118a90u;

    // 0x118a90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118a94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118a98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x118a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118a9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118aa0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x118aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118aa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118aa8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x118aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118aac: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118AACu;
    {
        const bool branch_taken_0x118aac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x118AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AACu;
        // 0x118ab0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118aac) {
            ctx->pc = 0x118AC0u;
            goto label_118ac0;
        }
    }
    ctx->pc = 0x118AB4u;
    // 0x118ab4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x118ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x118ab8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x118AB8u;
    {
        const bool branch_taken_0x118ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AB8u;
        // 0x118abc: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ab8) {
            ctx->pc = 0x118B78u;
            goto label_118b78;
        }
    }
    ctx->pc = 0x118AC0u;
label_118ac0:
    // 0x118ac0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x118ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x118ac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ac8: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x118AC8u;
    SET_GPR_U32(ctx, 31, 0x118AD0u);
    ctx->pc = 0x118ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AC8u;
    // 0x118acc: 0x24a5e5e8  addiu       $a1, $a1, -0x1A18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x118AC8u, 0x118AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118AD0u;
label_118ad0:
    // 0x118ad0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x118ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x118ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118ad8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x118ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x118adc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x118adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x118ae0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x118ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x118ae4: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x118ae4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x118ae8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x118ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x118aec: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x118aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x118af0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x118af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118af4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x118af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x118af8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x118af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x118afc: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x118afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x118b00: 0xc046434  jal         func_1190D0
    ctx->pc = 0x118B00u;
    SET_GPR_U32(ctx, 31, 0x118B08u);
    ctx->pc = 0x118B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B00u;
    // 0x118b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1190D0u, 0x118B00u, 0x118B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B08u;
label_118b08:
    // 0x118b08: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118B08u;
    SET_GPR_U32(ctx, 31, 0x118B10u);
    ctx->pc = 0x118B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B08u;
    // 0x118b0c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118B08u, 0x118B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B10u;
label_118b10:
    // 0x118b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b14: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x118b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x118b18: 0xc062cf0  jal         func_18B3C0
    ctx->pc = 0x118B18u;
    SET_GPR_U32(ctx, 31, 0x118B20u);
    ctx->pc = 0x118B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B18u;
    // 0x118b1c: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B3C0u, 0x118B18u, 0x118B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B20u;
label_118b20:
    // 0x118b20: 0xc062d50  jal         func_18B540
    ctx->pc = 0x118B20u;
    SET_GPR_U32(ctx, 31, 0x118B28u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x118B20u, 0x118B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B28u;
label_118b28:
    // 0x118b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b2c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x118b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x118b30: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x118B30u;
    SET_GPR_U32(ctx, 31, 0x118B38u);
    ctx->pc = 0x118B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B30u;
    // 0x118b34: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC80u, 0x118B30u, 0x118B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B38u;
label_118b38:
    // 0x118b38: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x118B38u;
    SET_GPR_U32(ctx, 31, 0x118B40u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x118B38u, 0x118B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B40u;
label_118b40:
    // 0x118b40: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x118b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x118b44: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x118B44u;
    SET_GPR_U32(ctx, 31, 0x118B4Cu);
    ctx->pc = 0x118B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B44u;
    // 0x118b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x118B44u, 0x118B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B4Cu;
label_118b4c:
    // 0x118b4c: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x118B4Cu;
    SET_GPR_U32(ctx, 31, 0x118B54u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x118B4Cu, 0x118B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B54u;
label_118b54:
    // 0x118b54: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x118b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x118b58: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x118B58u;
    SET_GPR_U32(ctx, 31, 0x118B60u);
    ctx->pc = 0x118B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B58u;
    // 0x118b5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x118B58u, 0x118B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B60u;
label_118b60:
    // 0x118b60: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x118B60u;
    SET_GPR_U32(ctx, 31, 0x118B68u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x118B60u, 0x118B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B68u;
label_118b68:
    // 0x118b68: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x118b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x118b6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x118b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b70: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x118B70u;
    SET_GPR_U32(ctx, 31, 0x118B78u);
    ctx->pc = 0x118B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B70u;
    // 0x118b74: 0x24650020  addiu       $a1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x118B70u, 0x118B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B78u;
label_118b78:
    // 0x118b78: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x118b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x118b7c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x118b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x118b80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118b84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118b88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118b88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118b8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118b90: 0x3e00008  jr          $ra
    ctx->pc = 0x118B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B90u;
        // 0x118b94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B98u;
}
