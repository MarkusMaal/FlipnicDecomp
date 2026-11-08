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

// Function: FUN_001f9180
// Address: 0x1f9180 - 0x1f924c
void FUN_001f9180_0x1f9180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f9180_0x1f9180");
#endif

    switch (ctx->pc) {
        case 0x1f91c4u: goto label_1f91c4;
        case 0x1f920cu: goto label_1f920c;
        case 0x1f922cu: goto label_1f922c;
        default: break;
    }

    ctx->pc = 0x1f9180u;

    // 0x1f9180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f9180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f9184: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f9184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f9188: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f9188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f918c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f9190: 0x24521600  addiu       $s2, $v0, 0x1600
    ctx->pc = 0x1f9190u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f9194: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f9194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f9198: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f9198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f919c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f919cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f91a0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f91a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f91a4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f91a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F91A8u;
    {
        const bool branch_taken_0x1f91a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91A8u;
        // 0x1f91ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91a8) {
            ctx->pc = 0x1F91B8u;
            goto label_1f91b8;
        }
    }
    ctx->pc = 0x1F91B0u;
    // 0x1f91b0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F91B0u;
    {
        const bool branch_taken_0x1f91b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91B0u;
        // 0x1f91b4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91b0) {
            ctx->pc = 0x1F9230u;
            goto label_1f9230;
        }
    }
    ctx->pc = 0x1F91B8u;
label_1f91b8:
    // 0x1f91b8: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1f91b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x1f91bc: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F91BCu;
    SET_GPR_U32(ctx, 31, 0x1F91C4u);
    ctx->pc = 0x1F91C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F91BCu;
    // 0x1f91c0: 0x8e64d6bc  lw          $a0, -0x2944($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F91BCu, 0x1F91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F91C4u;
label_1f91c4:
    // 0x1f91c4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F91C4u;
    {
        const bool branch_taken_0x1f91c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91C4u;
        // 0x1f91c8: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91c4) {
            ctx->pc = 0x1F91D4u;
            goto label_1f91d4;
        }
    }
    ctx->pc = 0x1F91CCu;
    // 0x1f91cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F91CCu;
    {
        const bool branch_taken_0x1f91cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91CCu;
        // 0x1f91d0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91cc) {
            ctx->pc = 0x1F9230u;
            goto label_1f9230;
        }
    }
    ctx->pc = 0x1F91D4u;
label_1f91d4:
    // 0x1f91d4: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f91d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f91d8: 0x24421680  addiu       $v0, $v0, 0x1680
    ctx->pc = 0x1f91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x1f91dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f91dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91e0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1f91e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1f91e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f91e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91e8: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1f91e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1f91ec: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f91ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f91f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f91f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f91f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f91f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f91f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f91f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f91fc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f91fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f9200: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f9200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f9204: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F9204u;
    SET_GPR_U32(ctx, 31, 0x1F920Cu);
    ctx->pc = 0x1F9208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9204u;
    // 0x1f9208: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F9204u, 0x1F920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F920Cu;
label_1f920c:
    // 0x1f920c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f920cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9210: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9210u;
    {
        const bool branch_taken_0x1f9210 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9210u;
        // 0x1f9214: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9210) {
            ctx->pc = 0x1F9224u;
            goto label_1f9224;
        }
    }
    ctx->pc = 0x1F9218u;
    // 0x1f9218: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f9218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f921c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F921Cu;
    {
        const bool branch_taken_0x1f921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F921Cu;
        // 0x1f9220: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f921c) {
            ctx->pc = 0x1F922Cu;
            goto label_1f922c;
        }
    }
    ctx->pc = 0x1F9224u;
label_1f9224:
    // 0x1f9224: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F9224u;
    SET_GPR_U32(ctx, 31, 0x1F922Cu);
    ctx->pc = 0x1F9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9224u;
    // 0x1f9228: 0x8e64d6bc  lw          $a0, -0x2944($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F9224u, 0x1F922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F922Cu;
label_1f922c:
    // 0x1f922c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f922cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9230:
    // 0x1f9230: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f9230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f9234: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f9234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f9238: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f9238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f923c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f923cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9240: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f9240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9244: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9244u;
        // 0x1f9248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F924Cu;
}
