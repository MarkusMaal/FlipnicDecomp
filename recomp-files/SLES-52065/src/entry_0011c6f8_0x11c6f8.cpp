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

// Function: entry_0011c6f8
// Address: 0x11c6f8 - 0x11c710
void entry_0011c6f8_0x11c6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c6f8_0x11c6f8");
#endif

    ctx->pc = 0x11c6f8u;

    // 0x11c6f8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x11c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x11c6fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C6FCu;
    {
        const bool branch_taken_0x11c6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c6fc) {
            ctx->pc = 0x11C710u;
            return;
        }
    }
    ctx->pc = 0x11C704u;
    // 0x11c704: 0x8f8383f4  lw          $v1, -0x7C0C($gp)
    ctx->pc = 0x11c704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x11c708: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C708u;
    {
        const bool branch_taken_0x11c708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c708) {
            ctx->pc = 0x11C714u;
            return;
        }
    }
    ctx->pc = 0x11C710u;
}
