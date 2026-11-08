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

// Function: entry_001235f4
// Address: 0x1235f4 - 0x123624
void entry_001235f4_0x1235f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001235f4_0x1235f4");
#endif

    switch (ctx->pc) {
        case 0x123604u: goto label_123604;
        case 0x123618u: goto label_123618;
        default: break;
    }

    ctx->pc = 0x1235f4u;

    // 0x1235f4: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1235F4u;
    {
        const bool branch_taken_0x1235f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1235F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F4u;
        // 0x1235f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1235f4) {
            ctx->pc = 0x123624u;
            return;
        }
    }
    ctx->pc = 0x1235FCu;
    // 0x1235fc: 0xc048de8  jal         func_1237A0
    ctx->pc = 0x1235FCu;
    SET_GPR_U32(ctx, 31, 0x123604u);
    ctx->pc = 0x123600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235FCu;
    // 0x123600: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237A0u, 0x1235FCu, 0x123604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123604u;
label_123604:
    // 0x123604: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x123604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x123608: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x123608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12360c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x12360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x123610: 0xc048da8  jal         func_1236A0
    ctx->pc = 0x123610u;
    SET_GPR_U32(ctx, 31, 0x123618u);
    ctx->pc = 0x123614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123610u;
    // 0x123614: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1236A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1236A0u, 0x123610u, 0x123618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123618u;
label_123618:
    // 0x123618: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x123618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12361c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x12361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x123620: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x123620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x123624u;
}
