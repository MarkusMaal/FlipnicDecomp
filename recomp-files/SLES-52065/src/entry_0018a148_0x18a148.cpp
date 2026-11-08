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

// Function: entry_0018a148
// Address: 0x18a148 - 0x18a14c
void entry_0018a148_0x18a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a148_0x18a148");
#endif

    ctx->pc = 0x18a148u;

    // 0x18a148: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x18a148u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x18a14cu;
}
