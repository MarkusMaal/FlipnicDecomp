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

// Function: entry_001b5138
// Address: 0x1b5138 - 0x1b5144
void entry_001b5138_0x1b5138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5138_0x1b5138");
#endif

    ctx->pc = 0x1b5138u;

    // 0x1b5138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b513c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5140: 0xa022e768  sb          $v0, -0x1898($at)
    ctx->pc = 0x1b5140u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36E768u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36E768u, _value); } while (0);
    ctx->pc = 0x1b5144u;
}
