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

// Function: entry_0011c2f0
// Address: 0x11c2f0 - 0x11c308
void entry_0011c2f0_0x11c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c2f0_0x11c2f0");
#endif

    ctx->pc = 0x11c2f0u;

    // 0x11c2f0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x11c2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x11c2f4: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x11c2f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x11c2f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C2F8u;
    {
        const bool branch_taken_0x11c2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2F8u;
        // 0x11c2fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2f8) {
            ctx->pc = 0x11C308u;
            return;
        }
    }
    ctx->pc = 0x11C300u;
    // 0x11c300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C300u;
    {
        const bool branch_taken_0x11c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c300) {
            ctx->pc = 0x11C30Cu;
            return;
        }
    }
    ctx->pc = 0x11C308u;
}
