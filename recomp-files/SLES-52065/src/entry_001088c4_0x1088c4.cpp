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

// Function: entry_001088c4
// Address: 0x1088c4 - 0x1088dc
void entry_001088c4_0x1088c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001088c4_0x1088c4");
#endif

    ctx->pc = 0x1088c4u;

    // 0x1088c4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1088c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1088c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1088c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1088cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1088ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1088d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1088d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1088d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1088d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1088d8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1088d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1088dcu;
}
