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

// Function: entry_001092f8
// Address: 0x1092f8 - 0x109310
void entry_001092f8_0x1092f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001092f8_0x1092f8");
#endif

    ctx->pc = 0x1092f8u;

    // 0x1092f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1092f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1092fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1092fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109304: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109308: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x109308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10930c: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x10930cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x109310u;
}
