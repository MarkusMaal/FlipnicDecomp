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

// Function: entry_0015ba1c
// Address: 0x15ba1c - 0x15ba2c
void entry_0015ba1c_0x15ba1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ba1c_0x15ba1c");
#endif

    ctx->pc = 0x15ba1cu;

    // 0x15ba1c: 0xa6420218  sh          $v0, 0x218($s2)
    ctx->pc = 0x15ba1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 536), (uint16_t)GPR_U32(ctx, 2));
    // 0x15ba20: 0x86420212  lh          $v0, 0x212($s2)
    ctx->pc = 0x15ba20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 530)));
    // 0x15ba24: 0xa6420210  sh          $v0, 0x210($s2)
    ctx->pc = 0x15ba24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 528), (uint16_t)GPR_U32(ctx, 2));
    // 0x15ba28: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x15ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    ctx->pc = 0x15ba2cu;
}
