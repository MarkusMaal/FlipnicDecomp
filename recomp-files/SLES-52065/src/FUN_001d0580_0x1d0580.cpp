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

// Function: FUN_001d0580
// Address: 0x1d0580 - 0x1d0624
void FUN_001d0580_0x1d0580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d0580_0x1d0580");
#endif

    switch (ctx->pc) {
        case 0x1d0580u: goto label_1d0580;
        case 0x1d0584u: goto label_1d0584;
        case 0x1d0588u: goto label_1d0588;
        case 0x1d058cu: goto label_1d058c;
        case 0x1d0590u: goto label_1d0590;
        case 0x1d0594u: goto label_1d0594;
        case 0x1d0598u: goto label_1d0598;
        case 0x1d059cu: goto label_1d059c;
        case 0x1d05a0u: goto label_1d05a0;
        case 0x1d05a4u: goto label_1d05a4;
        case 0x1d05a8u: goto label_1d05a8;
        case 0x1d05acu: goto label_1d05ac;
        case 0x1d05b0u: goto label_1d05b0;
        case 0x1d05b4u: goto label_1d05b4;
        case 0x1d05b8u: goto label_1d05b8;
        case 0x1d05bcu: goto label_1d05bc;
        case 0x1d05c0u: goto label_1d05c0;
        case 0x1d05c4u: goto label_1d05c4;
        case 0x1d05c8u: goto label_1d05c8;
        case 0x1d05ccu: goto label_1d05cc;
        case 0x1d05d0u: goto label_1d05d0;
        case 0x1d05d4u: goto label_1d05d4;
        case 0x1d05d8u: goto label_1d05d8;
        case 0x1d05dcu: goto label_1d05dc;
        case 0x1d05e0u: goto label_1d05e0;
        case 0x1d05e4u: goto label_1d05e4;
        case 0x1d05e8u: goto label_1d05e8;
        case 0x1d05ecu: goto label_1d05ec;
        case 0x1d05f0u: goto label_1d05f0;
        case 0x1d05f4u: goto label_1d05f4;
        case 0x1d05f8u: goto label_1d05f8;
        case 0x1d05fcu: goto label_1d05fc;
        case 0x1d0600u: goto label_1d0600;
        case 0x1d0604u: goto label_1d0604;
        case 0x1d0608u: goto label_1d0608;
        case 0x1d060cu: goto label_1d060c;
        case 0x1d0610u: goto label_1d0610;
        case 0x1d0614u: goto label_1d0614;
        case 0x1d0618u: goto label_1d0618;
        case 0x1d061cu: goto label_1d061c;
        case 0x1d0620u: goto label_1d0620;
        default: break;
    }

    ctx->pc = 0x1d0580u;

label_1d0580:
    // 0x1d0580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d0584:
    // 0x1d0584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d0588:
    // 0x1d0588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d058c:
    // 0x1d058c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d0590:
    // 0x1d0590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0594:
    // 0x1d0594: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1d0598:
    if (ctx->pc == 0x1D0598u) {
        ctx->pc = 0x1D0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0594u;
        // 0x1d0598: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D059Cu;
        goto label_1d059c;
    }
    ctx->pc = 0x1D0594u;
    {
        const bool branch_taken_0x1d0594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0594u;
        // 0x1d0598: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0594) {
            ctx->pc = 0x1D060Cu;
            goto label_1d060c;
        }
    }
    ctx->pc = 0x1D059Cu;
label_1d059c:
    // 0x1d059c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1d05a0:
    // 0x1d05a0: 0x2442bf80  addiu       $v0, $v0, -0x4080
    ctx->pc = 0x1d05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950784));
label_1d05a4:
    // 0x1d05a4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1d05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1d05a8:
    // 0x1d05a8: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1d05a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1d05ac:
    // 0x1d05ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1d05b0:
    if (ctx->pc == 0x1D05B0u) {
        ctx->pc = 0x1D05B4u;
        goto label_1d05b4;
    }
    ctx->pc = 0x1D05ACu;
    {
        const bool branch_taken_0x1d05ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d05ac) {
            ctx->pc = 0x1D05C4u;
            goto label_1d05c4;
        }
    }
    ctx->pc = 0x1D05B4u;
label_1d05b4:
    // 0x1d05b4: 0x8c990094  lw          $t9, 0x94($a0)
    ctx->pc = 0x1d05b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_1d05b8:
    // 0x1d05b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1d05b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1d05bc:
    // 0x1d05bc: 0x320f809  jalr        $t9
