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

// Function: entry_00107190
// Address: 0x107190 - 0x1071a4
void entry_00107190_0x107190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107190_0x107190");
#endif

    ctx->pc = 0x107190u;

    // 0x107190: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x107190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x107194: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107194u;
    {
        const bool branch_taken_0x107194 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x107194) {
            ctx->pc = 0x1071A4u;
            return;
        }
    }
    ctx->pc = 0x10719Cu;
    // 0x10719c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10719Cu;
    {
        const bool branch_taken_0x10719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1071A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10719Cu;
        // 0x1071a0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10719c) {
            ctx->pc = 0x1071A8u;
            return;
        }
    }
    ctx->pc = 0x1071A4u;
}
