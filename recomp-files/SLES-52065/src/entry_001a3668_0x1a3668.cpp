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

// Function: entry_001a3668
// Address: 0x1a3668 - 0x1a366c
void entry_001a3668_0x1a3668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3668_0x1a3668");
#endif

    ctx->pc = 0x1a3668u;

    // 0x1a3668: 0xae3207bc  sw          $s2, 0x7BC($s1)
    ctx->pc = 0x1a3668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1980), GPR_U32(ctx, 18));
    ctx->pc = 0x1a366cu;
}
