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

// Function: entry_00135610
// Address: 0x135610 - 0x13563c
void entry_00135610_0x135610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135610_0x135610");
#endif

    switch (ctx->pc) {
        case 0x13562cu: goto label_13562c;
        default: break;
    }

    ctx->pc = 0x135610u;

label_135610:
    // 0x135610: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x135610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_135614:
    // 0x135614: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x135614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135618:
    // 0x135618: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13561c:
    // 0x13561c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13561cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_135620:
    // 0x135620: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x135620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_135624:
    // 0x135624: 0x320f809  jalr        $t9
label_135628:
    if (ctx->pc == 0x135628u) {
        ctx->pc = 0x135628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135624u;
        // 0x135628: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13562Cu;
        goto label_13562c;
    }
    ctx->pc = 0x135624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13562Cu);
        ctx->pc = 0x135628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135624u;
        // 0x135628: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135624u, 0x13562Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13562Cu;
label_13562c:
    // 0x13562c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_135630:
    if (ctx->pc == 0x135630u) {
        ctx->pc = 0x135634u;
        goto label_135634;
    }
    ctx->pc = 0x13562Cu;
    {
        const bool branch_taken_0x13562c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13562c) {
            ctx->pc = 0x13563Cu;
            return;
        }
    }
    ctx->pc = 0x135634u;
label_135634:
    // 0x135634: 0x1000000a  b           . + 4 + (0xA << 2)
label_135638:
    if (ctx->pc == 0x135638u) {
        ctx->pc = 0x135638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135634u;
        // 0x135638: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13563Cu;
        goto label_fallthrough_0x135634;
    }
    ctx->pc = 0x135634u;
    {
        const bool branch_taken_0x135634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135634u;
        // 0x135638: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135634) {
            ctx->pc = 0x135660u;
            return;
        }
    }
label_fallthrough_0x135634:
    ctx->pc = 0x13563Cu;
}
