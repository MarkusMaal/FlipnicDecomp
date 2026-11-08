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

// Function: entry_00162244
// Address: 0x162244 - 0x162250
void entry_00162244_0x162244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162244_0x162244");
#endif

    ctx->pc = 0x162244u;

    // 0x162244: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x162244u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162248: 0x7ea60000  sq          $a2, 0x0($s5)
    ctx->pc = 0x162248u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 6));
    // 0x16224c: 0x864301f4  lh          $v1, 0x1F4($s2)
    ctx->pc = 0x16224cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
    ctx->pc = 0x162250u;
}
