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

// Function: caseD_7
// Address: 0x1118f8 - 0x111914
void caseD_7_0x1118f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1118f8");
#endif

    ctx->pc = 0x1118f8u;

    // 0x1118f8: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1118f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1118fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1118fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111900: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x111900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x111904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11190c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11190Cu;
    {
        const bool branch_taken_0x11190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11190Cu;
        // 0x111910: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11190c) {
            ctx->pc = 0x111958u;
            return;
        }
    }
    ctx->pc = 0x111914u;
}
