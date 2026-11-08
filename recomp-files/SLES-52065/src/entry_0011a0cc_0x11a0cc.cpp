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

// Function: entry_0011a0cc
// Address: 0x11a0cc - 0x11a0d8
void entry_0011a0cc_0x11a0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a0cc_0x11a0cc");
#endif

    ctx->pc = 0x11a0ccu;

    // 0x11a0cc: 0xaf9183e0  sw          $s1, -0x7C20($gp)
    ctx->pc = 0x11a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935520), GPR_U32(ctx, 17));
    // 0x11a0d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11a0d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11a0d4: 0xff8283e8  sd          $v0, -0x7C18($gp)
    ctx->pc = 0x11a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935528), GPR_U64(ctx, 2));
    ctx->pc = 0x11a0d8u;
}
