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

// Function: entry_001e9894
// Address: 0x1e9894 - 0x1e98a8
void entry_001e9894_0x1e9894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9894_0x1e9894");
#endif

    ctx->pc = 0x1e9894u;

    // 0x1e9894: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1e9894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e9898: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x1e9898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e989c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e989cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e98a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e98a4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e98a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x1e98a8u;
}
