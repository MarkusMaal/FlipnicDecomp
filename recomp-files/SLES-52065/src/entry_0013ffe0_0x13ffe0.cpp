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

// Function: entry_0013ffe0
// Address: 0x13ffe0 - 0x13fffc
void entry_0013ffe0_0x13ffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ffe0_0x13ffe0");
#endif

    ctx->pc = 0x13ffe0u;

    // 0x13ffe0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ffe4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ffe8: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x13ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x13ffec: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13fff0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13fff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fff4: 0xc04fcc4  jal         func_13F310
    ctx->pc = 0x13FFF4u;
    SET_GPR_U32(ctx, 31, 0x13FFFCu);
    ctx->pc = 0x13FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FFF4u;
    // 0x13fff8: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F310u, 0x13FFF4u, 0x13FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FFFCu;
}
