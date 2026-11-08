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

// Function: entry_00118214
// Address: 0x118214 - 0x118230
void entry_00118214_0x118214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118214_0x118214");
#endif

    ctx->pc = 0x118214u;

    // 0x118214: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x118214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x118218: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x118218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11821c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11821cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x118220: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x118220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x118224: 0x84730008  lh          $s3, 0x8($v1)
    ctx->pc = 0x118224u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x118228: 0x0  nop
    ctx->pc = 0x118228u;
    // NOP
    // 0x11822c: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x11822cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    ctx->pc = 0x118230u;
}
