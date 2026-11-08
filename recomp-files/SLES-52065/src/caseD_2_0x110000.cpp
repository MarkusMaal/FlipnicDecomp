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

// Function: caseD_2
// Address: 0x110000 - 0x11001c
void caseD_2_0x110000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x110000");
#endif

    ctx->pc = 0x110000u;

    // 0x110000: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x110000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110008: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x110008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11000c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11000cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110014: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x110014u;
    {
        const bool branch_taken_0x110014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110014u;
        // 0x110018: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110014) {
            ctx->pc = 0x110060u;
            return;
        }
    }
    ctx->pc = 0x11001Cu;
}
