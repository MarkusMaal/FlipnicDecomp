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

// Function: entry_001ebd70
// Address: 0x1ebd70 - 0x1ebd9c
void entry_001ebd70_0x1ebd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebd70_0x1ebd70");
#endif

    switch (ctx->pc) {
        case 0x1ebd78u: goto label_1ebd78;
        case 0x1ebd8cu: goto label_1ebd8c;
        default: break;
    }

    ctx->pc = 0x1ebd70u;

    // 0x1ebd70: 0xc07ad80  jal         func_1EB600
    ctx->pc = 0x1EBD70u;
    SET_GPR_U32(ctx, 31, 0x1EBD78u);
    ctx->pc = 0x1EBD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBD70u;
    // 0x1ebd74: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB600u, 0x1EBD70u, 0x1EBD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD78u;
label_1ebd78:
    // 0x1ebd78: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1ebd78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ebd7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EBD7Cu;
    {
        const bool branch_taken_0x1ebd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD7Cu;
        // 0x1ebd80: 0x8e42a3b4  lw          $v0, -0x5C4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd7c) {
            ctx->pc = 0x1EBDA8u;
            return;
        }
    }
    ctx->pc = 0x1EBD84u;
    // 0x1ebd84: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1EBD84u;
    SET_GPR_U32(ctx, 31, 0x1EBD8Cu);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1EBD84u, 0x1EBD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD8Cu;
label_1ebd8c:
    // 0x1ebd8c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1ebd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ebd90: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBD90u;
    {
        const bool branch_taken_0x1ebd90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBD90u;
        // 0x1ebd94: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebd90) {
            ctx->pc = 0x1EBD9Cu;
            return;
        }
    }
    ctx->pc = 0x1EBD98u;
    // 0x1ebd98: 0x42000038  ei
    ctx->pc = 0x1ebd98u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x1ebd9cu;
}
