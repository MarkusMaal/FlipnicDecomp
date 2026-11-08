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

// Function: entry_0018cde8
// Address: 0x18cde8 - 0x18cdfc
void entry_0018cde8_0x18cde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cde8_0x18cde8");
#endif

    ctx->pc = 0x18cde8u;

    // 0x18cde8: 0x8e020470  lw          $v0, 0x470($s0)
    ctx->pc = 0x18cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x18cdec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CDECu;
    {
        const bool branch_taken_0x18cdec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18cdec) {
            ctx->pc = 0x18CDFCu;
            return;
        }
    }
    ctx->pc = 0x18CDF4u;
    // 0x18cdf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cdf8: 0xae020470  sw          $v0, 0x470($s0)
    ctx->pc = 0x18cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1136), GPR_U32(ctx, 2));
    ctx->pc = 0x18cdfcu;
}
