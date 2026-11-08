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

// Function: entry_001b0dd4
// Address: 0x1b0dd4 - 0x1b0e0c
void entry_001b0dd4_0x1b0dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0dd4_0x1b0dd4");
#endif

    switch (ctx->pc) {
        case 0x1b0ddcu: goto label_1b0ddc;
        default: break;
    }

    ctx->pc = 0x1b0dd4u;

    // 0x1b0dd4: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1B0DD4u;
    SET_GPR_U32(ctx, 31, 0x1B0DDCu);
    ctx->pc = 0x1B0DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DD4u;
    // 0x1b0dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1B0DD4u, 0x1B0DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DDCu;
label_1b0ddc:
    // 0x1b0ddc: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0DDCu;
    {
        const bool branch_taken_0x1b0ddc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ddc) {
            ctx->pc = 0x1B0E30u;
            return;
        }
    }
    ctx->pc = 0x1B0DE4u;
    // 0x1b0de4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b0de8: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0dec: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0df0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0df4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0df8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0DF8u;
    {
        const bool branch_taken_0x1b0df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0df8) {
            ctx->pc = 0x1B0E0Cu;
            return;
        }
    }
    ctx->pc = 0x1B0E00u;
    // 0x1b0e00: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1b0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1b0e04: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0e08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0e0cu;
}
