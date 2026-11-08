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

// Function: entry_001e0410
// Address: 0x1e0410 - 0x1e0420
void entry_001e0410_0x1e0410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0410_0x1e0410");
#endif

    ctx->pc = 0x1e0410u;

    // 0x1e0410: 0x52420025  beql        $s2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1E0410u;
    {
        const bool branch_taken_0x1e0410 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0410) {
            ctx->pc = 0x1E0414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0410u;
            // 0x1e0414: 0xae110070  sw          $s1, 0x70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E04A8u;
            return;
        }
    }
    ctx->pc = 0x1E0418u;
    // 0x1e0418: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E0418u;
    {
        const bool branch_taken_0x1e0418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0418u;
        // 0x1e041c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0418) {
            ctx->pc = 0x1E04A8u;
            return;
        }
    }
    ctx->pc = 0x1E0420u;
}
