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

// Function: FUN_0016a3c0
// Address: 0x16a3c0 - 0x16a3d4
void FUN_0016a3c0_0x16a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016a3c0_0x16a3c0");
#endif

    ctx->pc = 0x16a3c0u;

    // 0x16a3c0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x16a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x16a3c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a3c8: 0x0  nop
    ctx->pc = 0x16a3c8u;
    // NOP
    // 0x16a3cc: 0x804af4c  j           func_12BD30
    ctx->pc = 0x16A3CCu;
    ctx->pc = 0x16A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3CCu;
    // 0x16a3d0: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BD30u;
    FUN_0012bd30_0x12bd30(rdram, ctx, runtime); return;
    ctx->pc = 0x16A3D4u;
}
