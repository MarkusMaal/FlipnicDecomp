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

// Function: entry_00114fbc
// Address: 0x114fbc - 0x114fdc
void entry_00114fbc_0x114fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114fbc_0x114fbc");
#endif

    ctx->pc = 0x114fbcu;

    // 0x114fbc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114FBCu;
    {
        const bool branch_taken_0x114fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x114fbc) {
            ctx->pc = 0x114FDCu;
            return;
        }
    }
    ctx->pc = 0x114FC4u;
    // 0x114fc4: 0x92440255  lbu         $a0, 0x255($s2)
    ctx->pc = 0x114fc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 597)));
    // 0x114fc8: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x114fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x114fcc: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x114fccu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x114fd0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x114fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x114fd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x114fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x114fd8: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x114fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x114fdcu;
}
