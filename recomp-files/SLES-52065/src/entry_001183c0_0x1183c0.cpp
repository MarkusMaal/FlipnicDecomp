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

// Function: entry_001183c0
// Address: 0x1183c0 - 0x118404
void entry_001183c0_0x1183c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001183c0_0x1183c0");
#endif

    switch (ctx->pc) {
        case 0x1183e8u: goto label_1183e8;
        case 0x1183f4u: goto label_1183f4;
        default: break;
    }

    ctx->pc = 0x1183c0u;

label_1183c0:
    // 0x1183c0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1183c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1183c4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1183c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1183c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1183c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1183cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1183ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1183d0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1183d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1183d4: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x1183d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1183d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1183d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1183dc: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1183dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1183e0: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1183E0u;
    SET_GPR_U32(ctx, 31, 0x1183E8u);
    ctx->pc = 0x1183E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183E0u;
    // 0x1183e4: 0x62a021  addu        $s4, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1183E0u, 0x1183E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183E8u;
label_1183e8:
    // 0x1183e8: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x1183e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1183ec: 0xc062b20  jal         func_18AC80
    ctx->pc = 0x1183ECu;
    SET_GPR_U32(ctx, 31, 0x1183F4u);
    ctx->pc = 0x1183F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1183ECu;
    // 0x1183f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AC80u, 0x1183ECu, 0x1183F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1183F4u;
label_1183f4:
    // 0x1183f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1183f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1183f8: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x1183f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1183fc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1183FCu;
    {
        const bool branch_taken_0x1183fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1183fc) {
            ctx->pc = 0x1183C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1183c0;
        }
    }
    ctx->pc = 0x118404u;
}
