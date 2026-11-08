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

// Function: entry_001fe68c
// Address: 0x1fe68c - 0x1fe6a8
void entry_001fe68c_0x1fe68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe68c_0x1fe68c");
#endif

    switch (ctx->pc) {
        case 0x1fe69cu: goto label_1fe69c;
        default: break;
    }

    ctx->pc = 0x1fe68cu;

    // 0x1fe68c: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE68Cu;
    {
        const bool branch_taken_0x1fe68c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe68c) {
            ctx->pc = 0x1FE690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE68Cu;
            // 0x1fe690: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE6A8u;
            return;
        }
    }
    ctx->pc = 0x1FE694u;
    // 0x1fe694: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x1FE694u;
    SET_GPR_U32(ctx, 31, 0x1FE69Cu);
    ctx->pc = 0x1FE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE694u;
    // 0x1fe698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x1FE694u, 0x1FE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE69Cu;
label_1fe69c:
    // 0x1fe69c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE69Cu;
    {
        const bool branch_taken_0x1fe69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE69Cu;
        // 0x1fe6a0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe69c) {
            ctx->pc = 0x1FE6C4u;
            return;
        }
    }
    ctx->pc = 0x1FE6A4u;
    // 0x1fe6a4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1fe6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    ctx->pc = 0x1fe6a8u;
}
