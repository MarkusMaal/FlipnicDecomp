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

// Function: entry_001409dc
// Address: 0x1409dc - 0x1409f8
void entry_001409dc_0x1409dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001409dc_0x1409dc");
#endif

    ctx->pc = 0x1409dcu;

    // 0x1409dc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1409dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1409e0: 0x1883823  subu        $a3, $t4, $t0
    ctx->pc = 0x1409e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1409e4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1409e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1409e8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1409e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1409ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1409ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1409f0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1409f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1409f4: 0xafa90024  sw          $t1, 0x24($sp)
    ctx->pc = 0x1409f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    ctx->pc = 0x1409f8u;
}
