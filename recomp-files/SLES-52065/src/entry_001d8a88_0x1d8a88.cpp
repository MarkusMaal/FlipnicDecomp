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

// Function: entry_001d8a88
// Address: 0x1d8a88 - 0x1d8a8c
void entry_001d8a88_0x1d8a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8a88_0x1d8a88");
#endif

    ctx->pc = 0x1d8a88u;

    // 0x1d8a88: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d8a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    ctx->pc = 0x1d8a8cu;
}
