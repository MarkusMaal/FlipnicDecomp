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

// Function: entry_001e57cc
// Address: 0x1e57cc - 0x1e57e0
void entry_001e57cc_0x1e57cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e57cc_0x1e57cc");
#endif

    ctx->pc = 0x1e57ccu;

    // 0x1e57cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e57d0: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E57D0u;
    {
        const bool branch_taken_0x1e57d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e57d0) {
            ctx->pc = 0x1E57E0u;
            return;
        }
    }
    ctx->pc = 0x1E57D8u;
    // 0x1e57d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E57D8u;
    {
        const bool branch_taken_0x1e57d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57D8u;
        // 0x1e57dc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57d8) {
            ctx->pc = 0x1E5810u;
            return;
        }
    }
    ctx->pc = 0x1E57E0u;
}
