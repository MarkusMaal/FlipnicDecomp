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

// Function: entry_002074d4
// Address: 0x2074d4 - 0x2074f0
void entry_002074d4_0x2074d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002074d4_0x2074d4");
#endif

    ctx->pc = 0x2074d4u;

    // 0x2074d4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2074d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2074d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2074D8u;
    {
        const bool branch_taken_0x2074d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2074DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074D8u;
        // 0x2074dc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074d8) {
            ctx->pc = 0x2074F0u;
            return;
        }
    }
    ctx->pc = 0x2074E0u;
    // 0x2074e0: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2074e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2074e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2074e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2074e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2074E8u;
    {
        const bool branch_taken_0x2074e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074E8u;
        // 0x2074ec: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074e8) {
            ctx->pc = 0x207508u;
            return;
        }
    }
    ctx->pc = 0x2074F0u;
}
