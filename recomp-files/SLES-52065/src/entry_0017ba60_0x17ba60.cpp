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

// Function: entry_0017ba60
// Address: 0x17ba60 - 0x17ba80
void entry_0017ba60_0x17ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ba60_0x17ba60");
#endif

    ctx->pc = 0x17ba60u;

    // 0x17ba60: 0xac8501d4  sw          $a1, 0x1D4($a0)
    ctx->pc = 0x17ba60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 5));
    // 0x17ba64: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x17ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x17ba68: 0x8c8201d4  lw          $v0, 0x1D4($a0)
    ctx->pc = 0x17ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x17ba6c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x17ba6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ba70: 0x0  nop
    ctx->pc = 0x17ba70u;
    // NOP
    // 0x17ba74: 0x80425a4  j           func_109690
    ctx->pc = 0x17BA74u;
    ctx->pc = 0x17BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA74u;
    // 0x17ba78: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    FUN_00109690_0x109690(rdram, ctx, runtime); return;
    ctx->pc = 0x17BA7Cu;
    // 0x17ba7c: 0x0  nop
    ctx->pc = 0x17ba7cu;
    // NOP
    ctx->pc = 0x17ba80u;
}
