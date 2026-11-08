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

// Function: caseD_4
// Address: 0x1131ec - 0x1131fc
void caseD_4_0x1131ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1131ec");
#endif

    ctx->pc = 0x1131ecu;

    // 0x1131ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1131ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1131f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1131F4u;
    {
        const bool branch_taken_0x1131f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131F4u;
        // 0x1131f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131f4) {
            ctx->pc = 0x113224u;
            return;
        }
    }
    ctx->pc = 0x1131FCu;
}
