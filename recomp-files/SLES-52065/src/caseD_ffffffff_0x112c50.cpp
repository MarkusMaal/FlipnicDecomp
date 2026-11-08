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

// Function: caseD_ffffffff
// Address: 0x112c50 - 0x112c60
void caseD_ffffffff_0x112c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_ffffffff_0x112c50");
#endif

    ctx->pc = 0x112c50u;

    // 0x112c50: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x112c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x112c54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c58: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x112C58u;
    {
        const bool branch_taken_0x112c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C58u;
        // 0x112c5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c58) {
            ctx->pc = 0x112CC8u;
            return;
        }
    }
    ctx->pc = 0x112C60u;
}
