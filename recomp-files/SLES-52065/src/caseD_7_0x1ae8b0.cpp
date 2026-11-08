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
// Address: 0x1ae8b0 - 0x1ae8c0
void caseD_7_0x1ae8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1ae8b0");
#endif

    ctx->pc = 0x1ae8b0u;

    // 0x1ae8b0: 0x8e8306bc  lw          $v1, 0x6BC($s4)
    ctx->pc = 0x1ae8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1724)));
    // 0x1ae8b4: 0x18600140  blez        $v1, . + 4 + (0x140 << 2)
    ctx->pc = 0x1AE8B4u;
    {
        const bool branch_taken_0x1ae8b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8B4u;
        // 0x1ae8b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8b4) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AE8BCu;
    // 0x1ae8bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ae8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ae8c0u;
}
