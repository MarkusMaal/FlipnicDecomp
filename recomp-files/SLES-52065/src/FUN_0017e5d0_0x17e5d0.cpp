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

// Function: FUN_0017e5d0
// Address: 0x17e5d0 - 0x17e6f0
void FUN_0017e5d0_0x17e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e5d0_0x17e5d0");
#endif

    switch (ctx->pc) {
        case 0x17e5d0u: goto label_17e5d0;
        case 0x17e5d4u: goto label_17e5d4;
        case 0x17e5d8u: goto label_17e5d8;
        case 0x17e5dcu: goto label_17e5dc;
        case 0x17e5e0u: goto label_17e5e0;
        case 0x17e5e4u: goto label_17e5e4;
        case 0x17e5e8u: goto label_17e5e8;
        case 0x17e5ecu: goto label_17e5ec;
        case 0x17e5f0u: goto label_17e5f0;
        case 0x17e5f4u: goto label_17e5f4;
        case 0x17e5f8u: goto label_17e5f8;
        case 0x17e5fcu: goto label_17e5fc;
        case 0x17e600u: goto label_17e600;
        case 0x17e604u: goto label_17e604;
        case 0x17e608u: goto label_17e608;
        case 0x17e60cu: goto label_17e60c;
        case 0x17e610u: goto label_17e610;
        case 0x17e614u: goto label_17e614;
        case 0x17e618u: goto label_17e618;
        case 0x17e61cu: goto label_17e61c;
        case 0x17e620u: goto label_17e620;
        case 0x17e624u: goto label_17e624;
        case 0x17e628u: goto label_17e628;
        case 0x17e62cu: goto label_17e62c;
        case 0x17e630u: goto label_17e630;
        case 0x17e634u: goto label_17e634;
        case 0x17e638u: goto label_17e638;
        case 0x17e63cu: goto label_17e63c;
        case 0x17e640u: goto label_17e640;
        case 0x17e644u: goto label_17e644;
        case 0x17e648u: goto label_17e648;
        case 0x17e64cu: goto label_17e64c;
        case 0x17e650u: goto label_17e650;
        case 0x17e654u: goto label_17e654;
        case 0x17e658u: goto label_17e658;
        case 0x17e65cu: goto label_17e65c;
        case 0x17e660u: goto label_17e660;
        case 0x17e664u: goto label_17e664;
        case 0x17e668u: goto label_17e668;
        case 0x17e66cu: goto label_17e66c;
        case 0x17e670u: goto label_17e670;
        case 0x17e674u: goto label_17e674;
        case 0x17e678u: goto label_17e678;
        case 0x17e67cu: goto label_17e67c;
        case 0x17e680u: goto label_17e680;
        case 0x17e684u: goto label_17e684;
        case 0x17e688u: goto label_17e688;
        case 0x17e68cu: goto label_17e68c;
        case 0x17e690u: goto label_17e690;
        case 0x17e694u: goto label_17e694;
        case 0x17e698u: goto label_17e698;
        case 0x17e69cu: goto label_17e69c;
        case 0x17e6a0u: goto label_17e6a0;
        case 0x17e6a4u: goto label_17e6a4;
        case 0x17e6a8u: goto label_17e6a8;
        case 0x17e6acu: goto label_17e6ac;
        case 0x17e6b0u: goto label_17e6b0;
        case 0x17e6b4u: goto label_17e6b4;
        case 0x17e6b8u: goto label_17e6b8;
        case 0x17e6bcu: goto label_17e6bc;
        case 0x17e6c0u: goto label_17e6c0;
        case 0x17e6c4u: goto label_17e6c4;
        case 0x17e6c8u: goto label_17e6c8;
        case 0x17e6ccu: goto label_17e6cc;
        case 0x17e6d0u: goto label_17e6d0;
        case 0x17e6d4u: goto label_17e6d4;
        case 0x17e6d8u: goto label_17e6d8;
        case 0x17e6dcu: goto label_17e6dc;
        case 0x17e6e0u: goto label_17e6e0;
        case 0x17e6e4u: goto label_17e6e4;
        case 0x17e6e8u: goto label_17e6e8;
        case 0x17e6ecu: goto label_17e6ec;
        default: break;
    }

    ctx->pc = 0x17e5d0u;

label_17e5d0:
    // 0x17e5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17e5d4:
    // 0x17e5d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17e5d8:
    // 0x17e5d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17e5dc:
    // 0x17e5dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17e5e0:
    // 0x17e5e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17e5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17e5e4:
    // 0x17e5e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17e5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17e5e8:
    // 0x17e5e8: 0x8c861020  lw          $a2, 0x1020($a0)
    ctx->pc = 0x17e5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4128)));
