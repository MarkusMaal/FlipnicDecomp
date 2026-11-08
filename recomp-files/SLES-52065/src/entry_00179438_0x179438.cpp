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

// Function: entry_00179438
// Address: 0x179438 - 0x179440
void entry_00179438_0x179438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179438_0x179438");
#endif

    ctx->pc = 0x179438u;

    // 0x179438: 0xa0600838  sb          $zero, 0x838($v1)
    ctx->pc = 0x179438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2104), (uint8_t)GPR_U32(ctx, 0));
    // 0x17943c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17943cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x179440u;
}
