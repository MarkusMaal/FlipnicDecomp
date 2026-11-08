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

// Function: entry_00158920
// Address: 0x158920 - 0x158928
void entry_00158920_0x158920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158920_0x158920");
#endif

    ctx->pc = 0x158920u;

    // 0x158920: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x158920u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x158924: 0x7e060030  sq          $a2, 0x30($s0)
    ctx->pc = 0x158924u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 6));
    ctx->pc = 0x158928u;
}
