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

// Function: entry_00115358
// Address: 0x115358 - 0x1153b8
void entry_00115358_0x115358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115358_0x115358");
#endif

    switch (ctx->pc) {
        case 0x11538cu: goto label_11538c;
        default: break;
    }

    ctx->pc = 0x115358u;

label_115358:
    // 0x115358: 0x10400209  beqz        $v0, . + 4 + (0x209 << 2)
label_11535c:
    if (ctx->pc == 0x11535Cu) {
        ctx->pc = 0x115360u;
        goto label_115360;
    }
    ctx->pc = 0x115358u;
    {
        const bool branch_taken_0x115358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115358) {
            ctx->pc = 0x115B80u;
            return;
        }
    }
    ctx->pc = 0x115360u;
label_115360:
    // 0x115360: 0x8e430274  lw          $v1, 0x274($s2)
    ctx->pc = 0x115360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 628)));
label_115364:
    // 0x115364: 0x8e42026c  lw          $v0, 0x26C($s2)
    ctx->pc = 0x115364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_115368:
    // 0x115368: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_11536c:
    if (ctx->pc == 0x11536Cu) {
        ctx->pc = 0x11536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115368u;
        // 0x11536c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115370u;
        goto label_115370;
    }
    ctx->pc = 0x115368u;
    {
        const bool branch_taken_0x115368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115368u;
        // 0x11536c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115368) {
            ctx->pc = 0x1153B8u;
            return;
        }
    }
    ctx->pc = 0x115370u;
label_115370:
    // 0x115370: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x115370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_115374:
    // 0x115374: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x115374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_115378:
    // 0x115378: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x115378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11537c:
    // 0x11537c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x11537cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_115380:
    // 0x115380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x115380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115384:
    // 0x115384: 0xc045700  jal         func_115C00
label_115388:
    if (ctx->pc == 0x115388u) {
        ctx->pc = 0x115388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115384u;
        // 0x115388: 0x240a0006  addiu       $t2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11538Cu;
        goto label_11538c;
    }
    ctx->pc = 0x115384u;
    SET_GPR_U32(ctx, 31, 0x11538Cu);
    ctx->pc = 0x115388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115384u;
    // 0x115388: 0x240a0006  addiu       $t2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C00u, 0x115384u, 0x11538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11538Cu;
label_11538c:
    // 0x11538c: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x11538cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
label_115390:
    // 0x115390: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x115390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_115394:
    // 0x115394: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x115394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_115398:
    // 0x115398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11539c:
    // 0x11539c: 0x938282d0  lbu         $v0, -0x7D30($gp)
    ctx->pc = 0x11539cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_1153a0:
    // 0x1153a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1153a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1153a4:
    // 0x1153a4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x1153a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_1153a8:
    // 0x1153a8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1153a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1153ac:
    // 0x1153ac: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1153acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1153b0:
    // 0x1153b0: 0x320f809  jalr        $t9
label_1153b4:
    if (ctx->pc == 0x1153B4u) {
        ctx->pc = 0x1153B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B0u;
        // 0x1153b4: 0x24650008  addiu       $a1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1153B8u;
        goto label_fallthrough_0x1153b0;
    }
    ctx->pc = 0x1153B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1153B8u);
        ctx->pc = 0x1153B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B0u;
        // 0x1153b4: 0x24650008  addiu       $a1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1153B0u, 0x1153B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1153b0:
    ctx->pc = 0x1153B8u;
}
