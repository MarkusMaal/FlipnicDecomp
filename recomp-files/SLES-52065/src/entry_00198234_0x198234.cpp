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

// Function: entry_00198234
// Address: 0x198234 - 0x19823c
void entry_00198234_0x198234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198234_0x198234");
#endif

    ctx->pc = 0x198234u;

    // 0x198234: 0x0  nop
    ctx->pc = 0x198234u;
    // NOP
    // 0x198238: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x198238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x19823cu;
}
