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

// Function: entry_001e61b4
// Address: 0x1e61b4 - 0x1e61c0
void entry_001e61b4_0x1e61b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e61b4_0x1e61b4");
#endif

    ctx->pc = 0x1e61b4u;

    // 0x1e61b4: 0x0  nop
    ctx->pc = 0x1e61b4u;
    // NOP
    // 0x1e61b8: 0x97a20046  lhu         $v0, 0x46($sp)
    ctx->pc = 0x1e61b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
    // 0x1e61bc: 0x0  nop
    ctx->pc = 0x1e61bcu;
    // NOP
    ctx->pc = 0x1e61c0u;
}
