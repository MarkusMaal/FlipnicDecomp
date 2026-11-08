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

// Function: entry_001e5d14
// Address: 0x1e5d14 - 0x1e5d20
void entry_001e5d14_0x1e5d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5d14_0x1e5d14");
#endif

    ctx->pc = 0x1e5d14u;

    // 0x1e5d14: 0x0  nop
    ctx->pc = 0x1e5d14u;
    // NOP
    // 0x1e5d18: 0x93a20047  lbu         $v0, 0x47($sp)
    ctx->pc = 0x1e5d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 71)));
    // 0x1e5d1c: 0x0  nop
    ctx->pc = 0x1e5d1cu;
    // NOP
    ctx->pc = 0x1e5d20u;
}
