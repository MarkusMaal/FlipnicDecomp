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

// Function: entry_001027a4
// Address: 0x1027a4 - 0x1027e8
void entry_001027a4_0x1027a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001027a4_0x1027a4");
#endif

    switch (ctx->pc) {
        case 0x1027ccu: goto label_1027cc;
        case 0x1027d8u: goto label_1027d8;
        default: break;
    }

    ctx->pc = 0x1027a4u;

label_1027a4:
    // 0x1027a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1027a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1027a8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1027a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1027ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1027acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1027b0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1027b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1027b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1027b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1027b8: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1027b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1027bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1027bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1027c0: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x1027c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1027c4: 0xc05fe4c  jal         func_17F930
    ctx->pc = 0x1027C4u;
    SET_GPR_U32(ctx, 31, 0x1027CCu);
    ctx->pc = 0x1027C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027C4u;
    // 0x1027c8: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x1027C4u, 0x1027CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027CCu;
label_1027cc:
    // 0x1027cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1027ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027d0: 0xc05fe6c  jal         func_17F9B0
    ctx->pc = 0x1027D0u;
    SET_GPR_U32(ctx, 31, 0x1027D8u);
    ctx->pc = 0x1027D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1027D0u;
    // 0x1027d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9B0u, 0x1027D0u, 0x1027D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1027D8u;
label_1027d8:
    // 0x1027d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1027d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1027dc: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1027dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1027e0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1027E0u;
    {
        const bool branch_taken_0x1027e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1027e0) {
            ctx->pc = 0x1027A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1027a4;
        }
    }
    ctx->pc = 0x1027E8u;
}
