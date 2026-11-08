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

// Function: caseD_5
// Address: 0x1a9f80 - 0x1a9fb0
void caseD_5_0x1a9f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1a9f80");
#endif

    switch (ctx->pc) {
        case 0x1a9f8cu: goto label_1a9f8c;
        case 0x1a9fa4u: goto label_1a9fa4;
        default: break;
    }

    ctx->pc = 0x1a9f80u;

    // 0x1a9f80: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1a9f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1a9f84: 0xc054660  jal         func_151980
    ctx->pc = 0x1A9F84u;
    SET_GPR_U32(ctx, 31, 0x1A9F8Cu);
    ctx->pc = 0x1A9F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F84u;
    // 0x1a9f88: 0x26a40930  addiu       $a0, $s5, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1A9F84u, 0x1A9F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9F8Cu;
label_1a9f8c:
    // 0x1a9f8c: 0x8ea206c4  lw          $v0, 0x6C4($s5)
    ctx->pc = 0x1a9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1732)));
    // 0x1a9f90: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A9F90u;
    {
        const bool branch_taken_0x1a9f90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F90u;
        // 0x1a9f94: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f90) {
            ctx->pc = 0x1A9FB0u;
            return;
        }
    }
    ctx->pc = 0x1A9F98u;
    // 0x1a9f98: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9f9c: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1A9F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A9FA4u);
    ctx->pc = 0x1A9FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9F9Cu;
    // 0x1a9fa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1A9F9Cu, 0x1A9FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9FA4u;
label_1a9fa4:
    // 0x1a9fa4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1A9FA4u;
    {
        const bool branch_taken_0x1a9fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9fa4) {
            ctx->pc = 0x1AA0ECu;
            return;
        }
    }
    ctx->pc = 0x1A9FACu;
    // 0x1a9fac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a9facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a9fb0u;
}
