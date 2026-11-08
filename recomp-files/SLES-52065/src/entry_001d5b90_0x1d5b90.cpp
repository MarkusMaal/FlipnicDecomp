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

// Function: entry_001d5b90
// Address: 0x1d5b90 - 0x1d5bd8
void entry_001d5b90_0x1d5b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5b90_0x1d5b90");
#endif

    switch (ctx->pc) {
        case 0x1d5bc4u: goto label_1d5bc4;
        default: break;
    }

    ctx->pc = 0x1d5b90u;

    // 0x1d5b90: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5b94: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5b98: 0x2833818  mult        $a3, $s4, $v1
    ctx->pc = 0x1d5b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d5b9c: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5ba0: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1d5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d5ba4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d5ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5ba8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1d5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d5bac: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d5bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d5bb0: 0x14640169  bne         $v1, $a0, . + 4 + (0x169 << 2)
    ctx->pc = 0x1D5BB0u;
    {
        const bool branch_taken_0x1d5bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d5bb0) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5BB8u;
    // 0x1d5bb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5bbc: 0xc0772f8  jal         func_1DCBE0
    ctx->pc = 0x1D5BBCu;
    SET_GPR_U32(ctx, 31, 0x1D5BC4u);
    ctx->pc = 0x1D5BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BBCu;
    // 0x1d5bc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE0u, 0x1D5BBCu, 0x1D5BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BC4u;
label_1d5bc4:
    // 0x1d5bc4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d5bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5bc8: 0x6000163  bltz        $s0, . + 4 + (0x163 << 2)
    ctx->pc = 0x1D5BC8u;
    {
        const bool branch_taken_0x1d5bc8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BC8u;
        // 0x1d5bcc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5bc8) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5BD0u;
    // 0x1d5bd0: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d5bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d5bd4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1d5bd8u;
}
