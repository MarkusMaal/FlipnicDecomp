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

// Function: entry_0013fd24
// Address: 0x13fd24 - 0x13fd30
void entry_0013fd24_0x13fd24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fd24_0x13fd24");
#endif

    ctx->pc = 0x13fd24u;

    // 0x13fd24: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x13fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x13fd28: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x13fd28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x13fd2c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x13fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x13fd30u;
}
