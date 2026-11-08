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

// Function: FUN_0018f580
// Address: 0x18f580 - 0x18f6f4
void FUN_0018f580_0x18f580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f580_0x18f580");
#endif

    switch (ctx->pc) {
        case 0x18f5dcu: goto label_18f5dc;
        case 0x18f5f8u: goto label_18f5f8;
        case 0x18f62cu: goto label_18f62c;
        case 0x18f648u: goto label_18f648;
        case 0x18f6c0u: goto label_18f6c0;
        case 0x18f6d8u: goto label_18f6d8;
        default: break;
    }

    ctx->pc = 0x18f580u;

    // 0x18f580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18f580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18f584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18f584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18f588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f58c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18f594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f598: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x18F598u;
    {
        const bool branch_taken_0x18f598 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F598u;
        // 0x18f59c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f598) {
            ctx->pc = 0x18F6D8u;
            goto label_18f6d8;
        }
    }
    ctx->pc = 0x18F5A0u;
    // 0x18f5a0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x18f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x18f5a4: 0x2442b1f0  addiu       $v0, $v0, -0x4E10
    ctx->pc = 0x18f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947312));
    // 0x18f5a8: 0xae22031c  sw          $v0, 0x31C($s1)
    ctx->pc = 0x18f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    // 0x18f5ac: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x18f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18f5b0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18F5B0u;
    {
        const bool branch_taken_0x18f5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f5b0) {
            ctx->pc = 0x18F5FCu;
            goto label_18f5fc;
        }
    }
    ctx->pc = 0x18F5B8u;
    // 0x18f5b8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x18f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x18f5bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x18f5c0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x18f5c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F5C4u;
    {
        const bool branch_taken_0x18f5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5C4u;
        // 0x18f5c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f5c4) {
            ctx->pc = 0x18F5D4u;
            goto label_18f5d4;
        }
    }
    ctx->pc = 0x18F5CCu;
    // 0x18f5cc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x18f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18f5d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_18f5d4:
    // 0x18f5d4: 0xc063ec4  jal         func_18FB10
    ctx->pc = 0x18F5D4u;
    SET_GPR_U32(ctx, 31, 0x18F5DCu);
    ctx->pc = 0x18FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB10u, 0x18F5D4u, 0x18F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5DCu;
label_18f5dc:
    // 0x18f5dc: 0x8c430230  lw          $v1, 0x230($v0)
    ctx->pc = 0x18f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x18f5e0: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x18f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x18f5e4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F5E4u;
    {
        const bool branch_taken_0x18f5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f5e4) {
            ctx->pc = 0x18F5FCu;
            goto label_18f5fc;
        }
    }
    ctx->pc = 0x18F5ECu;
    // 0x18f5ec: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x18f5ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x18f5f0: 0xc063ec4  jal         func_18FB10
    ctx->pc = 0x18F5F0u;
    SET_GPR_U32(ctx, 31, 0x18F5F8u);
    ctx->pc = 0x18F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5F0u;
    // 0x18f5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB10u, 0x18F5F0u, 0x18F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5F8u;
label_18f5f8:
    // 0x18f5f8: 0xac520230  sw          $s2, 0x230($v0)
    ctx->pc = 0x18f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 18));
label_18f5fc:
    // 0x18f5fc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x18f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x18f600: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18F600u;
    {
        const bool branch_taken_0x18f600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f600) {
            ctx->pc = 0x18F64Cu;
            goto label_18f64c;
        }
    }
    ctx->pc = 0x18F608u;
    // 0x18f608: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x18f608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x18f60c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x18f610: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x18f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x18f614: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F614u;
    {
        const bool branch_taken_0x18f614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F614u;
        // 0x18f618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f614) {
            ctx->pc = 0x18F624u;
            goto label_18f624;
        }
    }
    ctx->pc = 0x18F61Cu;
    // 0x18f61c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x18f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x18f620: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18f620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_18f624:
    // 0x18f624: 0xc063ec8  jal         func_18FB20
    ctx->pc = 0x18F624u;
    SET_GPR_U32(ctx, 31, 0x18F62Cu);
    ctx->pc = 0x18FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB20u, 0x18F624u, 0x18F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F62Cu;
