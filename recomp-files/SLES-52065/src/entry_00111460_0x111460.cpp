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

// Function: entry_00111460
// Address: 0x111460 - 0x111478
void entry_00111460_0x111460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111460_0x111460");
#endif

    ctx->pc = 0x111460u;

    // 0x111460: 0x8ce40224  lw          $a0, 0x224($a3)
    ctx->pc = 0x111460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x111464: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x111464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x111468: 0xace40224  sw          $a0, 0x224($a3)
    ctx->pc = 0x111468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 4));
    // 0x11146c: 0x8ce40224  lw          $a0, 0x224($a3)
    ctx->pc = 0x11146cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x111470: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x111470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x111474: 0xace40224  sw          $a0, 0x224($a3)
    ctx->pc = 0x111474u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 4));
    ctx->pc = 0x111478u;
}
