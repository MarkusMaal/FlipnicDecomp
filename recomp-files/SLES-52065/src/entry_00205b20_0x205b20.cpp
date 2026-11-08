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

// Function: entry_00205b20
// Address: 0x205b20 - 0x205b30
void entry_00205b20_0x205b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205b20_0x205b20");
#endif

    ctx->pc = 0x205b20u;

    // 0x205b20: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x205b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x205b24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x205b24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x205b28: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x205b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
    // 0x205b2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x205b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x205b30u;
}
