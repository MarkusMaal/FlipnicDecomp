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

// Function: entry_001ea610
// Address: 0x1ea610 - 0x1ea620
void entry_001ea610_0x1ea610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea610_0x1ea610");
#endif

    switch (ctx->pc) {
        case 0x1ea618u: goto label_1ea618;
        default: break;
    }

    ctx->pc = 0x1ea610u;

label_1ea610:
    // 0x1ea610: 0xa0f809  jalr        $a1
label_1ea614:
    if (ctx->pc == 0x1EA614u) {
        ctx->pc = 0x1EA618u;
        goto label_1ea618;
    }
    ctx->pc = 0x1EA610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1EA618u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA610u, 0x1EA618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA618u;
label_1ea618:
    // 0x1ea618: 0x10000071  b           . + 4 + (0x71 << 2)
label_1ea61c:
    if (ctx->pc == 0x1EA61Cu) {
        ctx->pc = 0x1EA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA618u;
        // 0x1ea61c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA620u;
        goto label_fallthrough_0x1ea618;
    }
    ctx->pc = 0x1EA618u;
    {
        const bool branch_taken_0x1ea618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA618u;
        // 0x1ea61c: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea618) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
label_fallthrough_0x1ea618:
    ctx->pc = 0x1EA620u;
}
