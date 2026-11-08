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

// Function: entry_001ac95c
// Address: 0x1ac95c - 0x1ac960
void entry_001ac95c_0x1ac95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac95c_0x1ac95c");
#endif

    ctx->pc = 0x1ac95cu;

    // 0x1ac95c: 0x922306d9  lbu         $v1, 0x6D9($s1)
    ctx->pc = 0x1ac95cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1753)));
    ctx->pc = 0x1ac960u;
}
