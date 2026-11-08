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

// Function: entry_00110ea0
// Address: 0x110ea0 - 0x110ebc
void entry_00110ea0_0x110ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110ea0_0x110ea0");
#endif

    ctx->pc = 0x110ea0u;

    // 0x110ea0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x110ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x110ea4: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x110EA4u;
    {
        const bool branch_taken_0x110ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110ea4) {
            ctx->pc = 0x110E4Cu;
            return;
        }
    }
    ctx->pc = 0x110EACu;
    // 0x110eac: 0x15070056  bne         $t0, $a3, . + 4 + (0x56 << 2)
    ctx->pc = 0x110EACu;
    {
        const bool branch_taken_0x110eac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x110EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EACu;
        // 0x110eb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eac) {
            ctx->pc = 0x111008u;
            return;
        }
    }
    ctx->pc = 0x110EB4u;
    // 0x110eb4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x110EB4u;
    {
        const bool branch_taken_0x110eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110EB4u;
        // 0x110eb8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110eb4) {
            ctx->pc = 0x110F0Cu;
            return;
        }
    }
    ctx->pc = 0x110EBCu;
}
