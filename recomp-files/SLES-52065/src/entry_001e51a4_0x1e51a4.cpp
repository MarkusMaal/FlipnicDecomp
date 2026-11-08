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

// Function: entry_001e51a4
// Address: 0x1e51a4 - 0x1e51c4
void entry_001e51a4_0x1e51a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e51a4_0x1e51a4");
#endif

    switch (ctx->pc) {
        case 0x1e51bcu: goto label_1e51bc;
        default: break;
    }

    ctx->pc = 0x1e51a4u;

    // 0x1e51a4: 0x92020051  lbu         $v0, 0x51($s0)
    ctx->pc = 0x1e51a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 81)));
    // 0x1e51a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E51A8u;
    {
        const bool branch_taken_0x1e51a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51A8u;
        // 0x1e51ac: 0x602826  xor         $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51a8) {
            ctx->pc = 0x1E51C4u;
            return;
        }
    }
    ctx->pc = 0x1E51B0u;
    // 0x1e51b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e51b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51b4: 0xc079544  jal         func_1E5510
    ctx->pc = 0x1E51B4u;
    SET_GPR_U32(ctx, 31, 0x1E51BCu);
    ctx->pc = 0x1E51B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E51B4u;
    // 0x1e51b8: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5510u, 0x1E51B4u, 0x1E51BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51BCu;
label_1e51bc:
    // 0x1e51bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1E51BCu;
    {
        const bool branch_taken_0x1e51bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51BCu;
        // 0x1e51c0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51bc) {
            ctx->pc = 0x1E5248u;
            return;
        }
    }
    ctx->pc = 0x1E51C4u;
}
