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

// Function: entry_00168f50
// Address: 0x168f50 - 0x168fa0
void entry_00168f50_0x168f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168f50_0x168f50");
#endif

    switch (ctx->pc) {
        case 0x168f8cu: goto label_168f8c;
        case 0x168f98u: goto label_168f98;
        default: break;
    }

    ctx->pc = 0x168f50u;

    // 0x168f50: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x168f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x168f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x168f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x168f58: 0xae020230  sw          $v0, 0x230($s0)
    ctx->pc = 0x168f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    // 0x168f5c: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x168f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x168f60: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x168f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x168f64: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x168f64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168f68: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x168F68u;
    {
        const bool branch_taken_0x168f68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F68u;
        // 0x168f6c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f68) {
            ctx->pc = 0x16900Cu;
            return;
        }
    }
    ctx->pc = 0x168F70u;
    // 0x168f70: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x168f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x168f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f78: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x168f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x168f7c: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x168f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x168f80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x168f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x168f84: 0xc046744  jal         func_119D10
    ctx->pc = 0x168F84u;
    SET_GPR_U32(ctx, 31, 0x168F8Cu);
    ctx->pc = 0x168F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F84u;
    // 0x168f88: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D10u, 0x168F84u, 0x168F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F8Cu;
label_168f8c:
    // 0x168f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f90: 0xc042570  jal         func_1095C0
    ctx->pc = 0x168F90u;
    SET_GPR_U32(ctx, 31, 0x168F98u);
    ctx->pc = 0x168F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F90u;
    // 0x168f94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x168F90u, 0x168F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F98u;
label_168f98:
    // 0x168f98: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x168F98u;
    {
        const bool branch_taken_0x168f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F98u;
        // 0x168f9c: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f98) {
            ctx->pc = 0x169058u;
            return;
        }
    }
    ctx->pc = 0x168FA0u;
}