label_17e5ec:
    // 0x17e5ec: 0x8c871024  lw          $a3, 0x1024($a0)
    ctx->pc = 0x17e5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4132)));
label_17e5f0:
    // 0x17e5f0: 0xc05fb00  jal         func_17EC00
label_17e5f4:
    if (ctx->pc == 0x17E5F4u) {
        ctx->pc = 0x17E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5F0u;
        // 0x17e5f4: 0x8c85101c  lw          $a1, 0x101C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5F8u;
        goto label_17e5f8;
    }
    ctx->pc = 0x17E5F0u;
    SET_GPR_U32(ctx, 31, 0x17E5F8u);
    ctx->pc = 0x17E5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E5F0u;
    // 0x17e5f4: 0x8c85101c  lw          $a1, 0x101C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17E5F0u, 0x17E5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E5F8u;
label_17e5f8:
    // 0x17e5f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17e5fc:
    if (ctx->pc == 0x17E5FCu) {
        ctx->pc = 0x17E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5F8u;
        // 0x17e5fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E600u;
        goto label_17e600;
    }
    ctx->pc = 0x17E5F8u;
    {
        const bool branch_taken_0x17e5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5F8u;
        // 0x17e5fc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5f8) {
            ctx->pc = 0x17E608u;
            goto label_17e608;
        }
    }
    ctx->pc = 0x17E600u;
label_17e600:
    // 0x17e600: 0x10000036  b           . + 4 + (0x36 << 2)
label_17e604:
    if (ctx->pc == 0x17E604u) {
        ctx->pc = 0x17E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E600u;
        // 0x17e604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E608u;
        goto label_17e608;
    }
    ctx->pc = 0x17E600u;
    {
        const bool branch_taken_0x17e600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E600u;
        // 0x17e604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e600) {
            ctx->pc = 0x17E6DCu;
            goto label_17e6dc;
        }
    }
    ctx->pc = 0x17E608u;
label_17e608:
    // 0x17e608: 0x1223001a  beq         $s1, $v1, . + 4 + (0x1A << 2)
label_17e60c:
    if (ctx->pc == 0x17E60Cu) {
        ctx->pc = 0x17E610u;
        goto label_17e610;
    }
    ctx->pc = 0x17E608u;
    {
        const bool branch_taken_0x17e608 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e608) {
            ctx->pc = 0x17E674u;
            goto label_17e674;
        }
    }
    ctx->pc = 0x17E610u;
label_17e610:
    // 0x17e610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e614:
    // 0x17e614: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
label_17e618:
    if (ctx->pc == 0x17E618u) {
        ctx->pc = 0x17E61Cu;
        goto label_17e61c;
    }
    ctx->pc = 0x17E614u;
    {
        const bool branch_taken_0x17e614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e614) {
            ctx->pc = 0x17E650u;
            goto label_17e650;
        }
    }
    ctx->pc = 0x17E61Cu;
label_17e61c:
    // 0x17e61c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_17e620:
    if (ctx->pc == 0x17E620u) {
        ctx->pc = 0x17E624u;
        goto label_17e624;
    }
    ctx->pc = 0x17E61Cu;
    {
        const bool branch_taken_0x17e61c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e61c) {
            ctx->pc = 0x17E62Cu;
            goto label_17e62c;
        }
    }
    ctx->pc = 0x17E624u;
label_17e624:
    // 0x17e624: 0x1000002d  b           . + 4 + (0x2D << 2)
label_17e628:
    if (ctx->pc == 0x17E628u) {
        ctx->pc = 0x17E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E624u;
        // 0x17e628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E62Cu;
        goto label_17e62c;
    }
    ctx->pc = 0x17E624u;
    {
        const bool branch_taken_0x17e624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E624u;
        // 0x17e628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e624) {
            ctx->pc = 0x17E6DCu;
            goto label_17e6dc;
        }
    }
    ctx->pc = 0x17E62Cu;
label_17e62c:
    // 0x17e62c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17e630:
    // 0x17e630: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17e634:
    if (ctx->pc == 0x17E634u) {
        ctx->pc = 0x17E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E630u;
        // 0x17e634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E638u;
        goto label_17e638;
    }
    ctx->pc = 0x17E630u;
    {
        const bool branch_taken_0x17e630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E630u;
        // 0x17e634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e630) {
            ctx->pc = 0x17E640u;
            goto label_17e640;
        }
    }
    ctx->pc = 0x17E638u;
