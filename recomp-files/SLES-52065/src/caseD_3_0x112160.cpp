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

// Function: caseD_3
// Address: 0x112160 - 0x11216c
void caseD_3_0x112160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x112160");
#endif

    ctx->pc = 0x112160u;

    // 0x112160: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x112160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112164: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x112164u;
    {
        const bool branch_taken_0x112164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112164u;
        // 0x112168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112164) {
            ctx->pc = 0x112194u;
            return;
        }
    }
    ctx->pc = 0x11216Cu;
}
