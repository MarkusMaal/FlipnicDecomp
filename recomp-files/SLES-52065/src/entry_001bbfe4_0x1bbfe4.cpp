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

// Function: entry_001bbfe4
// Address: 0x1bbfe4 - 0x1bc020
void entry_001bbfe4_0x1bbfe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbfe4_0x1bbfe4");
#endif

    switch (ctx->pc) {
        case 0x1bc000u: goto label_1bc000;
        default: break;
    }

    ctx->pc = 0x1bbfe4u;

    // 0x1bbfe4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1bbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bbfe8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1bbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1bbfec: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1bbfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bbff0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x1bbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bbff4: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x1bbff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1bbff8: 0xc07fe2a  jal         func_1FF8A8
    ctx->pc = 0x1BBFF8u;
    SET_GPR_U32(ctx, 31, 0x1BC000u);
    ctx->pc = 0x1BBFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFF8u;
    // 0x1bbffc: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF8A8u, 0x1BBFF8u, 0x1BC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC000u;
label_1bc000:
    // 0x1bc000: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC000u;
    {
        const bool branch_taken_0x1bc000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc000) {
            ctx->pc = 0x1BC020u;
            return;
        }
    }
    ctx->pc = 0x1BC008u;
    // 0x1bc008: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bc008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bc00c: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x1bc00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x1bc010: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bc010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc014: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bc014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc018: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1BC018u;
    SET_GPR_U32(ctx, 31, 0x1BC020u);
    ctx->pc = 0x1BC01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC018u;
    // 0x1bc01c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1BC018u, 0x1BC020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC020u;
}
