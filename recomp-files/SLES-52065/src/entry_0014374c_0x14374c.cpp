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

// Function: entry_0014374c
// Address: 0x14374c - 0x14375c
void entry_0014374c_0x14374c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014374c_0x14374c");
#endif

    ctx->pc = 0x14374cu;

    // 0x14374c: 0x693823  subu        $a3, $v1, $t1
    ctx->pc = 0x14374cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x143750: 0xe3082b  sltu        $at, $a3, $v1
    ctx->pc = 0x143750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x143754: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x143754u;
    {
        const bool branch_taken_0x143754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x143758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143754u;
        // 0x143758: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143754) {
            ctx->pc = 0x1437A4u;
            return;
        }
    }
    ctx->pc = 0x14375Cu;
}
