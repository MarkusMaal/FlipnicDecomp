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

// Function: entry_001336cc
// Address: 0x1336cc - 0x133708
void entry_001336cc_0x1336cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001336cc_0x1336cc");
#endif

    switch (ctx->pc) {
        case 0x1336d8u: goto label_1336d8;
        case 0x1336f0u: goto label_1336f0;
        case 0x1336f8u: goto label_1336f8;
        case 0x133700u: goto label_133700;
        default: break;
    }

    ctx->pc = 0x1336ccu;

label_1336cc:
    // 0x1336cc: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1336ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1336d0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1336D0u;
    SET_GPR_U32(ctx, 31, 0x1336D8u);
    ctx->pc = 0x1336D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336D0u;
    // 0x1336d4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1336D0u, 0x1336D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336D8u;
label_1336d8:
    // 0x1336d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1336d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1336dc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1336dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1336e0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1336E0u;
    {
        const bool branch_taken_0x1336e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1336E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1336E0u;
        // 0x1336e4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336e0) {
            ctx->pc = 0x1336CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1336cc;
        }
    }
    ctx->pc = 0x1336E8u;
    // 0x1336e8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1336E8u;
    SET_GPR_U32(ctx, 31, 0x1336F0u);
    ctx->pc = 0x1336ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336E8u;
    // 0x1336ec: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1336E8u, 0x1336F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336F0u;
label_1336f0:
    // 0x1336f0: 0xc04018c  jal         func_100630
    ctx->pc = 0x1336F0u;
    SET_GPR_U32(ctx, 31, 0x1336F8u);
    ctx->pc = 0x1336F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336F0u;
    // 0x1336f4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1336F0u, 0x1336F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1336F8u;
label_1336f8:
    // 0x1336f8: 0xc04018c  jal         func_100630
    ctx->pc = 0x1336F8u;
    SET_GPR_U32(ctx, 31, 0x133700u);
    ctx->pc = 0x1336FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1336F8u;
    // 0x1336fc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x1336F8u, 0x133700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133700u;
label_133700:
    // 0x133700: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x133700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133704: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x133704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133708u;
}
