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

// Function: entry_0016db98
// Address: 0x16db98 - 0x16db9c
void entry_0016db98_0x16db98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db98_0x16db98");
#endif

    ctx->pc = 0x16db98u;

    // 0x16db98: 0x86450066  lh          $a1, 0x66($s2)
    ctx->pc = 0x16db98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
    ctx->pc = 0x16db9cu;
}
