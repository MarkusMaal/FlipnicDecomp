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

// Function: entry_001ed618
// Address: 0x1ed618 - 0x1ed630
void entry_001ed618_0x1ed618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed618_0x1ed618");
#endif

    switch (ctx->pc) {
        case 0x1ed628u: goto label_1ed628;
        default: break;
    }

    ctx->pc = 0x1ed618u;

label_1ed618:
    // 0x1ed618: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ed618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1ed61c:
    // 0x1ed61c: 0x8c43a3c4  lw          $v1, -0x5C3C($v0)
    ctx->pc = 0x1ed61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943684)));
label_1ed620:
    // 0x1ed620: 0x60f809  jalr        $v1
label_1ed624:
    if (ctx->pc == 0x1ED624u) {
        ctx->pc = 0x1ED624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED620u;
        // 0x1ed624: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED628u;
        goto label_1ed628;
    }
    ctx->pc = 0x1ED620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ED628u);
        ctx->pc = 0x1ED624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED620u;
        // 0x1ed624: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED620u, 0x1ED628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED628u;
label_1ed628:
    // 0x1ed628: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ed62c:
    if (ctx->pc == 0x1ED62Cu) {
        ctx->pc = 0x1ED62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED628u;
        // 0x1ed62c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED630u;
        goto label_fallthrough_0x1ed628;
    }
    ctx->pc = 0x1ED628u;
    {
        const bool branch_taken_0x1ed628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED628u;
        // 0x1ed62c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed628) {
            ctx->pc = 0x1ED640u;
            return;
        }
    }
label_fallthrough_0x1ed628:
    ctx->pc = 0x1ED630u;
}
