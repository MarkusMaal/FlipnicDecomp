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

// Function: entry_0017d1c0
// Address: 0x17d1c0 - 0x17d1dc
void entry_0017d1c0_0x17d1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d1c0_0x17d1c0");
#endif

    ctx->pc = 0x17d1c0u;

    // 0x17d1c0: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x17d1c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x17d1c4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17D1C4u;
    {
        const bool branch_taken_0x17d1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d1c4) {
            ctx->pc = 0x17D1A4u;
            return;
        }
    }
    ctx->pc = 0x17D1CCu;
    // 0x17d1cc: 0x8e110018  lw          $s1, 0x18($s0)
    ctx->pc = 0x17d1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17d1d0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17d1d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D1D4u;
    {
        const bool branch_taken_0x17d1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1D4u;
        // 0x17d1d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1d4) {
            ctx->pc = 0x17D1F8u;
            return;
        }
    }
    ctx->pc = 0x17D1DCu;
}
