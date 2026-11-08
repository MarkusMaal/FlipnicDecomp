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

// Function: entry_0015cfdc
// Address: 0x15cfdc - 0x15cff4
void entry_0015cfdc_0x15cfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cfdc_0x15cfdc");
#endif

    ctx->pc = 0x15cfdcu;

    // 0x15cfdc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15cfe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15cfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15cfe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15cfe8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15cfec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15cff0: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x15cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x15cff4u;
}
