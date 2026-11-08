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

// Function: entry_001b3b24
// Address: 0x1b3b24 - 0x1b3b34
void entry_001b3b24_0x1b3b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3b24_0x1b3b24");
#endif

    ctx->pc = 0x1b3b24u;

    // 0x1b3b24: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3b2c: 0xac602858  sw          $zero, 0x2858($v1)
    ctx->pc = 0x1b3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10328), GPR_U32(ctx, 0));
    // 0x1b3b30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1b3b34u;
}
