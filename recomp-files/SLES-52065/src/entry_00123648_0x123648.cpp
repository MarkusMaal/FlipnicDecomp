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

// Function: entry_00123648
// Address: 0x123648 - 0x12364c
void entry_00123648_0x123648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123648_0x123648");
#endif

    ctx->pc = 0x123648u;

    // 0x123648: 0xaeb00004  sw          $s0, 0x4($s5)
    ctx->pc = 0x123648u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x12364cu;
}
