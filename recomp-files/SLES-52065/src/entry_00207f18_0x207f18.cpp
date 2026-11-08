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

// Function: entry_00207f18
// Address: 0x207f18 - 0x207f2c
void entry_00207f18_0x207f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207f18_0x207f18");
#endif

    ctx->pc = 0x207f18u;

    // 0x207f18: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x207F18u;
    {
        const bool branch_taken_0x207f18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x207F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F18u;
        // 0x207f1c: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f18) {
            ctx->pc = 0x207FACu;
            return;
        }
    }
    ctx->pc = 0x207F20u;
    // 0x207f20: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x207F20u;
    {
        const bool branch_taken_0x207f20 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x207F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F20u;
        // 0x207f24: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f20) {
            ctx->pc = 0x207F2Cu;
            return;
        }
    }
    ctx->pc = 0x207F28u;
    // 0x207f28: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x207f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
    ctx->pc = 0x207f2cu;
}
