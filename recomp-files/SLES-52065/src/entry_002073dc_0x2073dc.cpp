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

// Function: entry_002073dc
// Address: 0x2073dc - 0x2073e0
void entry_002073dc_0x2073dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002073dc_0x2073dc");
#endif

    ctx->pc = 0x2073dcu;

    // 0x2073dc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2073dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    ctx->pc = 0x2073e0u;
}
