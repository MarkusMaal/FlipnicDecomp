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

// Function: entry_0013551c
// Address: 0x13551c - 0x135530
void entry_0013551c_0x13551c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013551c_0x13551c");
#endif

    ctx->pc = 0x13551cu;

    // 0x13551c: 0x0  nop
    ctx->pc = 0x13551cu;
    // NOP
    // 0x135520: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x135520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x135524: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x135524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x135528: 0x1483ffe7  bne         $a0, $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x135528u;
    {
        const bool branch_taken_0x135528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x135528) {
            ctx->pc = 0x1354C8u;
            return;
        }
    }
    ctx->pc = 0x135530u;
}
