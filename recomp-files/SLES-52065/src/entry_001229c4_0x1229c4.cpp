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

// Function: entry_001229c4
// Address: 0x1229c4 - 0x122a10
void entry_001229c4_0x1229c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001229c4_0x1229c4");
#endif

    switch (ctx->pc) {
        case 0x1229ccu: goto label_1229cc;
        case 0x1229d8u: goto label_1229d8;
        case 0x1229e4u: goto label_1229e4;
        case 0x1229fcu: goto label_1229fc;
        default: break;
    }

    ctx->pc = 0x1229c4u;

    // 0x1229c4: 0xc048880  jal         func_122200
    ctx->pc = 0x1229C4u;
    SET_GPR_U32(ctx, 31, 0x1229CCu);
    ctx->pc = 0x1229C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229C4u;
    // 0x1229c8: 0x260b82d  daddu       $s7, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1229C4u, 0x1229CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229CCu;
label_1229cc:
    // 0x1229cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1229ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229d0: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x1229D0u;
    SET_GPR_U32(ctx, 31, 0x1229D8u);
    ctx->pc = 0x1229D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229D0u;
    // 0x1229d4: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x1229D0u, 0x1229D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229D8u;
label_1229d8:
    // 0x1229d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1229d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229dc: 0xc048880  jal         func_122200
    ctx->pc = 0x1229DCu;
    SET_GPR_U32(ctx, 31, 0x1229E4u);
    ctx->pc = 0x1229E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229DCu;
    // 0x1229e0: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1229DCu, 0x1229E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229E4u;
label_1229e4:
    // 0x1229e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1229e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1229e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1229ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1229f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229f4: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1229F4u;
    SET_GPR_U32(ctx, 31, 0x1229FCu);
    ctx->pc = 0x1229F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229F4u;
    // 0x1229f8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1229F4u, 0x1229FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229FCu;
label_1229fc:
    // 0x1229fc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1229FCu;
    {
        const bool branch_taken_0x1229fc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1229fc) {
            ctx->pc = 0x122A10u;
            return;
        }
    }
    ctx->pc = 0x122A04u;
    // 0x122a04: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x122a04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x122a08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x122A08u;
    {
        const bool branch_taken_0x122a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122A08u;
        // 0x122a0c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122a08) {
            ctx->pc = 0x122A20u;
            return;
        }
    }
    ctx->pc = 0x122A10u;
}
