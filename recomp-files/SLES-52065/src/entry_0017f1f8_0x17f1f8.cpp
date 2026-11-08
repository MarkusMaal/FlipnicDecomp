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

// Function: entry_0017f1f8
// Address: 0x17f1f8 - 0x17f20c
void entry_0017f1f8_0x17f1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f1f8_0x17f1f8");
#endif

    ctx->pc = 0x17f1f8u;

    // 0x17f1f8: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x17f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x17f1fc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x17f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17f200: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x17f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x17f204: 0x1083fff3  beq         $a0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x17F204u;
    {
        const bool branch_taken_0x17f204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17f204) {
            ctx->pc = 0x17F1D4u;
            return;
        }
    }
    ctx->pc = 0x17F20Cu;
}
