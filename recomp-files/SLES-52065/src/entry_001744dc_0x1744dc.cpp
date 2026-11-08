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

// Function: entry_001744dc
// Address: 0x1744dc - 0x174508
void entry_001744dc_0x1744dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001744dc_0x1744dc");
#endif

    switch (ctx->pc) {
        case 0x1744ecu: goto label_1744ec;
        default: break;
    }

    ctx->pc = 0x1744dcu;

    // 0x1744dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1744dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1744e0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1744e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1744e4: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x1744E4u;
    SET_GPR_U32(ctx, 31, 0x1744ECu);
    ctx->pc = 0x1744E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744E4u;
    // 0x1744e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x1744E4u, 0x1744ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1744ECu;
label_1744ec:
    // 0x1744ec: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1744ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1744f0: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1744f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1744f4: 0x24421a50  addiu       $v0, $v0, 0x1A50
    ctx->pc = 0x1744f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
    // 0x1744f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1744f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744fc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1744fcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x211A50u));
    // 0x174500: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x174500u;
    {
        const bool branch_taken_0x174500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174500u;
        // 0x174504: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174500) {
            ctx->pc = 0x174694u;
            return;
        }
    }
    ctx->pc = 0x174508u;
}
