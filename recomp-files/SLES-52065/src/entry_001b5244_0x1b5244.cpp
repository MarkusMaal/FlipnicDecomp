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

// Function: entry_001b5244
// Address: 0x1b5244 - 0x1b5254
void entry_001b5244_0x1b5244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5244_0x1b5244");
#endif

    ctx->pc = 0x1b5244u;

    // 0x1b5244: 0x0  nop
    ctx->pc = 0x1b5244u;
    // NOP
    // 0x1b5248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b524c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b524cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5250: 0xa022ecd8  sb          $v0, -0x1328($at)
    ctx->pc = 0x1b5250u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36ECD8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36ECD8u, _value); } while (0);
    ctx->pc = 0x1b5254u;
}
