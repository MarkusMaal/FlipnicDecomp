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

// Function: entry_001a8a84
// Address: 0x1a8a84 - 0x1a8aac
void entry_001a8a84_0x1a8a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8a84_0x1a8a84");
#endif

    ctx->pc = 0x1a8a84u;

    // 0x1a8a84: 0x0  nop
    ctx->pc = 0x1a8a84u;
    // NOP
    // 0x1a8a88: 0x8e8309b0  lw          $v1, 0x9B0($s4)
    ctx->pc = 0x1a8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2480)));
    // 0x1a8a8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1a8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a8a90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8a94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8a9c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8aa0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1a8aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1a8aa4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1a8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1a8aa8: 0xac5106bc  sw          $s1, 0x6BC($v0)
    ctx->pc = 0x1a8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1724), GPR_U32(ctx, 17));
    ctx->pc = 0x1a8aacu;
}
