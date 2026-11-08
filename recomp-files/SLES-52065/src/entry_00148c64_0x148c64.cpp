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

// Function: entry_00148c64
// Address: 0x148c64 - 0x148c6c
void entry_00148c64_0x148c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148c64_0x148c64");
#endif

    ctx->pc = 0x148c64u;

    // 0x148c64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x148c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148c68: 0xae4202c0  sw          $v0, 0x2C0($s2)
    ctx->pc = 0x148c68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 2));
    ctx->pc = 0x148c6cu;
}
