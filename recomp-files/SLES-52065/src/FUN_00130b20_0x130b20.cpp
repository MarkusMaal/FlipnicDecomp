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

// Function: FUN_00130b20
// Address: 0x130b20 - 0x130c0c
void FUN_00130b20_0x130b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130b20_0x130b20");
#endif

    switch (ctx->pc) {
        case 0x130b74u: goto label_130b74;
        case 0x130b7cu: goto label_130b7c;
        case 0x130bc8u: goto label_130bc8;
        case 0x130be8u: goto label_130be8;
        default: break;
    }

    ctx->pc = 0x130b20u;

    // 0x130b20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x130b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x130b24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x130b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x130b28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x130b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x130b2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x130b30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x130b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x130b34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x130b38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x130b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130b40: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x130b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
    // 0x130b44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x130b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x130b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130b4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x130b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130b50: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x130b50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x130b54: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x130B54u;
    {
        const bool branch_taken_0x130b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B54u;
        // 0x130b58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b54) {
            ctx->pc = 0x130B7Cu;
            goto label_130b7c;
        }
    }
    ctx->pc = 0x130B5Cu;
    // 0x130b5c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x130b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x130b60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x130b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x130b64: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x130b64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x130b68: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x130b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x130b6c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x130B6Cu;
    SET_GPR_U32(ctx, 31, 0x130B74u);
    ctx->pc = 0x130B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B6Cu;
    // 0x130b70: 0x24a5edb0  addiu       $a1, $a1, -0x1250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x130B6Cu, 0x130B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B74u;
label_130b74:
    // 0x130b74: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x130B74u;
    SET_GPR_U32(ctx, 31, 0x130B7Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x130B74u, 0x130B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B7Cu;
label_130b7c:
    // 0x130b7c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x130b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130b80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x130b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x130b84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x130b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130b88: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x130b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x130b8c: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x130b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
    // 0x130b90: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x130b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x130b94: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x130b94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x130b98: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x130B98u;
    {
        const bool branch_taken_0x130b98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B98u;
        // 0x130b9c: 0x27a20068  addiu       $v0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b98) {
            ctx->pc = 0x130BA4u;
            goto label_130ba4;
        }
    }
    ctx->pc = 0x130BA0u;
    // 0x130ba0: 0x27a2006c  addiu       $v0, $sp, 0x6C
    ctx->pc = 0x130ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_130ba4:
    // 0x130ba4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x130ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130ba8: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x130BA8u;
    {
        const bool branch_taken_0x130ba8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ba8) {
            ctx->pc = 0x130BE8u;
            goto label_130be8;
        }
    }
    ctx->pc = 0x130BB0u;
    // 0x130bb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x130bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130bb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x130bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130bbc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x130bbcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130bc0: 0xc048afc  jal         func_122BF0
    ctx->pc = 0x130BC0u;
    SET_GPR_U32(ctx, 31, 0x130BC8u);
    ctx->pc = 0x130BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BC0u;
    // 0x130bc4: 0x2932821  addu        $a1, $s4, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122BF0u, 0x130BC0u, 0x130BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BC8u;
label_130bc8:
    // 0x130bc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x130bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130bcc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x130bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x130bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130bd4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x130bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x130bd8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x130bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x130bdc: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x130bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x130be0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x130BE0u;
    SET_GPR_U32(ctx, 31, 0x130BE8u);
    ctx->pc = 0x130BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130BE0u;
    // 0x130be4: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x130BE0u, 0x130BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130BE8u;
label_130be8:
    // 0x130be8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x130be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x130becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130bf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x130bf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130bf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130bf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130c04: 0x3e00008  jr          $ra
    ctx->pc = 0x130C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C04u;
        // 0x130c08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130C0Cu;
}
