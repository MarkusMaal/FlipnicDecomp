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

// Function: entry_0013f028
// Address: 0x13f028 - 0x13f030
void entry_0013f028_0x13f028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f028_0x13f028");
#endif

    ctx->pc = 0x13f028u;

    // 0x13f028: 0x8f8385c8  lw          $v1, -0x7A38($gp)
    ctx->pc = 0x13f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936008)));
    // 0x13f02c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x13f030u;
}
