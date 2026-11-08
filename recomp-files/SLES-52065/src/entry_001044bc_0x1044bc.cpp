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

// Function: entry_001044bc
// Address: 0x1044bc - 0x1044c8
void entry_001044bc_0x1044bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001044bc_0x1044bc");
#endif

    ctx->pc = 0x1044bcu;

    // 0x1044bc: 0x10000356  b           . + 4 + (0x356 << 2)
    ctx->pc = 0x1044BCu;
    {
        const bool branch_taken_0x1044bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1044C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1044BCu;
        // 0x1044c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1044bc) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x1044C4u;
    // 0x1044c4: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1044c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->pc = 0x1044c8u;
}
