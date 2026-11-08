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

// Function: entry_001175c0
// Address: 0x1175c0 - 0x1175fc
void entry_001175c0_0x1175c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001175c0_0x1175c0");
#endif

    switch (ctx->pc) {
        case 0x1175ccu: goto label_1175cc;
        default: break;
    }

    ctx->pc = 0x1175c0u;

label_1175c0:
    // 0x1175c0: 0x8f828318  lw          $v0, -0x7CE8($gp)
    ctx->pc = 0x1175c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
    // 0x1175c4: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1175C4u;
    SET_GPR_U32(ctx, 31, 0x1175CCu);
    ctx->pc = 0x1175C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175C4u;
    // 0x1175c8: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C3A0u, 0x1175C4u, 0x1175CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175CCu;
label_1175cc:
    // 0x1175cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1175ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1175d0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1175d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1175d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1175D4u;
    {
        const bool branch_taken_0x1175d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1175D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175D4u;
        // 0x1175d8: 0x26520078  addiu       $s2, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175d4) {
            ctx->pc = 0x1175C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1175c0;
        }
    }
    ctx->pc = 0x1175DCu;
    // 0x1175dc: 0x8f838348  lw          $v1, -0x7CB8($gp)
    ctx->pc = 0x1175dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935368)));
    // 0x1175e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1175e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1175e4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1175E4u;
    {
        const bool branch_taken_0x1175e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1175E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175E4u;
        // 0x1175e8: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175e4) {
            ctx->pc = 0x11760Cu;
            return;
        }
    }
    ctx->pc = 0x1175ECu;
    // 0x1175ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1175ECu;
    {
        const bool branch_taken_0x1175ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175ECu;
        // 0x1175f0: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175ec) {
            ctx->pc = 0x1175FCu;
            return;
        }
    }
    ctx->pc = 0x1175F4u;
    // 0x1175f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1175F4u;
    {
        const bool branch_taken_0x1175f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175F4u;
        // 0x1175f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175f4) {
            ctx->pc = 0x117618u;
            return;
        }
    }
    ctx->pc = 0x1175FCu;
}
