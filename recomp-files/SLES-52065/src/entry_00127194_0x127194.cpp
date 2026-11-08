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

// Function: entry_00127194
// Address: 0x127194 - 0x1271ac
void entry_00127194_0x127194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127194_0x127194");
#endif

    ctx->pc = 0x127194u;

    // 0x127194: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x127194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x127198: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x127198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12719c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x12719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1271a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1271a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1271a4: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x1271a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1271a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1271a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->pc = 0x1271acu;
}