label_17e638:
    // 0x17e638: 0x10000003  b           . + 4 + (0x3 << 2)
label_17e63c:
    if (ctx->pc == 0x17E63Cu) {
        ctx->pc = 0x17E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E638u;
        // 0x17e63c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E640u;
        goto label_17e640;
    }
    ctx->pc = 0x17E638u;
    {
        const bool branch_taken_0x17e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E638u;
        // 0x17e63c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e638) {
            ctx->pc = 0x17E648u;
            goto label_17e648;
        }
    }
    ctx->pc = 0x17E640u;
label_17e640:
    // 0x17e640: 0xc05f540  jal         func_17D500
label_17e644:
    if (ctx->pc == 0x17E644u) {
        ctx->pc = 0x17E648u;
        goto label_17e648;
    }
    ctx->pc = 0x17E640u;
    SET_GPR_U32(ctx, 31, 0x17E648u);
    ctx->pc = 0x17D500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D500u, 0x17E640u, 0x17E648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E648u;
label_17e648:
    // 0x17e648: 0x10000025  b           . + 4 + (0x25 << 2)
label_17e64c:
    if (ctx->pc == 0x17E64Cu) {
        ctx->pc = 0x17E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E648u;
        // 0x17e64c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E650u;
        goto label_17e650;
    }
    ctx->pc = 0x17E648u;
    {
        const bool branch_taken_0x17e648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E648u;
        // 0x17e64c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e648) {
            ctx->pc = 0x17E6E0u;
            goto label_17e6e0;
        }
    }
    ctx->pc = 0x17E650u;
label_17e650:
    // 0x17e650: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17e654:
    // 0x17e654: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17e658:
    if (ctx->pc == 0x17E658u) {
        ctx->pc = 0x17E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E654u;
        // 0x17e658: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E65Cu;
        goto label_17e65c;
    }
    ctx->pc = 0x17E654u;
    {
        const bool branch_taken_0x17e654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E654u;
        // 0x17e658: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e654) {
            ctx->pc = 0x17E664u;
            goto label_17e664;
        }
    }
    ctx->pc = 0x17E65Cu;
label_17e65c:
    // 0x17e65c: 0x10000003  b           . + 4 + (0x3 << 2)
label_17e660:
    if (ctx->pc == 0x17E660u) {
        ctx->pc = 0x17E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E65Cu;
        // 0x17e660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E664u;
        goto label_17e664;
    }
    ctx->pc = 0x17E65Cu;
    {
        const bool branch_taken_0x17e65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E65Cu;
        // 0x17e660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e65c) {
            ctx->pc = 0x17E66Cu;
            goto label_17e66c;
        }
    }
    ctx->pc = 0x17E664u;
label_17e664:
    // 0x17e664: 0xc05f558  jal         func_17D560
label_17e668:
    if (ctx->pc == 0x17E668u) {
        ctx->pc = 0x17E66Cu;
        goto label_17e66c;
    }
    ctx->pc = 0x17E664u;
    SET_GPR_U32(ctx, 31, 0x17E66Cu);
    ctx->pc = 0x17D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D560u, 0x17E664u, 0x17E66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E66Cu;
label_17e66c:
    // 0x17e66c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_17e670:
    if (ctx->pc == 0x17E670u) {
        ctx->pc = 0x17E674u;
        goto label_17e674;
    }
    ctx->pc = 0x17E66Cu;
    {
        const bool branch_taken_0x17e66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e66c) {
            ctx->pc = 0x17E6DCu;
            goto label_17e6dc;
        }
    }
    ctx->pc = 0x17E674u;
label_17e674:
    // 0x17e674: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17e678:
    // 0x17e678: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17e67c:
    if (ctx->pc == 0x17E67Cu) {
        ctx->pc = 0x17E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E678u;
        // 0x17e67c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E680u;
        goto label_17e680;
    }
    ctx->pc = 0x17E678u;
    {
        const bool branch_taken_0x17e678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E678u;
        // 0x17e67c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e678) {
            ctx->pc = 0x17E688u;
            goto label_17e688;
        }
    }
    ctx->pc = 0x17E680u;
label_17e680:
    // 0x17e680: 0x10000016  b           . + 4 + (0x16 << 2)
