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

// Function: entry_001a2014
// Address: 0x1a2014 - 0x1a2034
void entry_001a2014_0x1a2014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2014_0x1a2014");
#endif

    ctx->pc = 0x1a2014u;

    // 0x1a2014: 0x0  nop
    ctx->pc = 0x1a2014u;
    // NOP
    // 0x1a2018: 0xae600a00  sw          $zero, 0xA00($s3)
    ctx->pc = 0x1a2018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2560), GPR_U32(ctx, 0));
    // 0x1a201c: 0x8e820690  lw          $v0, 0x690($s4)
    ctx->pc = 0x1a201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1680)));
    // 0x1a2020: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a2020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a2024: 0xae820690  sw          $v0, 0x690($s4)
    ctx->pc = 0x1a2024u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1680), GPR_U32(ctx, 2));
    // 0x1a2028: 0x8e820698  lw          $v0, 0x698($s4)
    ctx->pc = 0x1a2028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
    // 0x1a202c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a202cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2030: 0xae820698  sw          $v0, 0x698($s4)
    ctx->pc = 0x1a2030u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1688), GPR_U32(ctx, 2));
    ctx->pc = 0x1a2034u;
}
