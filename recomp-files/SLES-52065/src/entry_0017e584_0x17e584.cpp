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

// Function: entry_0017e584
// Address: 0x17e584 - 0x17e5b8
void entry_0017e584_0x17e584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e584_0x17e584");
#endif

    switch (ctx->pc) {
        case 0x17e594u: goto label_17e594;
        case 0x17e5b0u: goto label_17e5b0;
        default: break;
    }

    ctx->pc = 0x17e584u;

label_17e584:
    // 0x17e584: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e588:
    // 0x17e588: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x17e588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_17e58c:
    // 0x17e58c: 0x320f809  jalr        $t9
label_17e590:
    if (ctx->pc == 0x17E590u) {
        ctx->pc = 0x17E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E58Cu;
        // 0x17e590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E594u;
        goto label_17e594;
    }
    ctx->pc = 0x17E58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E594u);
        ctx->pc = 0x17E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E58Cu;
        // 0x17e590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E58Cu, 0x17E594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E594u;
label_17e594:
    // 0x17e594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_17e598:
    if (ctx->pc == 0x17E598u) {
        ctx->pc = 0x17E59Cu;
        goto label_17e59c;
    }
    ctx->pc = 0x17E594u;
    {
        const bool branch_taken_0x17e594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e594) {
            ctx->pc = 0x17E5B8u;
            return;
        }
    }
    ctx->pc = 0x17E59Cu;
label_17e59c:
    // 0x17e59c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e59cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e5a0:
    // 0x17e5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e5a4:
    // 0x17e5a4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x17e5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_17e5a8:
    // 0x17e5a8: 0x320f809  jalr        $t9
label_17e5ac:
    if (ctx->pc == 0x17E5ACu) {
        ctx->pc = 0x17E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5A8u;
        // 0x17e5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5B0u;
        goto label_17e5b0;
    }
    ctx->pc = 0x17E5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E5B0u);
        ctx->pc = 0x17E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5A8u;
        // 0x17e5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E5A8u, 0x17E5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E5B0u;
label_17e5b0:
    // 0x17e5b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e5b4:
    if (ctx->pc == 0x17E5B4u) {
        ctx->pc = 0x17E5B8u;
        goto label_fallthrough_0x17e5b0;
    }
    ctx->pc = 0x17E5B0u;
    {
        const bool branch_taken_0x17e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e5b0) {
            ctx->pc = 0x17E5BCu;
            return;
        }
    }
label_fallthrough_0x17e5b0:
    ctx->pc = 0x17E5B8u;
}
