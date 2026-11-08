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

// Function: entry_0012fd70
// Address: 0x12fd70 - 0x12fd90
void entry_0012fd70_0x12fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fd70_0x12fd70");
#endif

    ctx->pc = 0x12fd70u;

    // 0x12fd70: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x12fd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x12fd74: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x12fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x12fd78: 0x24843670  addiu       $a0, $a0, 0x3670
    ctx->pc = 0x12fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13936));
    // 0x12fd7c: 0x24a5f230  addiu       $a1, $a1, -0xDD0
    ctx->pc = 0x12fd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    // 0x12fd80: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x12fd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12fd84: 0x807a3bc  j           func_1E8EF0
    ctx->pc = 0x12FD84u;
    ctx->pc = 0x12FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD84u;
    // 0x12fd88: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    FUN_001e8ef0_0x1e8ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x12FD8Cu;
    // 0x12fd8c: 0x0  nop
    ctx->pc = 0x12fd8cu;
    // NOP
    ctx->pc = 0x12fd90u;
}
