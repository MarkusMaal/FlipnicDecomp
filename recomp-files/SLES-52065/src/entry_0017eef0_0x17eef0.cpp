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

// Function: entry_0017eef0
// Address: 0x17eef0 - 0x17ef10
void entry_0017eef0_0x17eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eef0_0x17eef0");
#endif

    ctx->pc = 0x17eef0u;

    // 0x17eef0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17eef4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x17eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17eef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17eefc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ef00: 0x805fbc4  j           func_17EF10
    ctx->pc = 0x17EF00u;
    ctx->pc = 0x17EF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EF00u;
    // 0x17ef04: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF10u;
    entry_0017ef10_0x17ef10(rdram, ctx, runtime); return;
    ctx->pc = 0x17EF08u;
    // 0x17ef08: 0x0  nop
    ctx->pc = 0x17ef08u;
    // NOP
    // 0x17ef0c: 0x0  nop
    ctx->pc = 0x17ef0cu;
    // NOP
    ctx->pc = 0x17ef10u;
}
