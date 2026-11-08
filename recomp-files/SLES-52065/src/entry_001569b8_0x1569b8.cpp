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

// Function: entry_001569b8
// Address: 0x1569b8 - 0x1569bc
void entry_001569b8_0x1569b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001569b8_0x1569b8");
#endif

    ctx->pc = 0x1569b8u;

    // 0x1569b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1569b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x1569bcu;
}
