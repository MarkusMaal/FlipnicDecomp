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

// Function: entry_0016373c
// Address: 0x16373c - 0x163760
void entry_0016373c_0x16373c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016373c_0x16373c");
#endif

    switch (ctx->pc) {
        case 0x163750u: goto label_163750;
        default: break;
    }

    ctx->pc = 0x16373cu;

    // 0x16373c: 0x862201e8  lh          $v0, 0x1E8($s1)
    ctx->pc = 0x16373cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x163740: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163740u;
    {
        const bool branch_taken_0x163740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163740) {
            ctx->pc = 0x163760u;
            return;
        }
    }
    ctx->pc = 0x163748u;
    // 0x163748: 0xc058c90  jal         func_163240
    ctx->pc = 0x163748u;
    SET_GPR_U32(ctx, 31, 0x163750u);
    ctx->pc = 0x163240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163240u, 0x163748u, 0x163750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163750u;
label_163750:
    // 0x163750: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163750u;
    {
        const bool branch_taken_0x163750 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x163754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163750u;
        // 0x163754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163750) {
            ctx->pc = 0x163764u;
            return;
        }
    }
    ctx->pc = 0x163758u;
    // 0x163758: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x163758u;
    {
        const bool branch_taken_0x163758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163758u;
        // 0x16375c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163758) {
            ctx->pc = 0x1639F0u;
            return;
        }
    }
    ctx->pc = 0x163760u;
}
