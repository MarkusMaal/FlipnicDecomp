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

// Function: entry_00192d90
// Address: 0x192d90 - 0x192dac
void entry_00192d90_0x192d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192d90_0x192d90");
#endif

    ctx->pc = 0x192d90u;

    // 0x192d90: 0x2b4082a  slt         $at, $s5, $s4
    ctx->pc = 0x192d90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x192d94: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x192D94u;
    {
        const bool branch_taken_0x192d94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x192D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D94u;
        // 0x192d98: 0x275082a  slt         $at, $s3, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d94) {
            ctx->pc = 0x192DB4u;
            return;
        }
    }
    ctx->pc = 0x192D9Cu;
    // 0x192d9c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x192D9Cu;
    {
        const bool branch_taken_0x192d9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192D9Cu;
        // 0x192da0: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192d9c) {
            ctx->pc = 0x192DACu;
            return;
        }
    }
    ctx->pc = 0x192DA4u;
    // 0x192da4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192DA4u;
    {
        const bool branch_taken_0x192da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192DA4u;
        // 0x192da8: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192da4) {
            ctx->pc = 0x192DC8u;
            return;
        }
    }
    ctx->pc = 0x192DACu;
}
