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

// Function: entry_001ea324
// Address: 0x1ea324 - 0x1ea33c
void entry_001ea324_0x1ea324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea324_0x1ea324");
#endif

    switch (ctx->pc) {
        case 0x1ea334u: goto label_1ea334;
        default: break;
    }

    ctx->pc = 0x1ea324u;

label_1ea324:
    // 0x1ea324: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1ea324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1ea328:
    // 0x1ea328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea32c:
    // 0x1ea32c: 0xc0f809  jalr        $a2
label_1ea330:
    if (ctx->pc == 0x1EA330u) {
        ctx->pc = 0x1EA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA32Cu;
        // 0x1ea330: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA334u;
        goto label_1ea334;
    }
    ctx->pc = 0x1EA32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1EA334u);
        ctx->pc = 0x1EA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA32Cu;
        // 0x1ea330: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA32Cu, 0x1EA334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EA334u;
label_1ea334:
    // 0x1ea334: 0x1000012a  b           . + 4 + (0x12A << 2)
label_1ea338:
    if (ctx->pc == 0x1EA338u) {
        ctx->pc = 0x1EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA334u;
        // 0x1ea338: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA33Cu;
        goto label_fallthrough_0x1ea334;
    }
    ctx->pc = 0x1EA334u;
    {
        const bool branch_taken_0x1ea334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA334u;
        // 0x1ea338: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea334) {
            ctx->pc = 0x1EA7E0u;
            return;
        }
    }
label_fallthrough_0x1ea334:
    ctx->pc = 0x1EA33Cu;
}
