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

// Function: entry_001d29ac
// Address: 0x1d29ac - 0x1d2a00
void entry_001d29ac_0x1d29ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d29ac_0x1d29ac");
#endif

    switch (ctx->pc) {
        case 0x1d29bcu: goto label_1d29bc;
        default: break;
    }

    ctx->pc = 0x1d29acu;

    // 0x1d29ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d29acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d29b0: 0x8c250340  lw          $a1, 0x340($at)
    ctx->pc = 0x1d29b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x370340u));
    // 0x1d29b4: 0xc074b7c  jal         func_1D2DF0
    ctx->pc = 0x1D29B4u;
    SET_GPR_U32(ctx, 31, 0x1D29BCu);
    ctx->pc = 0x1D29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29B4u;
    // 0x1d29b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2DF0u, 0x1D29B4u, 0x1D29BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29BCu;
label_1d29bc:
    // 0x1d29bc: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1D29BCu;
    {
        const bool branch_taken_0x1d29bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29BCu;
        // 0x1d29c0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29bc) {
            ctx->pc = 0x1D2B2Cu;
            return;
        }
    }
    ctx->pc = 0x1D29C4u;
    // 0x1d29c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d29c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d29c8: 0x8c260340  lw          $a2, 0x340($at)
    ctx->pc = 0x1d29c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 832)));
    // 0x1d29cc: 0x10c5004e  beq         $a2, $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1D29CCu;
    {
        const bool branch_taken_0x1d29cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29CCu;
        // 0x1d29d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29cc) {
            ctx->pc = 0x1D2B08u;
            return;
        }
    }
    ctx->pc = 0x1D29D4u;
    // 0x1d29d4: 0x10c30040  beq         $a2, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1D29D4u;
    {
        const bool branch_taken_0x1d29d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29D4u;
        // 0x1d29d8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29d4) {
            ctx->pc = 0x1D2AD8u;
            return;
        }
    }
    ctx->pc = 0x1D29DCu;
    // 0x1d29dc: 0x10c4002f  beq         $a2, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D29DCu;
    {
        const bool branch_taken_0x1d29dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29DCu;
        // 0x1d29e0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29dc) {
            ctx->pc = 0x1D2A9Cu;
            return;
        }
    }
    ctx->pc = 0x1D29E4u;
    // 0x1d29e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d29e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d29e8: 0x10c7001d  beq         $a2, $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D29E8u;
    {
        const bool branch_taken_0x1d29e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x1d29e8) {
            ctx->pc = 0x1D2A60u;
            return;
        }
    }
    ctx->pc = 0x1D29F0u;
    // 0x1d29f0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D29F0u;
    {
        const bool branch_taken_0x1d29f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d29f0) {
            ctx->pc = 0x1D2A00u;
            return;
        }
    }
    ctx->pc = 0x1D29F8u;
    // 0x1d29f8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1D29F8u;
    {
        const bool branch_taken_0x1d29f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29F8u;
        // 0x1d29fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29f8) {
            ctx->pc = 0x1D2B30u;
            return;
        }
    }
    ctx->pc = 0x1D2A00u;
}
