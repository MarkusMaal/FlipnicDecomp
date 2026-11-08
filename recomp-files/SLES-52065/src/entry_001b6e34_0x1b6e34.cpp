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

// Function: entry_001b6e34
// Address: 0x1b6e34 - 0x1b6e58
void entry_001b6e34_0x1b6e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6e34_0x1b6e34");
#endif

    switch (ctx->pc) {
        case 0x1b6e40u: goto label_1b6e40;
        default: break;
    }

    ctx->pc = 0x1b6e34u;

    // 0x1b6e34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b6e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e38: 0xc06dba8  jal         func_1B6EA0
    ctx->pc = 0x1B6E38u;
    SET_GPR_U32(ctx, 31, 0x1B6E40u);
    ctx->pc = 0x1B6E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E38u;
    // 0x1b6e3c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6EA0u, 0x1B6E38u, 0x1B6E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E40u;
label_1b6e40:
    // 0x1b6e40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1b6e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1b6e44: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1b6e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1b6e48: 0x90232eb8  lbu         $v1, 0x2EB8($at)
    ctx->pc = 0x1b6e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x212EB8u));
    // 0x1b6e4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6E50u;
    {
        const bool branch_taken_0x1b6e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E50u;
        // 0x1b6e54: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e50) {
            ctx->pc = 0x1B6E6Cu;
            return;
        }
    }
    ctx->pc = 0x1B6E58u;
}
