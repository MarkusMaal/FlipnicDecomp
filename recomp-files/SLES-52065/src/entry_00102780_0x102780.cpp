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

// Function: entry_00102780
// Address: 0x102780 - 0x10279c
void entry_00102780_0x102780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102780_0x102780");
#endif

    ctx->pc = 0x102780u;

    // 0x102780: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x102780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x102784: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x102784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x102788: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x102788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10278c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102790: 0x84530008  lh          $s3, 0x8($v0)
    ctx->pc = 0x102790u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102794: 0x0  nop
    ctx->pc = 0x102794u;
    // NOP
    // 0x102798: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x102798u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    ctx->pc = 0x10279cu;
}
