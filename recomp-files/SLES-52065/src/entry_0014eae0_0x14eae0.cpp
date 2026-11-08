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

// Function: entry_0014eae0
// Address: 0x14eae0 - 0x14eae8
void entry_0014eae0_0x14eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eae0_0x14eae0");
#endif

    ctx->pc = 0x14eae0u;

    // 0x14eae0: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x14eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x14eae4: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x14eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x14eae8u;
}
