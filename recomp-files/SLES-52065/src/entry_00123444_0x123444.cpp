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

// Function: entry_00123444
// Address: 0x123444 - 0x123478
void entry_00123444_0x123444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123444_0x123444");
#endif

    switch (ctx->pc) {
        case 0x123470u: goto label_123470;
        default: break;
    }

    ctx->pc = 0x123444u;

    // 0x123444: 0x0  nop
    ctx->pc = 0x123444u;
    // NOP
    // 0x123448: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x123448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12344c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x12344cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123450: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x123450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x123454: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x123454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123458: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x123458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12345c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x12345cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x123460: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x123460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123464: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x123464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x123468: 0xc048e74  jal         func_1239D0
    ctx->pc = 0x123468u;
    SET_GPR_U32(ctx, 31, 0x123470u);
    ctx->pc = 0x12346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123468u;
    // 0x12346c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x123468u, 0x123470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123470u;
label_123470:
    // 0x123470: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x123470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123474: 0x0  nop
    ctx->pc = 0x123474u;
    // NOP
    ctx->pc = 0x123478u;
}
