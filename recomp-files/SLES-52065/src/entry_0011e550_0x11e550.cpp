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

// Function: entry_0011e550
// Address: 0x11e550 - 0x11e558
void entry_0011e550_0x11e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e550_0x11e550");
#endif

    ctx->pc = 0x11e550u;

    // 0x11e550: 0x8eb10530  lw          $s1, 0x530($s5)
    ctx->pc = 0x11e550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x11e554: 0x0  nop
    ctx->pc = 0x11e554u;
    // NOP
    ctx->pc = 0x11e558u;
}
