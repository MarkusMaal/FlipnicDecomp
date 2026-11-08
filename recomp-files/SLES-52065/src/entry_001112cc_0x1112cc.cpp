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

// Function: entry_001112cc
// Address: 0x1112cc - 0x1112f8
void entry_001112cc_0x1112cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001112cc_0x1112cc");
#endif

    switch (ctx->pc) {
        case 0x1112e4u: goto label_1112e4;
        default: break;
    }

    ctx->pc = 0x1112ccu;

    // 0x1112cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1112ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1112d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1112d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1112d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1112d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112dc: 0xc043ea4  jal         func_10FA90
    ctx->pc = 0x1112DCu;
    SET_GPR_U32(ctx, 31, 0x1112E4u);
    ctx->pc = 0x1112E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112DCu;
    // 0x1112e0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA90u, 0x1112DCu, 0x1112E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112E4u;
label_1112e4:
    // 0x1112e4: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1112e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1112e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1112e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1112ec: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1112ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1112f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1112F0u;
    {
        const bool branch_taken_0x1112f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112F0u;
        // 0x1112f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112f0) {
            ctx->pc = 0x111338u;
            return;
        }
    }
    ctx->pc = 0x1112F8u;
}
