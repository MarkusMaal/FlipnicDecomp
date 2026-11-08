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

// Function: FUN_0017e180
// Address: 0x17e180 - 0x17e198
void FUN_0017e180_0x17e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e180_0x17e180");
#endif

    ctx->pc = 0x17e180u;

    // 0x17e180: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17e180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e184: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17e184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e188: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17e188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17e18c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e190: 0x805f92c  j           func_17E4B0
    ctx->pc = 0x17E190u;
    ctx->pc = 0x17E194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E190u;
    // 0x17e194: 0x24847730  addiu       $a0, $a0, 0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E4B0u;
    FUN_0017e4b0_0x17e4b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17E198u;
}
