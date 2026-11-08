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

// Function: caseD_21
// Address: 0x1c2bb8 - 0x1c2c00
void caseD_21_0x1c2bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_21_0x1c2bb8");
#endif

    switch (ctx->pc) {
        case 0x1c2bd4u: goto label_1c2bd4;
        case 0x1c2becu: goto label_1c2bec;
        default: break;
    }

    ctx->pc = 0x1c2bb8u;

    // 0x1c2bb8: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1c2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x1c2bbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2bc0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2BC0u;
    {
        const bool branch_taken_0x1c2bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BC0u;
        // 0x1c2bc4: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bc0) {
            ctx->pc = 0x1C2C0Cu;
            return;
        }
    }
    ctx->pc = 0x1C2BC8u;
    // 0x1c2bc8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2bcc: 0xc0731a0  jal         func_1CC680
    ctx->pc = 0x1C2BCCu;
    SET_GPR_U32(ctx, 31, 0x1C2BD4u);
    ctx->pc = 0x1C2BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BCCu;
    // 0x1c2bd0: 0x8c24f5d0  lw          $a0, -0xA30($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC680u, 0x1C2BCCu, 0x1C2BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BD4u;
label_1c2bd4:
    // 0x1c2bd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2BD4u;
    {
        const bool branch_taken_0x1c2bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BD4u;
        // 0x1c2bd8: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bd4) {
            ctx->pc = 0x1C2C00u;
            return;
        }
    }
    ctx->pc = 0x1C2BDCu;
    // 0x1c2bdc: 0x8c24ca84  lw          $a0, -0x357C($at)
    ctx->pc = 0x1c2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953604)));
    // 0x1c2be0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c2be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c2be4: 0xc06d024  jal         func_1B4090
    ctx->pc = 0x1C2BE4u;
    SET_GPR_U32(ctx, 31, 0x1C2BECu);
    ctx->pc = 0x1C2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BE4u;
    // 0x1c2be8: 0x8c25f5d0  lw          $a1, -0xA30($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4090u, 0x1C2BE4u, 0x1C2BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BECu;
label_1c2bec:
    // 0x1c2bec: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1c2becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c2bf0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c2bf4: 0xae230248  sw          $v1, 0x248($s1)
    ctx->pc = 0x1c2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 3));
    // 0x1c2bf8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C2BF8u;
    {
        const bool branch_taken_0x1c2bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BF8u;
        // 0x1c2bfc: 0xae22024c  sw          $v0, 0x24C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bf8) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2C00u;
}
