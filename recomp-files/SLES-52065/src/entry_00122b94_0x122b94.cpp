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

// Function: entry_00122b94
// Address: 0x122b94 - 0x122b98
void entry_00122b94_0x122b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122b94_0x122b94");
#endif

    ctx->pc = 0x122b94u;

    // 0x122b94: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x122b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    ctx->pc = 0x122b98u;
}
