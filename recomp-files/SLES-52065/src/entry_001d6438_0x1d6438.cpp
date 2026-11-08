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

// Function: entry_001d6438
// Address: 0x1d6438 - 0x1d6458
void entry_001d6438_0x1d6438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6438_0x1d6438");
#endif

    switch (ctx->pc) {
        case 0x1d6450u: goto label_1d6450;
        default: break;
    }

    ctx->pc = 0x1d6438u;

    // 0x1d6438: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6438u;
    {
        const bool branch_taken_0x1d6438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6438) {
            ctx->pc = 0x1D643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6438u;
            // 0x1d643c: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6458u;
            return;
        }
    }
    ctx->pc = 0x1D6440u;
    // 0x1d6440: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1d6440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1d6444: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6448: 0xc080664  jal         func_201990
    ctx->pc = 0x1D6448u;
    SET_GPR_U32(ctx, 31, 0x1D6450u);
    ctx->pc = 0x1D644Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6448u;
    // 0x1d644c: 0x24a53640  addiu       $a1, $a1, 0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1D6448u, 0x1D6450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6450u;
label_1d6450:
    // 0x1d6450: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D6450u;
    {
        const bool branch_taken_0x1d6450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6450u;
        // 0x1d6454: 0x8ea80258  lw          $t0, 0x258($s5) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6450) {
            ctx->pc = 0x1D6468u;
            return;
        }
    }
    ctx->pc = 0x1D6458u;
}
