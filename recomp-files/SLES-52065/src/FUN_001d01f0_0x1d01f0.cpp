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

// Function: FUN_001d01f0
// Address: 0x1d01f0 - 0x1d02cc
void FUN_001d01f0_0x1d01f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d01f0_0x1d01f0");
#endif

    switch (ctx->pc) {
        case 0x1d0220u: goto label_1d0220;
        case 0x1d0240u: goto label_1d0240;
        case 0x1d024cu: goto label_1d024c;
        case 0x1d0258u: goto label_1d0258;
        case 0x1d0270u: goto label_1d0270;
        case 0x1d0278u: goto label_1d0278;
        case 0x1d0284u: goto label_1d0284;
        case 0x1d0290u: goto label_1d0290;
        default: break;
    }

    ctx->pc = 0x1d01f0u;

    // 0x1d01f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d01f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d01f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d01f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d01f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d01f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d01fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d0200: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d0200u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d020c: 0x8c910034  lw          $s1, 0x34($a0)
    ctx->pc = 0x1d020cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1d0210: 0x11082b  sltu        $at, $zero, $s1
    ctx->pc = 0x1d0210u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d0214: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D0214u;
    {
        const bool branch_taken_0x1d0214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0214u;
        // 0x1d0218: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0214) {
            ctx->pc = 0x1D02B0u;
            goto label_1d02b0;
        }
    }
    ctx->pc = 0x1D021Cu;
    // 0x1d021c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d021cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0220:
    // 0x1d0220: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x1d0220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1d0224: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1d0224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1d0228: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d0228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d022c: 0x90630014  lbu         $v1, 0x14($v1)
    ctx->pc = 0x1d022cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1d0230: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D0230u;
    {
        const bool branch_taken_0x1d0230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0230u;
        // 0x1d0234: 0x26640030  addiu       $a0, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0230) {
            ctx->pc = 0x1D029Cu;
            goto label_1d029c;
        }
    }
    ctx->pc = 0x1D0238u;
    // 0x1d0238: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1D0238u;
    SET_GPR_U32(ctx, 31, 0x1D0240u);
    ctx->pc = 0x1D023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0238u;
    // 0x1d023c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1D0238u, 0x1D0240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0240u;
label_1d0240:
    // 0x1d0240: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d0240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0244: 0xc06dd28  jal         func_1B74A0
    ctx->pc = 0x1D0244u;
    SET_GPR_U32(ctx, 31, 0x1D024Cu);
    ctx->pc = 0x1D0248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0244u;
    // 0x1d0248: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74A0u, 0x1D0244u, 0x1D024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D024Cu;
label_1d024c:
    // 0x1d024c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0250: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0250u;
    {
        const bool branch_taken_0x1d0250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0250u;
        // 0x1d0254: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0250) {
            ctx->pc = 0x1D0278u;
            goto label_1d0278;
        }
    }
    ctx->pc = 0x1D0258u;
label_1d0258:
    // 0x1d0258: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1d0258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d025c: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x1d025cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d0260: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0260u;
    {
        const bool branch_taken_0x1d0260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0260) {
            ctx->pc = 0x1D0270u;
            goto label_1d0270;
        }
    }
    ctx->pc = 0x1D0268u;
    // 0x1d0268: 0xc06f8f4  jal         func_1BE3D0
    ctx->pc = 0x1D0268u;
    SET_GPR_U32(ctx, 31, 0x1D0270u);
    ctx->pc = 0x1D026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0268u;
    // 0x1d026c: 0x8e640020  lw          $a0, 0x20($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D0u, 0x1D0268u, 0x1D0270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0270u;
label_1d0270:
    // 0x1d0270: 0xc048974  jal         func_1225D0
    ctx->pc = 0x1D0270u;
    SET_GPR_U32(ctx, 31, 0x1D0278u);
    ctx->pc = 0x1D0274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0270u;
    // 0x1d0274: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1225D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1225D0u, 0x1D0270u, 0x1D0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0278u;
label_1d0278:
    // 0x1d0278: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x1d0278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1d027c: 0xc06dd2c  jal         func_1B74B0
    ctx->pc = 0x1D027Cu;
    SET_GPR_U32(ctx, 31, 0x1D0284u);
    ctx->pc = 0x1D0280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D027Cu;
    // 0x1d0280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B74B0u, 0x1D027Cu, 0x1D0284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0284u;
label_1d0284:
    // 0x1d0284: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d0284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d0288: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1D0288u;
    SET_GPR_U32(ctx, 31, 0x1D0290u);
    ctx->pc = 0x1D028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0288u;
    // 0x1d028c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1D0288u, 0x1D0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0290u;
label_1d0290:
    // 0x1d0290: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1d0290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1d0294: 0x1462fff0  bne         $v1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D0294u;
    {
        const bool branch_taken_0x1d0294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0294) {
            ctx->pc = 0x1D0258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0258;
        }
    }
    ctx->pc = 0x1D029Cu;
label_1d029c:
    // 0x1d029c: 0x0  nop
    ctx->pc = 0x1d029cu;
    // NOP
    // 0x1d02a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d02a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d02a4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1d02a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1d02a8: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1D02A8u;
    {
        const bool branch_taken_0x1d02a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D02ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02A8u;
        // 0x1d02ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02a8) {
            ctx->pc = 0x1D0220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0220;
        }
    }
    ctx->pc = 0x1D02B0u;
label_1d02b0:
    // 0x1d02b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d02b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d02b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d02b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d02b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d02b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d02bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d02bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d02c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d02c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d02c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D02C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D02C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02C4u;
        // 0x1d02c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D02C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D02CCu;
}
