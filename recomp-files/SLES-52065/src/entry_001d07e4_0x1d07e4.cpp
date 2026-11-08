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

// Function: entry_001d07e4
// Address: 0x1d07e4 - 0x1d07f0
void entry_001d07e4_0x1d07e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d07e4_0x1d07e4");
#endif

    ctx->pc = 0x1d07e4u;

    // 0x1d07e4: 0x0  nop
    ctx->pc = 0x1d07e4u;
    // NOP
    // 0x1d07e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1d07ec: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x1d07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    ctx->pc = 0x1d07f0u;
}
