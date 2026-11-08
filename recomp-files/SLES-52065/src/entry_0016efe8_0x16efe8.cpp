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

// Function: entry_0016efe8
// Address: 0x16efe8 - 0x16efec
void entry_0016efe8_0x16efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016efe8_0x16efe8");
#endif

    ctx->pc = 0x16efe8u;

    // 0x16efe8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x16efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    ctx->pc = 0x16efecu;
}
