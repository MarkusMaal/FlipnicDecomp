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

// Function: entry_001e84a4
// Address: 0x1e84a4 - 0x1e84d4
void entry_001e84a4_0x1e84a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e84a4_0x1e84a4");
#endif

    switch (ctx->pc) {
        case 0x1e84b0u: goto label_1e84b0;
        default: break;
    }

    ctx->pc = 0x1e84a4u;

    // 0x1e84a4: 0x0  nop
    ctx->pc = 0x1e84a4u;
    // NOP
    // 0x1e84a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E84A8u;
    SET_GPR_U32(ctx, 31, 0x1E84B0u);
    ctx->pc = 0x1E84ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E84A8u;
    // 0x1e84ac: 0x1420c0  sll         $a0, $s4, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E84A8u, 0x1E84B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E84B0u;
label_1e84b0:
    // 0x1e84b0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1e84b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1e84b4: 0xafd40178  sw          $s4, 0x178($fp)
    ctx->pc = 0x1e84b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 20));
    // 0x1e84b8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e84bc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1e84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e84c0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e84c4: 0xb2082b  sltu        $at, $a1, $s2
    ctx->pc = 0x1e84c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e84c8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1e84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1e84cc: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E84CCu;
    {
        const bool branch_taken_0x1e84cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E84CCu;
        // 0x1e84d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e84cc) {
            ctx->pc = 0x1E8524u;
            return;
        }
    }
    ctx->pc = 0x1E84D4u;
}
