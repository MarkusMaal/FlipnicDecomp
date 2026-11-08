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

// Function: entry_00165fcc
// Address: 0x165fcc - 0x165fd8
void entry_00165fcc_0x165fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165fcc_0x165fcc");
#endif

    ctx->pc = 0x165fccu;

    // 0x165fcc: 0xa6030226  sh          $v1, 0x226($s0)
    ctx->pc = 0x165fccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 550), (uint16_t)GPR_U32(ctx, 3));
    // 0x165fd0: 0x86020226  lh          $v0, 0x226($s0)
    ctx->pc = 0x165fd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 550)));
    // 0x165fd4: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x165fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    ctx->pc = 0x165fd8u;
}
