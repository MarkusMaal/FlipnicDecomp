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

// Function: entry_00150cfc
// Address: 0x150cfc - 0x150d10
void entry_00150cfc_0x150cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150cfc_0x150cfc");
#endif

    ctx->pc = 0x150cfcu;

    // 0x150cfc: 0x0  nop
    ctx->pc = 0x150cfcu;
    // NOP
    // 0x150d00: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x150d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x150d04: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x150d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x150d08: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x150D08u;
    {
        const bool branch_taken_0x150d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150d08) {
            ctx->pc = 0x150CE0u;
            return;
        }
    }
    ctx->pc = 0x150D10u;
}
