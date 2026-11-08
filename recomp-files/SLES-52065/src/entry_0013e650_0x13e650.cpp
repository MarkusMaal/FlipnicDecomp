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

// Function: entry_0013e650
// Address: 0x13e650 - 0x13e6a8
void entry_0013e650_0x13e650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e650_0x13e650");
#endif

    switch (ctx->pc) {
        case 0x13e67cu: goto label_13e67c;
        case 0x13e698u: goto label_13e698;
        default: break;
    }

    ctx->pc = 0x13e650u;

label_13e650:
    // 0x13e650: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x13e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
label_13e654:
    // 0x13e654: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_13e658:
    if (ctx->pc == 0x13E658u) {
        ctx->pc = 0x13E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E654u;
        // 0x13e658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E65Cu;
        goto label_13e65c;
    }
    ctx->pc = 0x13E654u;
    {
        const bool branch_taken_0x13e654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E654u;
        // 0x13e658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e654) {
            ctx->pc = 0x13E6B4u;
            return;
        }
    }
    ctx->pc = 0x13E65Cu;
label_13e65c:
    // 0x13e65c: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x13e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_13e660:
    // 0x13e660: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13e660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13e664:
    // 0x13e664: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_13e668:
    if (ctx->pc == 0x13E668u) {
        ctx->pc = 0x13E66Cu;
        goto label_13e66c;
    }
    ctx->pc = 0x13E664u;
    {
        const bool branch_taken_0x13e664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e664) {
            ctx->pc = 0x13E6B0u;
            return;
        }
    }
    ctx->pc = 0x13E66Cu;
label_13e66c:
    // 0x13e66c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e66cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e670:
    // 0x13e670: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x13e670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_13e674:
    // 0x13e674: 0x320f809  jalr        $t9
label_13e678:
    if (ctx->pc == 0x13E678u) {
        ctx->pc = 0x13E67Cu;
        goto label_13e67c;
    }
    ctx->pc = 0x13E674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E67Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E674u, 0x13E67Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E67Cu;
label_13e67c:
    // 0x13e67c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e680:
    // 0x13e680: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_13e684:
    if (ctx->pc == 0x13E684u) {
        ctx->pc = 0x13E688u;
        goto label_13e688;
    }
    ctx->pc = 0x13E680u;
    {
        const bool branch_taken_0x13e680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13e680) {
            ctx->pc = 0x13E6A8u;
            return;
        }
    }
    ctx->pc = 0x13E688u;
label_13e688:
    // 0x13e688: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x13e688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13e68c:
    // 0x13e68c: 0x8f3900f4  lw          $t9, 0xF4($t9)
    ctx->pc = 0x13e68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 244)));
label_13e690:
    // 0x13e690: 0x320f809  jalr        $t9
label_13e694:
    if (ctx->pc == 0x13E694u) {
        ctx->pc = 0x13E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E690u;
        // 0x13e694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E698u;
        goto label_13e698;
    }
    ctx->pc = 0x13E690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E698u);
        ctx->pc = 0x13E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E690u;
        // 0x13e694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E690u, 0x13E698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E698u;
label_13e698:
    // 0x13e698: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13e69c:
    if (ctx->pc == 0x13E69Cu) {
        ctx->pc = 0x13E6A0u;
        goto label_13e6a0;
    }
    ctx->pc = 0x13E698u;
    {
        const bool branch_taken_0x13e698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e698) {
            ctx->pc = 0x13E6A8u;
            return;
        }
    }
    ctx->pc = 0x13E6A0u;
label_13e6a0:
    // 0x13e6a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_13e6a4:
    if (ctx->pc == 0x13E6A4u) {
        ctx->pc = 0x13E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6A0u;
        // 0x13e6a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E6A8u;
        goto label_fallthrough_0x13e6a0;
    }
    ctx->pc = 0x13E6A0u;
    {
        const bool branch_taken_0x13e6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6A0u;
        // 0x13e6a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e6a0) {
            ctx->pc = 0x13E6B4u;
            return;
        }
    }
label_fallthrough_0x13e6a0:
    ctx->pc = 0x13E6A8u;
}
