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
// Address: 0x112090 - 0x1120ac
void caseD_2_0x112090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x112090");
#endif

    ctx->pc = 0x112090u;

    // 0x112090: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x112090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x112094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x112094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112098: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x11209c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11209cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1120a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1120A4u;
    {
        const bool branch_taken_0x1120a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120A4u;
        // 0x1120a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120a4) {
            ctx->pc = 0x1120F0u;
            return;
        }
    }
    ctx->pc = 0x1120ACu;
}