label_1d05c0:
    if (ctx->pc == 0x1D05C0u) {
        ctx->pc = 0x1D05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05BCu;
        // 0x1d05c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05C4u;
        goto label_1d05c4;
    }
    ctx->pc = 0x1D05BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D05C4u);
        ctx->pc = 0x1D05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05BCu;
        // 0x1d05c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D05BCu, 0x1D05C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D05C4u;
label_1d05c4:
    // 0x1d05c4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_1d05c8:
    if (ctx->pc == 0x1D05C8u) {
        ctx->pc = 0x1D05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05C4u;
        // 0x1d05c8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05CCu;
        goto label_1d05cc;
    }
    ctx->pc = 0x1D05C4u;
    {
        const bool branch_taken_0x1d05c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05C4u;
        // 0x1d05c8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05c4) {
            ctx->pc = 0x1D05F8u;
            goto label_1d05f8;
        }
    }
    ctx->pc = 0x1D05CCu;
label_1d05cc:
    // 0x1d05cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1d05d0:
    // 0x1d05d0: 0x244287d0  addiu       $v0, $v0, -0x7830
    ctx->pc = 0x1d05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936528));
label_1d05d4:
    // 0x1d05d4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_1d05d8:
    if (ctx->pc == 0x1D05D8u) {
        ctx->pc = 0x1D05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05D4u;
        // 0x1d05d8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05DCu;
        goto label_1d05dc;
    }
    ctx->pc = 0x1D05D4u;
    {
        const bool branch_taken_0x1d05d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05D4u;
        // 0x1d05d8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05d4) {
            ctx->pc = 0x1D05F4u;
            goto label_1d05f4;
        }
    }
    ctx->pc = 0x1D05DCu;
label_1d05dc:
    // 0x1d05dc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1d05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1d05e0:
    // 0x1d05e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d05e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d05e4:
    // 0x1d05e4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1d05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
label_1d05e8:
    // 0x1d05e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d05e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d05ec:
    // 0x1d05ec: 0xc045cb8  jal         func_1172E0
label_1d05f0:
    if (ctx->pc == 0x1D05F0u) {
        ctx->pc = 0x1D05F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05ECu;
        // 0x1d05f0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D05F4u;
        goto label_1d05f4;
    }
    ctx->pc = 0x1D05ECu;
    SET_GPR_U32(ctx, 31, 0x1D05F4u);
    ctx->pc = 0x1D05F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D05ECu;
    // 0x1d05f0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1D05ECu, 0x1D05F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D05F4u;
label_1d05f4:
    // 0x1d05f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1d05f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1d05f8:
    // 0x1d05f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d05f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1d05fc:
    // 0x1d05fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1d0600:
    if (ctx->pc == 0x1D0600u) {
        ctx->pc = 0x1D0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05FCu;
        // 0x1d0600: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0604u;
        goto label_1d0604;
    }
    ctx->pc = 0x1D05FCu;
    {
        const bool branch_taken_0x1d05fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D05FCu;
        // 0x1d0600: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05fc) {
            ctx->pc = 0x1D0610u;
            goto label_1d0610;
        }
    }
    ctx->pc = 0x1D0604u;
label_1d0604:
    // 0x1d0604: 0xc0401a4  jal         func_100690
label_1d0608:
    if (ctx->pc == 0x1D0608u) {
        ctx->pc = 0x1D0608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0604u;
        // 0x1d0608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D060Cu;
        goto label_1d060c;
    }
    ctx->pc = 0x1D0604u;
    SET_GPR_U32(ctx, 31, 0x1D060Cu);
    ctx->pc = 0x1D0608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0604u;
    // 0x1d0608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1D0604u, 0x1D060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D060Cu;
label_1d060c:
    // 0x1d060c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d060cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0610:
    // 0x1d0610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d0610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0614:
    // 0x1d0614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0618:
    // 0x1d0618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d061c:
    // 0x1d061c: 0x3e00008  jr          $ra
label_1d0620:
    if (ctx->pc == 0x1D0620u) {
        ctx->pc = 0x1D0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D061Cu;
        // 0x1d0620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0624u;
        goto label_fallthrough_0x1d061c;
    }
    ctx->pc = 0x1D061Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D061Cu;
        // 0x1d0620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D061Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d061c:
    ctx->pc = 0x1D0624u;
}
