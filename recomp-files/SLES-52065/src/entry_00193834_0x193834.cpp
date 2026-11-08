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

// Function: entry_00193834
// Address: 0x193834 - 0x19387c
void entry_00193834_0x193834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193834_0x193834");
#endif

    switch (ctx->pc) {
        case 0x193860u: goto label_193860;
        case 0x193874u: goto label_193874;
        default: break;
    }

    ctx->pc = 0x193834u;

label_193834:
    // 0x193834: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x193834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_193838:
    // 0x193838: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x193838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_19383c:
    // 0x19383c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19383cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193840:
    // 0x193840: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x193840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_193844:
    // 0x193844: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193848:
    // 0x193848: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x193848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_19384c:
    // 0x19384c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x19384cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_193850:
    // 0x193850: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x193850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_193854:
    // 0x193854: 0x8f3900e4  lw          $t9, 0xE4($t9)
    ctx->pc = 0x193854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 228)));
label_193858:
    // 0x193858: 0x320f809  jalr        $t9
label_19385c:
    if (ctx->pc == 0x19385Cu) {
        ctx->pc = 0x19385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193858u;
        // 0x19385c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193860u;
        goto label_193860;
    }
    ctx->pc = 0x193858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193860u);
        ctx->pc = 0x19385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193858u;
        // 0x19385c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193858u, 0x193860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193860u;
label_193860:
    // 0x193860: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x193860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_193864:
    // 0x193864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193868:
    // 0x193868: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x193868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19386c:
    // 0x19386c: 0x320f809  jalr        $t9
label_193870:
    if (ctx->pc == 0x193870u) {
        ctx->pc = 0x193870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19386Cu;
        // 0x193870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193874u;
        goto label_193874;
    }
    ctx->pc = 0x19386Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193874u);
        ctx->pc = 0x193870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19386Cu;
        // 0x193870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19386Cu, 0x193874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193874u;
label_193874:
    // 0x193874: 0x1000009d  b           . + 4 + (0x9D << 2)
label_193878:
    if (ctx->pc == 0x193878u) {
        ctx->pc = 0x19387Cu;
        goto label_fallthrough_0x193874;
    }
    ctx->pc = 0x193874u;
    {
        const bool branch_taken_0x193874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193874) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
label_fallthrough_0x193874:
    ctx->pc = 0x19387Cu;
}
