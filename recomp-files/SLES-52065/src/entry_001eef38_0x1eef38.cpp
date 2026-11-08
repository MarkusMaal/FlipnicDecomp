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

// Function: entry_001eef38
// Address: 0x1eef38 - 0x1eef54
void entry_001eef38_0x1eef38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eef38_0x1eef38");
#endif

    switch (ctx->pc) {
        case 0x1eef4cu: goto label_1eef4c;
        default: break;
    }

    ctx->pc = 0x1eef38u;

    // 0x1eef38: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEF38u;
    {
        const bool branch_taken_0x1eef38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef38) {
            ctx->pc = 0x1EEF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EEF38u;
            // 0x1eef3c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EEF54u;
            return;
        }
    }
    ctx->pc = 0x1EEF40u;
    // 0x1eef40: 0x8e24a468  lw          $a0, -0x5B98($s1)
    ctx->pc = 0x1eef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943848)));
    // 0x1eef44: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1EEF44u;
    SET_GPR_U32(ctx, 31, 0x1EEF4Cu);
    ctx->pc = 0x1EEF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEF44u;
    // 0x1eef48: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1EEF44u, 0x1EEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF4Cu;
label_1eef4c:
    // 0x1eef4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEF4Cu;
    {
        const bool branch_taken_0x1eef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EEF4Cu;
        // 0x1eef50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eef4c) {
            ctx->pc = 0x1EEF6Cu;
            return;
        }
    }
    ctx->pc = 0x1EEF54u;
}
