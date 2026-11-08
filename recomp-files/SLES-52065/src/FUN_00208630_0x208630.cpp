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

// Function: FUN_00208630
// Address: 0x208630 - 0x2086e8
void FUN_00208630_0x208630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00208630_0x208630");
#endif

    switch (ctx->pc) {
        case 0x2086b0u: goto label_2086b0;
        case 0x2086dcu: goto label_2086dc;
        default: break;
    }

    ctx->pc = 0x208630u;

    // 0x208630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208634: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208638: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x208638u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x20863c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20863cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x208640: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x208640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x208644: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208644u;
    {
        const bool branch_taken_0x208644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x208648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208644u;
        // 0x208648: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208644) {
            ctx->pc = 0x208658u;
            goto label_208658;
        }
    }
    ctx->pc = 0x20864Cu;
    // 0x20864c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208650: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x208650u;
    {
        const bool branch_taken_0x208650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208650u;
        // 0x208654: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208650) {
            ctx->pc = 0x2086D4u;
            goto label_2086d4;
        }
    }
    ctx->pc = 0x208658u;
label_208658:
    // 0x208658: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x208658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x20865c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20865Cu;
    {
        const bool branch_taken_0x20865c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20865Cu;
        // 0x208660: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20865c) {
            ctx->pc = 0x208688u;
            goto label_208688;
        }
    }
    ctx->pc = 0x208664u;
    // 0x208664: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x208664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x208668: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208668u;
    {
        const bool branch_taken_0x208668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208668u;
        // 0x20866c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208668) {
            ctx->pc = 0x208680u;
            goto label_208680;
        }
    }
    ctx->pc = 0x208670u;
    // 0x208670: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x208670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x208674: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x208674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x208678: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x208678u;
    {
        const bool branch_taken_0x208678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208678u;
        // 0x20867c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208678) {
            ctx->pc = 0x2086E0u;
            goto label_2086e0;
        }
    }
    ctx->pc = 0x208680u;
label_208680:
    // 0x208680: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208680u;
    {
        const bool branch_taken_0x208680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208680u;
        // 0x208684: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208680) {
            ctx->pc = 0x20868Cu;
            goto label_20868c;
        }
    }
    ctx->pc = 0x208688u;
label_208688:
    // 0x208688: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x208688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_20868c:
    // 0x20868c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x20868cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208690: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208694: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x208694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x208698: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x208698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x20869c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20869Cu;
    {
        const bool branch_taken_0x20869c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20869Cu;
        // 0x2086a0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20869c) {
            ctx->pc = 0x2086D4u;
            goto label_2086d4;
        }
    }
    ctx->pc = 0x2086A4u;
    // 0x2086a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2086a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2086a8: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x2086a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x2086ac: 0x0  nop
    ctx->pc = 0x2086acu;
    // NOP
label_2086b0:
    // 0x2086b0: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x2086b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x2086b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2086b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2086b8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2086b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086bc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x2086bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2086c0: 0x0  nop
    ctx->pc = 0x2086c0u;
    // NOP
    // 0x2086c4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2086C4u;
    {
        const bool branch_taken_0x2086c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2086c4) {
            ctx->pc = 0x2086B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2086b0;
        }
    }
    ctx->pc = 0x2086CCu;
    // 0x2086cc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2086ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2086d0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x2086d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_2086d4:
    // 0x2086d4: 0xc081efa  jal         func_207BE8
    ctx->pc = 0x2086D4u;
    SET_GPR_U32(ctx, 31, 0x2086DCu);
    ctx->pc = 0x2086D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2086D4u;
    // 0x2086d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207BE8u, 0x2086D4u, 0x2086DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086DCu;
label_2086dc:
    // 0x2086dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2086dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2086e0:
    // 0x2086e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2086E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2086E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086E0u;
        // 0x2086e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2086E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2086E8u;
}
