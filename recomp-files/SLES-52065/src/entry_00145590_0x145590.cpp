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

// Function: entry_00145590
// Address: 0x145590 - 0x1455c0
void entry_00145590_0x145590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145590_0x145590");
#endif

    ctx->pc = 0x145590u;

    // 0x145590: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x145590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x145594: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x145594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145598: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x145598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14559c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x14559cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1455a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1455a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1455a4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1455a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1455a8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1455a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1455ac: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1455ACu;
    {
        const bool branch_taken_0x1455ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1455B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455ACu;
        // 0x1455b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455ac) {
            ctx->pc = 0x1455C0u;
            return;
        }
    }
    ctx->pc = 0x1455B4u;
    // 0x1455b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1455b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455b8: 0xc051660  jal         func_145980
    ctx->pc = 0x1455B8u;
    SET_GPR_U32(ctx, 31, 0x1455C0u);
    ctx->pc = 0x1455BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1455B8u;
    // 0x1455bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145980u, 0x1455B8u, 0x1455C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455C0u;
}
