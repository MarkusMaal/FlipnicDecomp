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

// Function: FUN_0011d5e0
// Address: 0x11d5e0 - 0x11d5fc
void FUN_0011d5e0_0x11d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011d5e0_0x11d5e0");
#endif

    ctx->pc = 0x11d5e0u;

    // 0x11d5e0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x11d5e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5e4: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x11d5e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5e8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x11d5e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5ec: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x11d5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11d5f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11d5f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d5f4: 0x8047588  j           func_11D620
    ctx->pc = 0x11D5F4u;
    ctx->pc = 0x11D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D5F4u;
    // 0x11d5f8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D620u;
    FUN_0011d620_0x11d620(rdram, ctx, runtime); return;
    ctx->pc = 0x11D5FCu;
}
