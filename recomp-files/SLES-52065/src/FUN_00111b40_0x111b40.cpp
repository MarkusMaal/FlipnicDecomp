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

// Function: FUN_00111b40
// Address: 0x111b40 - 0x111ca4
void FUN_00111b40_0x111b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00111b40_0x111b40");
#endif

    switch (ctx->pc) {
        case 0x111b78u: goto label_111b78;
        case 0x111ba0u: goto label_111ba0;
        case 0x111bc8u: goto label_111bc8;
        case 0x111c04u: goto label_111c04;
        case 0x111c5cu: goto label_111c5c;
        case 0x111c64u: goto label_111c64;
        default: break;
    }

    ctx->pc = 0x111b40u;

    // 0x111b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111b44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x111b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111b48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x111b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x111b4c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x111b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x111b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x111b54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x111b58: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x111b58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b5c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x111b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x111b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x111b64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x111b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b70: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x111B70u;
    SET_GPR_U32(ctx, 31, 0x111B78u);
    ctx->pc = 0x111B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B70u;
    // 0x111b74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x111B70u, 0x111B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B78u;
label_111b78:
    // 0x111b78: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x111b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111b7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x111b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111b80: 0x1045001b  beq         $v0, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x111B80u;
    {
        const bool branch_taken_0x111b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x111b80) {
            ctx->pc = 0x111BF0u;
            goto label_111bf0;
        }
    }
    ctx->pc = 0x111B88u;
    // 0x111b88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111B88u;
    {
        const bool branch_taken_0x111b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B88u;
        // 0x111b8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b88) {
            ctx->pc = 0x111B98u;
            goto label_111b98;
        }
    }
    ctx->pc = 0x111B90u;
    // 0x111b90: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x111B90u;
    {
        const bool branch_taken_0x111b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B90u;
        // 0x111b94: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b90) {
            ctx->pc = 0x111C88u;
            goto label_111c88;
        }
    }
    ctx->pc = 0x111B98u;
label_111b98:
    // 0x111b98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x111B98u;
    {
        const bool branch_taken_0x111b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B98u;
        // 0x111b9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b98) {
            ctx->pc = 0x111BD0u;
            goto label_111bd0;
        }
    }
    ctx->pc = 0x111BA0u;
label_111ba0:
    // 0x111ba0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x111ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x111ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ba8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x111ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111bac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x111bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x111bb0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x111bb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111bb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111bbc: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x111bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111bc0: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x111BC0u;
    SET_GPR_U32(ctx, 31, 0x111BC8u);
    ctx->pc = 0x111BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111BC0u;
    // 0x111bc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x111BC0u, 0x111BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BC8u;
label_111bc8:
    // 0x111bc8: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x111bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x111bcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x111bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_111bd0:
    // 0x111bd0: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x111bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x111bd4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x111bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111bd8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x111BD8u;
    {
        const bool branch_taken_0x111bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111bd8) {
            ctx->pc = 0x111BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111ba0;
        }
    }
    ctx->pc = 0x111BE0u;
    // 0x111be0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x111be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111be8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x111BE8u;
    {
        const bool branch_taken_0x111be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BE8u;
        // 0x111bec: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111be8) {
            ctx->pc = 0x111C84u;
            goto label_111c84;
        }
    }
    ctx->pc = 0x111BF0u;
label_111bf0:
    // 0x111bf0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x111bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x111bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111bf8: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x111bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x111bfc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x111BFCu;
    {
        const bool branch_taken_0x111bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BFCu;
        // 0x111c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bfc) {
            ctx->pc = 0x111C3Cu;
            goto label_111c3c;
        }
    }
    ctx->pc = 0x111C04u;
label_111c04:
    // 0x111c04: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x111c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x111c08: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x111c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x111c0c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x111c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111c10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111c14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x111c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x111c18: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x111c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111c1c: 0x90420224  lbu         $v0, 0x224($v0)
    ctx->pc = 0x111c1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x111c20: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x111c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x111c24: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x111C24u;
    {
        const bool branch_taken_0x111c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x111C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C24u;
        // 0x111c28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c24) {
            ctx->pc = 0x111C34u;
            goto label_111c34;
        }
    }
    ctx->pc = 0x111C2Cu;
    // 0x111c2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x111C2Cu;
    {
        const bool branch_taken_0x111c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c2c) {
            ctx->pc = 0x111C4Cu;
            goto label_111c4c;
        }
    }
    ctx->pc = 0x111C34u;
label_111c34:
    // 0x111c34: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x111c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x111c38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x111c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_111c3c:
    // 0x111c3c: 0x0  nop
    ctx->pc = 0x111c3cu;
    // NOP
    // 0x111c40: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x111c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111c44: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x111C44u;
    {
        const bool branch_taken_0x111c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C44u;
        // 0x111c48: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c44) {
            ctx->pc = 0x111C04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111c04;
        }
    }
    ctx->pc = 0x111C4Cu;
label_111c4c:
    // 0x111c4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x111C4Cu;
    {
        const bool branch_taken_0x111c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C4Cu;
        // 0x111c50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c4c) {
            ctx->pc = 0x111C84u;
            goto label_111c84;
        }
    }
    ctx->pc = 0x111C54u;
    // 0x111c54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111C54u;
    {
        const bool branch_taken_0x111c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111c54) {
            ctx->pc = 0x111C68u;
            goto label_111c68;
        }
    }
    ctx->pc = 0x111C5Cu;
label_111c5c:
    // 0x111c5c: 0xc043f10  jal         func_10FC40
    ctx->pc = 0x111C5Cu;
    SET_GPR_U32(ctx, 31, 0x111C64u);
    ctx->pc = 0x111C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C5Cu;
    // 0x111c60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x111C5Cu, 0x111C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C64u;
label_111c64:
    // 0x111c64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x111c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_111c68:
    // 0x111c68: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x111c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x111c6c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x111c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x111c70: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111C70u;
    {
        const bool branch_taken_0x111c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C70u;
        // 0x111c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c70) {
            ctx->pc = 0x111C5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111c5c;
        }
    }
    ctx->pc = 0x111C78u;
    // 0x111c78: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x111c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x111c7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111c80: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x111c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_111c84:
    // 0x111c84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x111c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_111c88:
    // 0x111c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111c90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x111c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x111C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C9Cu;
        // 0x111ca0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111CA4u;
}
