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

// Function: entry_001ca9c0
// Address: 0x1ca9c0 - 0x1caa20
void entry_001ca9c0_0x1ca9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca9c0_0x1ca9c0");
#endif

    switch (ctx->pc) {
        case 0x1ca9d0u: goto label_1ca9d0;
        case 0x1ca9e4u: goto label_1ca9e4;
        case 0x1ca9f4u: goto label_1ca9f4;
        case 0x1ca9fcu: goto label_1ca9fc;
        default: break;
    }

    ctx->pc = 0x1ca9c0u;

label_1ca9c0:
    // 0x1ca9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ca9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca9c8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA9C8u;
    SET_GPR_U32(ctx, 31, 0x1CA9D0u);
    ctx->pc = 0x1CA9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9C8u;
    // 0x1ca9cc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA9C8u, 0x1CA9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9D0u;
label_1ca9d0:
    // 0x1ca9d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9d4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1ca9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1ca9d8: 0x24427920  addiu       $v0, $v0, 0x7920
    ctx->pc = 0x1ca9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31008));
    // 0x1ca9dc: 0xc06e454  jal         func_1B9150
    ctx->pc = 0x1CA9DCu;
    SET_GPR_U32(ctx, 31, 0x1CA9E4u);
    ctx->pc = 0x1CA9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9DCu;
    // 0x1ca9e0: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9150u, 0x1CA9DCu, 0x1CA9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9E4u;
label_1ca9e4:
    // 0x1ca9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca9e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ca9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca9ec: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CA9ECu;
    SET_GPR_U32(ctx, 31, 0x1CA9F4u);
    ctx->pc = 0x1CA9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9ECu;
    // 0x1ca9f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CA9ECu, 0x1CA9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9F4u;
label_1ca9f4:
    // 0x1ca9f4: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1CA9F4u;
    SET_GPR_U32(ctx, 31, 0x1CA9FCu);
    ctx->pc = 0x1CA9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9F4u;
    // 0x1ca9f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1CA9F4u, 0x1CA9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9FCu;
label_1ca9fc:
    // 0x1ca9fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ca9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1caa00: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x1caa00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1caa04: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CAA04u;
    {
        const bool branch_taken_0x1caa04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA04u;
        // 0x1caa08: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa04) {
            ctx->pc = 0x1CA9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca9c0;
        }
    }
    ctx->pc = 0x1CAA0Cu;
    // 0x1caa0c: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x1caa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1caa10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caa14: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CAA14u;
    {
        const bool branch_taken_0x1caa14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1caa14) {
            ctx->pc = 0x1CAA20u;
            return;
        }
    }
    ctx->pc = 0x1CAA1Cu;
    // 0x1caa1c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1caa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    ctx->pc = 0x1caa20u;
}