label_18f62c:
    // 0x18f62c: 0x8c430230  lw          $v1, 0x230($v0)
    ctx->pc = 0x18f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 560)));
    // 0x18f630: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x18f630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x18f634: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F634u;
    {
        const bool branch_taken_0x18f634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f634) {
            ctx->pc = 0x18F64Cu;
            goto label_18f64c;
        }
    }
    ctx->pc = 0x18F63Cu;
    // 0x18f63c: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x18f63cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x18f640: 0xc063ec8  jal         func_18FB20
    ctx->pc = 0x18F640u;
    SET_GPR_U32(ctx, 31, 0x18F648u);
    ctx->pc = 0x18F644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F640u;
    // 0x18f644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FB20u, 0x18F640u, 0x18F648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F648u;
label_18f648:
    // 0x18f648: 0xac520230  sw          $s2, 0x230($v0)
    ctx->pc = 0x18f648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 18));
label_18f64c:
    // 0x18f64c: 0x8e240314  lw          $a0, 0x314($s1)
    ctx->pc = 0x18f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x18f650: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18f650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f654: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F654u;
    {
        const bool branch_taken_0x18f654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F654u;
        // 0x18f658: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f654) {
            ctx->pc = 0x18F66Cu;
            goto label_18f66c;
        }
    }
    ctx->pc = 0x18F65Cu;
    // 0x18f65c: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x18f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x18f660: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x18F660u;
    {
        const bool branch_taken_0x18f660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F660u;
        // 0x18f664: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f660) {
            ctx->pc = 0x18F6C4u;
            goto label_18f6c4;
        }
    }
    ctx->pc = 0x18F668u;
    // 0x18f668: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18f668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18f66c:
    // 0x18f66c: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F66Cu;
    {
        const bool branch_taken_0x18f66c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f66c) {
            ctx->pc = 0x18F678u;
            goto label_18f678;
        }
    }
    ctx->pc = 0x18F674u;
    // 0x18f674: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x18f674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
label_18f678:
    // 0x18f678: 0x8e230318  lw          $v1, 0x318($s1)
    ctx->pc = 0x18f678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x18f67c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f680: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F680u;
    {
        const bool branch_taken_0x18f680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F680u;
        // 0x18f684: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f680) {
            ctx->pc = 0x18F690u;
            goto label_18f690;
        }
    }
    ctx->pc = 0x18F688u;
    // 0x18f688: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18f688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18f68c: 0xae220318  sw          $v0, 0x318($s1)
    ctx->pc = 0x18f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 792), GPR_U32(ctx, 2));
label_18f690:
    // 0x18f690: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x18f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x18f694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18f694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f698: 0x8e250318  lw          $a1, 0x318($s1)
    ctx->pc = 0x18f698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x18f69c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18f6a0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18f6a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18f6a8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x18f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18f6ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18f6b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f6b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f6b8: 0xc063e50  jal         func_18F940
    ctx->pc = 0x18F6B8u;
    SET_GPR_U32(ctx, 31, 0x18F6C0u);
    ctx->pc = 0x18F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6B8u;
    // 0x18f6bc: 0xac450054  sw          $a1, 0x54($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F940u, 0x18F6B8u, 0x18F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F6C0u;
label_18f6c0:
    // 0x18f6c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x18f6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_18f6c4:
    // 0x18f6c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18f6c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18f6c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F6C8u;
    {
        const bool branch_taken_0x18f6c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6C8u;
        // 0x18f6cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f6c8) {
            ctx->pc = 0x18F6DCu;
            goto label_18f6dc;
        }
    }
    ctx->pc = 0x18F6D0u;
    // 0x18f6d0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x18F6D0u;
    SET_GPR_U32(ctx, 31, 0x18F6D8u);
    ctx->pc = 0x18F6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F6D0u;
    // 0x18f6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x18F6D0u, 0x18F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F6D8u;
label_18f6d8:
    // 0x18f6d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18f6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f6dc:
    // 0x18f6dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18f6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f6e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f6e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f6e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f6e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x18F6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F6ECu;
        // 0x18f6f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F6F4u;
}
