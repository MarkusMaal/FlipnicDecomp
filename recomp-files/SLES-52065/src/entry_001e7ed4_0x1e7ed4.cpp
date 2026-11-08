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

// Function: entry_001e7ed4
// Address: 0x1e7ed4 - 0x1e7f14
void entry_001e7ed4_0x1e7ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7ed4_0x1e7ed4");
#endif

    switch (ctx->pc) {
        case 0x1e7ee8u: goto label_1e7ee8;
        default: break;
    }

    ctx->pc = 0x1e7ed4u;

    // 0x1e7ed4: 0x0  nop
    ctx->pc = 0x1e7ed4u;
    // NOP
    // 0x1e7ed8: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1e7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1e7edc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1e7ee0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E7EE0u;
    SET_GPR_U32(ctx, 31, 0x1E7EE8u);
    ctx->pc = 0x1E7EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7EE0u;
    // 0x1e7ee4: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E7EE0u, 0x1E7EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7EE8u;
label_1e7ee8:
    // 0x1e7ee8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1e7ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1e7eec: 0xafd40178  sw          $s4, 0x178($fp)
    ctx->pc = 0x1e7eecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 376), GPR_U32(ctx, 20));
    // 0x1e7ef0: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1e7ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1e7ef4: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e7ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e7ef8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1e7ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1e7efc: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1e7efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e7f00: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1e7f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1e7f04: 0xb2082b  sltu        $at, $a1, $s2
    ctx->pc = 0x1e7f04u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e7f08: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1e7f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e7f0c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7F0Cu;
    {
        const bool branch_taken_0x1e7f0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F0Cu;
        // 0x1e7f10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f0c) {
            ctx->pc = 0x1E7F5Cu;
            return;
        }
    }
    ctx->pc = 0x1E7F14u;
}
