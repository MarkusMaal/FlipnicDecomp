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

// Function: entry_001d5c88
// Address: 0x1d5c88 - 0x1d5cc8
void entry_001d5c88_0x1d5c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c88_0x1d5c88");
#endif

    switch (ctx->pc) {
        case 0x1d5cb0u: goto label_1d5cb0;
        default: break;
    }

    ctx->pc = 0x1d5c88u;

    // 0x1d5c88: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5c8c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5c90: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d5c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5c94: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5c98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c9c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1d5c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5ca4: 0xacb20038  sw          $s2, 0x38($a1)
    ctx->pc = 0x1d5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 18));
    // 0x1d5ca8: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5CA8u;
    SET_GPR_U32(ctx, 31, 0x1D5CB0u);
    ctx->pc = 0x1D5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA8u;
    // 0x1d5cac: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5CA8u, 0x1D5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CB0u;
label_1d5cb0:
    // 0x1d5cb0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5cb4: 0x6000128  bltz        $s0, . + 4 + (0x128 << 2)
    ctx->pc = 0x1D5CB4u;
    {
        const bool branch_taken_0x1d5cb4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CB4u;
        // 0x1d5cb8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cb4) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5CBCu;
    // 0x1d5cbc: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5cc0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5cc4: 0x0  nop
    ctx->pc = 0x1d5cc4u;
    // NOP
    ctx->pc = 0x1d5cc8u;
}
