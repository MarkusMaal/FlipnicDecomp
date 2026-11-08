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

// Function: entry_001a825c
// Address: 0x1a825c - 0x1a8290
void entry_001a825c_0x1a825c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a825c_0x1a825c");
#endif

    switch (ctx->pc) {
        case 0x1a8278u: goto label_1a8278;
        default: break;
    }

    ctx->pc = 0x1a825cu;

label_1a825c:
    // 0x1a825c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1a825cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a8260: 0x1040fffe  beqz        $v0, . + 4 + (-0x2 << 2)
    ctx->pc = 0x1A8260u;
    {
        const bool branch_taken_0x1a8260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8260) {
            ctx->pc = 0x1A825Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a825c;
        }
    }
    ctx->pc = 0x1A8268u;
    // 0x1a8268: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x1a8268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a826c: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1a826cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1a8270: 0xc057040  jal         func_15C100
    ctx->pc = 0x1A8270u;
    SET_GPR_U32(ctx, 31, 0x1A8278u);
    ctx->pc = 0x1A8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8270u;
    // 0x1a8274: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1A8270u, 0x1A8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8278u;
label_1a8278:
    // 0x1a8278: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x1a8278u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a827c: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x1a827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1a8280: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8280u;
    {
        const bool branch_taken_0x1a8280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a8280) {
            ctx->pc = 0x1A8290u;
            return;
        }
    }
    ctx->pc = 0x1A8288u;
    // 0x1a8288: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1A8288u;
    {
        const bool branch_taken_0x1a8288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8288) {
            ctx->pc = 0x1A839Cu;
            return;
        }
    }
    ctx->pc = 0x1A8290u;
}
