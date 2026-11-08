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

// Function: entry_0017a488
// Address: 0x17a488 - 0x17a4a0
void entry_0017a488_0x17a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a488_0x17a488");
#endif

    ctx->pc = 0x17a488u;

    // 0x17a488: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17a488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17a48c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17a490: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17a494: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17a498: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x17a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17a49c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x17a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->pc = 0x17a4a0u;
}
