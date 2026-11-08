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

// Function: entry_00122ec0
// Address: 0x122ec0 - 0x122ec8
void entry_00122ec0_0x122ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122ec0_0x122ec0");
#endif

    ctx->pc = 0x122ec0u;

    // 0x122ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122ec4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x122ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    ctx->pc = 0x122ec8u;
}
