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

// Function: entry_001ef61c
// Address: 0x1ef61c - 0x1ef628
void entry_001ef61c_0x1ef61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef61c_0x1ef61c");
#endif

    ctx->pc = 0x1ef61cu;

    // 0x1ef61c: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1ef61cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1ef620: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1ef620u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1ef624: 0x8e84a468  lw          $a0, -0x5B98($s4)
    ctx->pc = 0x1ef624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294943848)));
    ctx->pc = 0x1ef628u;
}
