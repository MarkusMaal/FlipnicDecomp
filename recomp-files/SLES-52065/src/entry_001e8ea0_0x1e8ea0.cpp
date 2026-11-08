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

// Function: entry_001e8ea0
// Address: 0x1e8ea0 - 0x1e8ec0
void entry_001e8ea0_0x1e8ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8ea0_0x1e8ea0");
#endif

    switch (ctx->pc) {
        case 0x1e8eb0u: goto label_1e8eb0;
        default: break;
    }

    ctx->pc = 0x1e8ea0u;

label_1e8ea0:
    // 0x1e8ea0: 0x2b4a823  subu        $s5, $s5, $s4
    ctx->pc = 0x1e8ea0u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_1e8ea4:
    // 0x1e8ea4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e8ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e8ea8:
    // 0x1e8ea8: 0x200f809  jalr        $s0
label_1e8eac:
    if (ctx->pc == 0x1E8EACu) {
        ctx->pc = 0x1E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EA8u;
        // 0x1e8eac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8EB0u;
        goto label_1e8eb0;
    }
    ctx->pc = 0x1E8EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1E8EB0u);
        ctx->pc = 0x1E8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8EA8u;
        // 0x1e8eac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8EA8u, 0x1E8EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8EB0u;
label_1e8eb0:
    // 0x1e8eb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e8eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e8eb4:
    // 0x1e8eb4: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x1e8eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1e8eb8:
    // 0x1e8eb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1e8ebc:
    if (ctx->pc == 0x1E8EBCu) {
        ctx->pc = 0x1E8EC0u;
        goto label_fallthrough_0x1e8eb8;
    }
    ctx->pc = 0x1E8EB8u;
    {
        const bool branch_taken_0x1e8eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8eb8) {
            ctx->pc = 0x1E8EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8ea0;
        }
    }
label_fallthrough_0x1e8eb8:
    ctx->pc = 0x1E8EC0u;
}
