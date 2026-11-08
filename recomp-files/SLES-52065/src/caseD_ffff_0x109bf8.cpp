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

// Function: caseD_ffff
// Address: 0x109bf8 - 0x109c00
void caseD_ffff_0x109bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_ffff_0x109bf8");
#endif

    ctx->pc = 0x109bf8u;

    // 0x109bf8: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x109BF8u;
    {
        const bool branch_taken_0x109bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BF8u;
        // 0x109bfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bf8) {
            ctx->pc = 0x10A1F4u;
            return;
        }
    }
    ctx->pc = 0x109C00u;
}
