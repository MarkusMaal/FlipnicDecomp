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

// Function: entry_00146fa0
// Address: 0x146fa0 - 0x146fbc
void entry_00146fa0_0x146fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146fa0_0x146fa0");
#endif

    ctx->pc = 0x146fa0u;

    // 0x146fa0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x146fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x146fa4: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x146fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x146fa8: 0x24a56640  addiu       $a1, $a1, 0x6640
    ctx->pc = 0x146fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26176));
    // 0x146fac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x146facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x146fb0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x146fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x146fb4: 0xc04eb5c  jal         func_13AD70
    ctx->pc = 0x146FB4u;
    SET_GPR_U32(ctx, 31, 0x146FBCu);
    ctx->pc = 0x146FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146FB4u;
    // 0x146fb8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AD70u, 0x146FB4u, 0x146FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FBCu;
}
