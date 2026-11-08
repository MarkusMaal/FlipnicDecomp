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

// Function: entry_001345c4
// Address: 0x1345c4 - 0x1345c8
void entry_001345c4_0x1345c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001345c4_0x1345c4");
#endif

    ctx->pc = 0x1345c4u;

    // 0x1345c4: 0xa2400090  sb          $zero, 0x90($s2)
    ctx->pc = 0x1345c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1345c8u;
}
