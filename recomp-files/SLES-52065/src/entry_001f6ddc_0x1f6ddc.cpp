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

// Function: entry_001f6ddc
// Address: 0x1f6ddc - 0x1f6de4
void entry_001f6ddc_0x1f6ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6ddc_0x1f6ddc");
#endif

    ctx->pc = 0x1f6ddcu;

    // 0x1f6ddc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f6de0: 0xac40bb34  sw          $zero, -0x44CC($v0)
    ctx->pc = 0x1f6de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21BB34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB34u, _value); } while (0);
    ctx->pc = 0x1f6de4u;
}
