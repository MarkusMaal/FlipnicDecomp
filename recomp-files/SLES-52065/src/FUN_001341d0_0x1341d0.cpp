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

// Function: FUN_001341d0
// Address: 0x1341d0 - 0x1342c0
void FUN_001341d0_0x1341d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001341d0_0x1341d0");
#endif

    switch (ctx->pc) {
        case 0x1341fcu: goto label_1341fc;
        case 0x134208u: goto label_134208;
        case 0x134210u: goto label_134210;
        case 0x134220u: goto label_134220;
        case 0x13422cu: goto label_13422c;
        case 0x134234u: goto label_134234;
        case 0x13423cu: goto label_13423c;
        case 0x13425cu: goto label_13425c;
        case 0x134270u: goto label_134270;
        case 0x1342a4u: goto label_1342a4;
        default: break;
    }

    ctx->pc = 0x1341d0u;

    // 0x1341d0: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x1341d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x1341d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1341d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1341d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1341d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1341dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1341dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1341e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1341e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1341e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1341e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1341e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341ec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1341ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1341f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1341f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1341f4: 0xc080702  jal         func_201C08
    ctx->pc = 0x1341F4u;
    SET_GPR_U32(ctx, 31, 0x1341FCu);
    ctx->pc = 0x1341F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341F4u;
    // 0x1341f8: 0x24a5ee78  addiu       $a1, $a1, -0x1188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1341F4u, 0x1341FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341FCu;
label_1341fc:
    // 0x1341fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1341fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134200: 0xc080664  jal         func_201990
    ctx->pc = 0x134200u;
    SET_GPR_U32(ctx, 31, 0x134208u);
    ctx->pc = 0x134204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134200u;
    // 0x134204: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x134200u, 0x134208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134208u;
label_134208:
    // 0x134208: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x134208u;
    SET_GPR_U32(ctx, 31, 0x134210u);
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x134208u, 0x134210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134210u;
label_134210:
    // 0x134210: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x134210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134214: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x134214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x134218: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x134218u;
    SET_GPR_U32(ctx, 31, 0x134220u);
    ctx->pc = 0x13421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134218u;
    // 0x13421c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x134218u, 0x134220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134220u;
label_134220:
    // 0x134220: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134224: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x134224u;
    SET_GPR_U32(ctx, 31, 0x13422Cu);
    ctx->pc = 0x134228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134224u;
    // 0x134228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x134224u, 0x13422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13422Cu;
label_13422c:
    // 0x13422c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13422Cu;
    {
        const bool branch_taken_0x13422c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13422c) {
            ctx->pc = 0x134250u;
            goto label_134250;
        }
    }
    ctx->pc = 0x134234u;
label_134234:
    // 0x134234: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x134234u;
    SET_GPR_U32(ctx, 31, 0x13423Cu);
    ctx->pc = 0x134238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134234u;
    // 0x134238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x134234u, 0x13423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13423Cu;
label_13423c:
    // 0x13423c: 0x0  nop
    ctx->pc = 0x13423cu;
    // NOP
    // 0x134240: 0x0  nop
    ctx->pc = 0x134240u;
    // NOP
    // 0x134244: 0x0  nop
    ctx->pc = 0x134244u;
    // NOP
    // 0x134248: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x134248u;
    {
        const bool branch_taken_0x134248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134248) {
            ctx->pc = 0x134234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134234;
        }
    }
    ctx->pc = 0x134250u;
label_134250:
    // 0x134250: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x134250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x134254: 0xc080702  jal         func_201C08
    ctx->pc = 0x134254u;
    SET_GPR_U32(ctx, 31, 0x13425Cu);
    ctx->pc = 0x134258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134254u;
    // 0x134258: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134254u, 0x13425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13425Cu;
label_13425c:
    // 0x13425c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13425Cu;
    {
        const bool branch_taken_0x13425c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x134260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13425Cu;
        // 0x134260: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13425c) {
            ctx->pc = 0x134278u;
            goto label_134278;
        }
    }
    ctx->pc = 0x134264u;
    // 0x134264: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x134264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x134268: 0xc080702  jal         func_201C08
    ctx->pc = 0x134268u;
    SET_GPR_U32(ctx, 31, 0x134270u);
    ctx->pc = 0x13426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134268u;
    // 0x13426c: 0x24a5ee70  addiu       $a1, $a1, -0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x134268u, 0x134270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134270u;
label_134270:
    // 0x134270: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x134270u;
    {
        const bool branch_taken_0x134270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134270u;
        // 0x134274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134270) {
            ctx->pc = 0x1342A8u;
            goto label_1342a8;
        }
    }
    ctx->pc = 0x134278u;
label_134278:
    // 0x134278: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x134278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13427c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x13427cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x134280: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x134280u;
    {
        const bool branch_taken_0x134280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x134284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134280u;
        // 0x134284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134280) {
            ctx->pc = 0x13429Cu;
            goto label_13429c;
        }
    }
    ctx->pc = 0x134288u;
    // 0x134288: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x134288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13428c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13428Cu;
    {
        const bool branch_taken_0x13428c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13428c) {
            ctx->pc = 0x134298u;
            goto label_134298;
        }
    }
    ctx->pc = 0x134294u;
    // 0x134294: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x134294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_134298:
    // 0x134298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13429c:
    // 0x13429c: 0xc04d0b0  jal         func_1342C0
    ctx->pc = 0x13429Cu;
    SET_GPR_U32(ctx, 31, 0x1342A4u);
    ctx->pc = 0x1342A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13429Cu;
    // 0x1342a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1342C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1342C0u, 0x13429Cu, 0x1342A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342A4u;
label_1342a4:
    // 0x1342a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1342a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1342a8:
    // 0x1342a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1342a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1342ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1342acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1342b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1342b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1342b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1342b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1342b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1342B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1342BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342B8u;
        // 0x1342bc: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1342B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1342C0u;
}
