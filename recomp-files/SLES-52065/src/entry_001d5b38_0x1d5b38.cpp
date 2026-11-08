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

// Function: entry_001d5b38
// Address: 0x1d5b38 - 0x1d5b70
void entry_001d5b38_0x1d5b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b38_0x1d5b38");
#endif

    switch (ctx->pc) {
        case 0x1d5b5cu: goto label_1d5b5c;
        default: break;
    }

    ctx->pc = 0x1d5b38u;

    // 0x1d5b38: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5b3c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x1d5b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d5b40: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d5b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b48: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1d5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d5b4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5b50: 0xacb2002c  sw          $s2, 0x2C($a1)
    ctx->pc = 0x1d5b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 18));
    // 0x1d5b54: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5B54u;
    SET_GPR_U32(ctx, 31, 0x1D5B5Cu);
    ctx->pc = 0x1D5B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B54u;
    // 0x1d5b58: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5B54u, 0x1D5B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B5Cu;
label_1d5b5c:
    // 0x1d5b5c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5b60: 0x600017d  bltz        $s0, . + 4 + (0x17D << 2)
    ctx->pc = 0x1D5B60u;
    {
        const bool branch_taken_0x1d5b60 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B60u;
        // 0x1d5b64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b60) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5B68u;
    // 0x1d5b68: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5b68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5b6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1d5b70u;
}
