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

// Function: FUN_0017f130
// Address: 0x17f130 - 0x17f26c
void FUN_0017f130_0x17f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017f130_0x17f130");
#endif

    switch (ctx->pc) {
        case 0x17f184u: goto label_17f184;
        case 0x17f1a0u: goto label_17f1a0;
        case 0x17f1b0u: goto label_17f1b0;
        case 0x17f1bcu: goto label_17f1bc;
        case 0x17f1d4u: goto label_17f1d4;
        case 0x17f1f8u: goto label_17f1f8;
        case 0x17f22cu: goto label_17f22c;
        case 0x17f238u: goto label_17f238;
        default: break;
    }

    ctx->pc = 0x17f130u;

    // 0x17f130: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x17f130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f134: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x17f134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f138: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17f138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f13c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17f13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f140: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17f140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17f144: 0x805fc54  j           func_17F150
    ctx->pc = 0x17F144u;
    ctx->pc = 0x17F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F144u;
    // 0x17f148: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F150u;
    goto label_17f150;
    ctx->pc = 0x17F14Cu;
    // 0x17f14c: 0x0  nop
    ctx->pc = 0x17f14cu;
    // NOP
label_17f150:
    // 0x17f150: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17f154: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17f158: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17f158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17f15c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17f160: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17f160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f164: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17f164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17f168: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17f168u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f16c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f170: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17f170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17f174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17f178: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17f178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f17c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17f17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17f180: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17f180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f184:
    // 0x17f184: 0x141400  sll         $v0, $s4, 16
    ctx->pc = 0x17f184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x17f188: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x17f188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x17f18c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x17f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x17f190: 0x26a5000c  addiu       $a1, $s5, 0xC
    ctx->pc = 0x17f190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x17f194: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x17f194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x17f198: 0xc05fcac  jal         func_17F2B0
    ctx->pc = 0x17F198u;
    SET_GPR_U32(ctx, 31, 0x17F1A0u);
    ctx->pc = 0x17F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F198u;
    // 0x17f19c: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F2B0u, 0x17F198u, 0x17F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1A0u;
label_17f1a0:
    // 0x17f1a0: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x17f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x17f1a4: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x17f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x17f1a8: 0xc05faf0  jal         func_17EBC0
    ctx->pc = 0x17F1A8u;
    SET_GPR_U32(ctx, 31, 0x17F1B0u);
    ctx->pc = 0x17F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1A8u;
    // 0x17f1ac: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBC0u, 0x17F1A8u, 0x17F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1B0u;
label_17f1b0:
    // 0x17f1b0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17f1b4: 0xc05fb8c  jal         func_17EE30
    ctx->pc = 0x17F1B4u;
    SET_GPR_U32(ctx, 31, 0x17F1BCu);
    ctx->pc = 0x17F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1B4u;
    // 0x17f1b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE30u, 0x17F1B4u, 0x17F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1BCu;
label_17f1bc:
    // 0x17f1bc: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x17f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x17f1c0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x17f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17f1c4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17F1C4u;
    {
        const bool branch_taken_0x17f1c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f1c4) {
            ctx->pc = 0x17F20Cu;
            goto label_17f20c;
        }
    }
    ctx->pc = 0x17F1CCu;
    // 0x17f1cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F1CCu;
    {
        const bool branch_taken_0x17f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f1cc) {
            ctx->pc = 0x17F1F8u;
            goto label_17f1f8;
        }
    }
    ctx->pc = 0x17F1D4u;
label_17f1d4:
    // 0x17f1d4: 0x0  nop
    ctx->pc = 0x17f1d4u;
    // NOP
    // 0x17f1d8: 0x8cb10010  lw          $s1, 0x10($a1)
    ctx->pc = 0x17f1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x17f1dc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x17f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x17f1e0: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F1E0u;
    {
        const bool branch_taken_0x17f1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x17f1e0) {
            ctx->pc = 0x17F1F0u;
            goto label_17f1f0;
        }
    }
    ctx->pc = 0x17F1E8u;
    // 0x17f1e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F1E8u;
    {
        const bool branch_taken_0x17f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f1e8) {
            ctx->pc = 0x17F214u;
            goto label_17f214;
        }
    }
    ctx->pc = 0x17F1F0u;
label_17f1f0:
    // 0x17f1f0: 0xc048974  jal         func_1225D0
    ctx->pc = 0x17F1F0u;
    SET_GPR_U32(ctx, 31, 0x17F1F8u);
    ctx->pc = 0x17F1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F1F0u;
    // 0x17f1f4: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x17F1F0u, 0x17F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F1F8u;
label_17f1f8:
    // 0x17f1f8: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x17f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x17f1fc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x17f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f200: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x17f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x17f204: 0x1083fff3  beq         $a0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x17F204u;
    {
        const bool branch_taken_0x17f204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f204) {
            ctx->pc = 0x17F1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f1d4;
        }
    }
    ctx->pc = 0x17F20Cu;
label_17f20c:
    // 0x17f20c: 0x0  nop
    ctx->pc = 0x17f20cu;
    // NOP
    // 0x17f210: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17f210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f214:
    // 0x17f214: 0x0  nop
    ctx->pc = 0x17f214u;
    // NOP
    // 0x17f218: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F218u;
    {
        const bool branch_taken_0x17f218 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f218) {
            ctx->pc = 0x17F238u;
            goto label_17f238;
        }
    }
    ctx->pc = 0x17F220u;
    // 0x17f220: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17f220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17f224: 0xc04c6f0  jal         func_131BC0
    ctx->pc = 0x17F224u;
    SET_GPR_U32(ctx, 31, 0x17F22Cu);
    ctx->pc = 0x17F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F224u;
    // 0x17f228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x17F224u, 0x17F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F22Cu;
label_17f22c:
    // 0x17f22c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x17f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17f230: 0xc04c6f0  jal         func_131BC0
    ctx->pc = 0x17F230u;
    SET_GPR_U32(ctx, 31, 0x17F238u);
    ctx->pc = 0x17F234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F230u;
    // 0x17f234: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x17F230u, 0x17F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F238u;
label_17f238:
    // 0x17f238: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17f238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17f23c: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x17f23cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x17f240: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x17F240u;
    {
        const bool branch_taken_0x17f240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f240) {
            ctx->pc = 0x17F184u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f184;
        }
    }
    ctx->pc = 0x17F248u;
    // 0x17f248: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17f248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17f24c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17f24cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f250: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17f250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f254: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f258: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f25c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f264: 0x3e00008  jr          $ra
    ctx->pc = 0x17F264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F264u;
        // 0x17f268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F26Cu;
}
