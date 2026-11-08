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

// Function: entry_00132bf8
// Address: 0x132bf8 - 0x132c00
void entry_00132bf8_0x132bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132bf8_0x132bf8");
#endif

    ctx->pc = 0x132bf8u;

    // 0x132bf8: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x132bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x132bfc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x132bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x132c00u;
}
