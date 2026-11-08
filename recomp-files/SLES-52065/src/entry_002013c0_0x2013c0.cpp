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

// Function: entry_002013c0
// Address: 0x2013c0 - 0x2013cc
void entry_002013c0_0x2013c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002013c0_0x2013c0");
#endif

    ctx->pc = 0x2013c0u;

    // 0x2013c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2013c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2013c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2013c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2013c8: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2013c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    ctx->pc = 0x2013ccu;
}
