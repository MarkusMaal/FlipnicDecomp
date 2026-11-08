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

// Function: entry_0014bdb4
// Address: 0x14bdb4 - 0x14bdcc
void entry_0014bdb4_0x14bdb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bdb4_0x14bdb4");
#endif

    ctx->pc = 0x14bdb4u;

    // 0x14bdb4: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x14bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x14bdb8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14bdbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14bdc0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x14bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x14bdc4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x14bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x14bdc8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x14bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x14bdccu;
}
