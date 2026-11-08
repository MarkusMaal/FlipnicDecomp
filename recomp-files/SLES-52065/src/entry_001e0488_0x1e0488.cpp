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

// Function: entry_001e0488
// Address: 0x1e0488 - 0x1e04a8
void entry_001e0488_0x1e0488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0488_0x1e0488");
#endif

    ctx->pc = 0x1e0488u;

label_1e0488:
    // 0x1e0488: 0x8c43a308  lw          $v1, -0x5CF8($v0)
    ctx->pc = 0x1e0488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943496)));
label_1e048c:
    // 0x1e048c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1e0490:
    if (ctx->pc == 0x1E0490u) {
        ctx->pc = 0x1E0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E048Cu;
        // 0x1e0490: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0494u;
        goto label_1e0494;
    }
    ctx->pc = 0x1E048Cu;
    {
        const bool branch_taken_0x1e048c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E048Cu;
        // 0x1e0490: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e048c) {
            ctx->pc = 0x1E04A8u;
            return;
        }
    }
    ctx->pc = 0x1E0494u;
label_1e0494:
    // 0x1e0494: 0x92050068  lbu         $a1, 0x68($s0)
    ctx->pc = 0x1e0494u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
label_1e0498:
    // 0x1e0498: 0x9044a300  lbu         $a0, -0x5D00($v0)
    ctx->pc = 0x1e0498u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943488)));
label_1e049c:
    // 0x1e049c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e049cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e04a0:
    // 0x1e04a0: 0x60f809  jalr        $v1
label_1e04a4:
    if (ctx->pc == 0x1E04A4u) {
        ctx->pc = 0x1E04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04A0u;
        // 0x1e04a4: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E04A8u;
        goto label_fallthrough_0x1e04a0;
    }
    ctx->pc = 0x1E04A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E04A8u);
        ctx->pc = 0x1E04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04A0u;
        // 0x1e04a4: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E04A0u, 0x1E04A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1e04a0:
    ctx->pc = 0x1E04A8u;
}
