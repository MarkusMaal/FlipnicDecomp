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

// Function: FUN_0011d600
// Address: 0x11d600 - 0x11d61c
void FUN_0011d600_0x11d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011d600_0x11d600");
#endif

    ctx->pc = 0x11d600u;

    // 0x11d600: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x11d600u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d604: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x11d604u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d608: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x11d608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d60c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x11d60cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d610: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x11d610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x11d614: 0x8047588  j           func_11D620
    ctx->pc = 0x11D614u;
    ctx->pc = 0x11D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D614u;
    // 0x11d618: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D620u;
    FUN_0011d620_0x11d620(rdram, ctx, runtime); return;
    ctx->pc = 0x11D61Cu;
}
