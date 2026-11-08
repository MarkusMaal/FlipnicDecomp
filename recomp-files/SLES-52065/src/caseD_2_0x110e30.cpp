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
// Address: 0x110e30 - 0x110e4c
void caseD_2_0x110e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x110e30");
#endif

    ctx->pc = 0x110e30u;

    // 0x110e30: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x110e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110e34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x110e34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e38: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x110e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110e3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x110e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x110e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110e44: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x110E44u;
    {
        const bool branch_taken_0x110e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110E44u;
        // 0x110e48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110e44) {
            ctx->pc = 0x110EA0u;
            return;
        }
    }
    ctx->pc = 0x110E4Cu;
}
