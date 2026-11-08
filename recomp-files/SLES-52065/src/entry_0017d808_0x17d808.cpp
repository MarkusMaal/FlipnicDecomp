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

// Function: entry_0017d808
// Address: 0x17d808 - 0x17d820
void entry_0017d808_0x17d808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d808_0x17d808");
#endif

    ctx->pc = 0x17d808u;

    // 0x17d808: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D808u;
    {
        const bool branch_taken_0x17d808 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D808u;
        // 0x17d80c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d808) {
            ctx->pc = 0x17D824u;
            return;
        }
    }
    ctx->pc = 0x17D810u;
    // 0x17d810: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D810u;
    {
        const bool branch_taken_0x17d810 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D810u;
        // 0x17d814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d810) {
            ctx->pc = 0x17D820u;
            return;
        }
    }
    ctx->pc = 0x17D818u;
    // 0x17d818: 0xc048414  jal         func_121050
    ctx->pc = 0x17D818u;
    SET_GPR_U32(ctx, 31, 0x17D820u);
    ctx->pc = 0x17D81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D818u;
    // 0x17d81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x17D818u, 0x17D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D820u;
}
