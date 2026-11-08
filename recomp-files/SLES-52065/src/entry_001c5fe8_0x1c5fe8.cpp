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

// Function: entry_001c5fe8
// Address: 0x1c5fe8 - 0x1c5fec
void entry_001c5fe8_0x1c5fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5fe8_0x1c5fe8");
#endif

    ctx->pc = 0x1c5fe8u;

    // 0x1c5fe8: 0x9242006c  lbu         $v0, 0x6C($s2)
    ctx->pc = 0x1c5fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 108)));
    ctx->pc = 0x1c5fecu;
}
