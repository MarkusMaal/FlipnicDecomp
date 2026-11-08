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

// Function: entry_001e556c
// Address: 0x1e556c - 0x1e5580
void entry_001e556c_0x1e556c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e556c_0x1e556c");
#endif

    ctx->pc = 0x1e556cu;

    // 0x1e556c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e556cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5570: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5570u;
    {
        const bool branch_taken_0x1e5570 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5570) {
            ctx->pc = 0x1E5580u;
            return;
        }
    }
    ctx->pc = 0x1E5578u;
    // 0x1e5578: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E5578u;
    {
        const bool branch_taken_0x1e5578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5578u;
        // 0x1e557c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5578) {
            ctx->pc = 0x1E55B0u;
            return;
        }
    }
    ctx->pc = 0x1E5580u;
}
