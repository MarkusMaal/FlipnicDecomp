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

// Function: entry_001afffc
// Address: 0x1afffc - 0x1b0034
void entry_001afffc_0x1afffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afffc_0x1afffc");
#endif

    switch (ctx->pc) {
        case 0x1b0004u: goto label_1b0004;
        default: break;
    }

    ctx->pc = 0x1afffcu;

    // 0x1afffc: 0xc06d130  jal         func_1B44C0
    ctx->pc = 0x1AFFFCu;
    SET_GPR_U32(ctx, 31, 0x1B0004u);
    ctx->pc = 0x1B0000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFFFCu;
    // 0x1b0000: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B44C0u, 0x1AFFFCu, 0x1B0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0004u;
label_1b0004:
    // 0x1b0004: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0004u;
    {
        const bool branch_taken_0x1b0004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0004) {
            ctx->pc = 0x1B0058u;
            return;
        }
    }
    ctx->pc = 0x1B000Cu;
    // 0x1b000c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0010: 0x3c03424f  lui         $v1, 0x424F
    ctx->pc = 0x1b0010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16975 << 16));
    // 0x1b0014: 0x3463544f  ori         $v1, $v1, 0x544F
    ctx->pc = 0x1b0014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21583);
    // 0x1b0018: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b0018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b001c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b001cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b0020: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0020u;
    {
        const bool branch_taken_0x1b0020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0020) {
            ctx->pc = 0x1B0034u;
            return;
        }
    }
    ctx->pc = 0x1B0028u;
    // 0x1b0028: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b0028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1b002c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b002cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b0030: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b0030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1b0034u;
}
