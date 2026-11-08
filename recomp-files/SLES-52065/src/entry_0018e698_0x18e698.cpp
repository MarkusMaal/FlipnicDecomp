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

// Function: entry_0018e698
// Address: 0x18e698 - 0x18e6d0
void entry_0018e698_0x18e698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e698_0x18e698");
#endif

    switch (ctx->pc) {
        case 0x18e6a8u: goto label_18e6a8;
        default: break;
    }

    ctx->pc = 0x18e698u;

    // 0x18e698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18e698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e69c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18e69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6a0: 0xc06333c  jal         func_18CCF0
    ctx->pc = 0x18E6A0u;
    SET_GPR_U32(ctx, 31, 0x18E6A8u);
    ctx->pc = 0x18E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6A0u;
    // 0x18e6a4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCF0u, 0x18E6A0u, 0x18E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6A8u;
label_18e6a8:
    // 0x18e6a8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18E6A8u;
    {
        const bool branch_taken_0x18e6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e6a8) {
            ctx->pc = 0x18E6F0u;
            return;
        }
    }
    ctx->pc = 0x18E6B0u;
    // 0x18e6b0: 0x8e420484  lw          $v0, 0x484($s2)
    ctx->pc = 0x18e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
    // 0x18e6b4: 0x8e43271c  lw          $v1, 0x271C($s2)
    ctx->pc = 0x18e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10012)));
    // 0x18e6b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18e6bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E6BCu;
    {
        const bool branch_taken_0x18e6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6BCu;
        // 0x18e6c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6bc) {
            ctx->pc = 0x18E6D0u;
            return;
        }
    }
    ctx->pc = 0x18E6C4u;
    // 0x18e6c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18e6c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18E6C8u;
    {
        const bool branch_taken_0x18e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6C8u;
        // 0x18e6cc: 0xae422720  sw          $v0, 0x2720($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6c8) {
            ctx->pc = 0x18E6D4u;
            return;
        }
    }
    ctx->pc = 0x18E6D0u;
}
