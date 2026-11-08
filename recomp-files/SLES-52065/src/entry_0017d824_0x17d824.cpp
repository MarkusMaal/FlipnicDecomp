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

// Function: entry_0017d824
// Address: 0x17d824 - 0x17d838
void entry_0017d824_0x17d824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d824_0x17d824");
#endif

    ctx->pc = 0x17d824u;

    // 0x17d824: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17d824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17d828: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D828u;
    {
        const bool branch_taken_0x17d828 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D828u;
        // 0x17d82c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d828) {
            ctx->pc = 0x17D83Cu;
            return;
        }
    }
    ctx->pc = 0x17D830u;
    // 0x17d830: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17D830u;
    SET_GPR_U32(ctx, 31, 0x17D838u);
    ctx->pc = 0x17D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D830u;
    // 0x17d834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17D830u, 0x17D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D838u;
}
