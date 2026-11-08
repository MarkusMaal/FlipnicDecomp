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

// Function: entry_001e9114
// Address: 0x1e9114 - 0x1e9130
void entry_001e9114_0x1e9114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9114_0x1e9114");
#endif

    switch (ctx->pc) {
        case 0x1e9120u: goto label_1e9120;
        default: break;
    }

    ctx->pc = 0x1e9114u;

label_1e9114:
    // 0x1e9114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9118:
    // 0x1e9118: 0x2a0f809  jalr        $s5
label_1e911c:
    if (ctx->pc == 0x1E911Cu) {
        ctx->pc = 0x1E911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9118u;
        // 0x1e911c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9120u;
        goto label_1e9120;
    }
    ctx->pc = 0x1E9118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x1E9120u);
        ctx->pc = 0x1E911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9118u;
        // 0x1e911c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9118u, 0x1E9120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9120u;
label_1e9120:
    // 0x1e9120: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e9124:
    // 0x1e9124: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1e9124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1e9128:
    // 0x1e9128: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e9128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e912c:
    // 0x1e912c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e912cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1e9130u;
}
