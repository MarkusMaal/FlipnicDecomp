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

// Function: entry_0011d4b4
// Address: 0x11d4b4 - 0x11d4c4
void entry_0011d4b4_0x11d4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d4b4_0x11d4b4");
#endif

    ctx->pc = 0x11d4b4u;

    // 0x11d4b4: 0x0  nop
    ctx->pc = 0x11d4b4u;
    // NOP
    // 0x11d4b8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x11d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x11d4bc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x11d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x11d4c0: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x11d4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    ctx->pc = 0x11d4c4u;
}
