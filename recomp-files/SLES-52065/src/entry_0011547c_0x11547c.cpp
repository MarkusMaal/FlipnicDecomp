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

// Function: entry_0011547c
// Address: 0x11547c - 0x11549c
void entry_0011547c_0x11547c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011547c_0x11547c");
#endif

    ctx->pc = 0x11547cu;

    // 0x11547c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11547Cu;
    {
        const bool branch_taken_0x11547c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11547c) {
            ctx->pc = 0x11549Cu;
            return;
        }
    }
    ctx->pc = 0x115484u;
    // 0x115484: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x115484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x115488: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x115488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x11548c: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x11548cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x115490: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x115494: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x115494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x115498: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x115498u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x11549cu;
}
