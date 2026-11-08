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

// Function: entry_00188bc0
// Address: 0x188bc0 - 0x188bd8
void entry_00188bc0_0x188bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188bc0_0x188bc0");
#endif

    ctx->pc = 0x188bc0u;

    // 0x188bc0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x188bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x188bc4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x188bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x188bc8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x188bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x188bcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x188bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x188bd0: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x188bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
    // 0x188bd4: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x188bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    ctx->pc = 0x188bd8u;
}
