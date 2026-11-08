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

// Function: entry_0019f940
// Address: 0x19f940 - 0x19f94c
void entry_0019f940_0x19f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f940_0x19f940");
#endif

    ctx->pc = 0x19f940u;

    // 0x19f940: 0x8e820664  lw          $v0, 0x664($s4)
    ctx->pc = 0x19f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1636)));
    // 0x19f944: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x19f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x19f948: 0xac8228e4  sw          $v0, 0x28E4($a0)
    ctx->pc = 0x19f948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10468), GPR_U32(ctx, 2));
    ctx->pc = 0x19f94cu;
}