label_17e684:
    if (ctx->pc == 0x17E684u) {
        ctx->pc = 0x17E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E680u;
        // 0x17e684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E688u;
        goto label_17e688;
    }
    ctx->pc = 0x17E680u;
    {
        const bool branch_taken_0x17e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E680u;
        // 0x17e684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e680) {
            ctx->pc = 0x17E6DCu;
            goto label_17e6dc;
        }
    }
    ctx->pc = 0x17E688u;
label_17e688:
    // 0x17e688: 0xc051198  jal         func_144660
label_17e68c:
    if (ctx->pc == 0x17E68Cu) {
        ctx->pc = 0x17E690u;
        goto label_17e690;
    }
    ctx->pc = 0x17E688u;
    SET_GPR_U32(ctx, 31, 0x17E690u);
    ctx->pc = 0x144660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144660u, 0x17E688u, 0x17E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E690u;
label_17e690:
    // 0x17e690: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e694:
    // 0x17e694: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_17e698:
    if (ctx->pc == 0x17E698u) {
        ctx->pc = 0x17E69Cu;
        goto label_17e69c;
    }
    ctx->pc = 0x17E694u;
    {
        const bool branch_taken_0x17e694 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e694) {
            ctx->pc = 0x17E6A4u;
            goto label_17e6a4;
        }
    }
    ctx->pc = 0x17E69Cu;
label_17e69c:
    // 0x17e69c: 0x1000000f  b           . + 4 + (0xF << 2)
label_17e6a0:
    if (ctx->pc == 0x17E6A0u) {
        ctx->pc = 0x17E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E69Cu;
        // 0x17e6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E6A4u;
        goto label_17e6a4;
    }
    ctx->pc = 0x17E69Cu;
    {
        const bool branch_taken_0x17e69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E69Cu;
        // 0x17e6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e69c) {
            ctx->pc = 0x17E6DCu;
            goto label_17e6dc;
        }
    }
    ctx->pc = 0x17E6A4u;
label_17e6a4:
    // 0x17e6a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e6a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e6a8:
    // 0x17e6a8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x17e6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_17e6ac:
    // 0x17e6ac: 0x320f809  jalr        $t9
label_17e6b0:
    if (ctx->pc == 0x17E6B0u) {
        ctx->pc = 0x17E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6ACu;
        // 0x17e6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E6B4u;
        goto label_17e6b4;
    }
    ctx->pc = 0x17E6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E6B4u);
        ctx->pc = 0x17E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6ACu;
        // 0x17e6b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E6ACu, 0x17E6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E6B4u;
label_17e6b4:
    // 0x17e6b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_17e6b8:
    if (ctx->pc == 0x17E6B8u) {
        ctx->pc = 0x17E6BCu;
        goto label_17e6bc;
    }
    ctx->pc = 0x17E6B4u;
    {
        const bool branch_taken_0x17e6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e6b4) {
            ctx->pc = 0x17E6D8u;
            goto label_17e6d8;
        }
    }
    ctx->pc = 0x17E6BCu;
label_17e6bc:
    // 0x17e6bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e6c0:
    // 0x17e6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e6c4:
    // 0x17e6c4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x17e6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_17e6c8:
    // 0x17e6c8: 0x320f809  jalr        $t9
label_17e6cc:
    if (ctx->pc == 0x17E6CCu) {
        ctx->pc = 0x17E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6C8u;
        // 0x17e6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E6D0u;
        goto label_17e6d0;
    }
    ctx->pc = 0x17E6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E6D0u);
        ctx->pc = 0x17E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6C8u;
        // 0x17e6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E6C8u, 0x17E6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E6D0u;
label_17e6d0:
    // 0x17e6d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e6d4:
    if (ctx->pc == 0x17E6D4u) {
        ctx->pc = 0x17E6D8u;
        goto label_17e6d8;
    }
    ctx->pc = 0x17E6D0u;
    {
        const bool branch_taken_0x17e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e6d0) {
            ctx->pc = 0x17E6DCu;
            goto label_17e6dc;
        }
    }
    ctx->pc = 0x17E6D8u;
label_17e6d8:
    // 0x17e6d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e6dc:
    // 0x17e6dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17e6e0:
    // 0x17e6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e6e4:
    // 0x17e6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17e6e8:
    // 0x17e6e8: 0x3e00008  jr          $ra
label_17e6ec:
    if (ctx->pc == 0x17E6ECu) {
        ctx->pc = 0x17E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6E8u;
        // 0x17e6ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E6F0u;
        goto label_fallthrough_0x17e6e8;
    }
    ctx->pc = 0x17E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E6E8u;
        // 0x17e6ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17e6e8:
    ctx->pc = 0x17E6F0u;
}
