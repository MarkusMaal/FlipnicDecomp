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

// Function: entry_00136d30
// Address: 0x136d30 - 0x136d50
void entry_00136d30_0x136d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136d30_0x136d30");
#endif

    ctx->pc = 0x136d30u;

    // 0x136d30: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x136d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x136d34: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x136d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x136d38: 0x24846530  addiu       $a0, $a0, 0x6530
    ctx->pc = 0x136d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25904));
    // 0x136d3c: 0x24a56d50  addiu       $a1, $a1, 0x6D50
    ctx->pc = 0x136d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27984));
    // 0x136d40: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x136d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x136d44: 0x807a3bc  j           func_1E8EF0
    ctx->pc = 0x136D44u;
    ctx->pc = 0x136D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D44u;
    // 0x136d48: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    FUN_001e8ef0_0x1e8ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x136D4Cu;
    // 0x136d4c: 0x0  nop
    ctx->pc = 0x136d4cu;
    // NOP
    ctx->pc = 0x136d50u;
}
