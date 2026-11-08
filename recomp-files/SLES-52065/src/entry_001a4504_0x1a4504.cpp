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

// Function: entry_001a4504
// Address: 0x1a4504 - 0x1a453c
void entry_001a4504_0x1a4504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4504_0x1a4504");
#endif

    switch (ctx->pc) {
        case 0x1a4518u: goto label_1a4518;
        case 0x1a4534u: goto label_1a4534;
        default: break;
    }

    ctx->pc = 0x1a4504u;

label_1a4504:
    // 0x1a4504: 0x234a821  addu        $s5, $s1, $s4
    ctx->pc = 0x1a4504u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1a4508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a450c: 0x8ea50450  lw          $a1, 0x450($s5)
    ctx->pc = 0x1a450cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1104)));
    // 0x1a4510: 0xc064c20  jal         func_193080
    ctx->pc = 0x1A4510u;
    SET_GPR_U32(ctx, 31, 0x1A4518u);
    ctx->pc = 0x1A4514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4510u;
    // 0x1a4514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x1A4510u, 0x1A4518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4518u;
label_1a4518:
    // 0x1a4518: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a4518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a451c: 0xaea004d0  sw          $zero, 0x4D0($s5)
    ctx->pc = 0x1a451cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1232), GPR_U32(ctx, 0));
    // 0x1a4520: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1a4520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a4524: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A4524u;
    {
        const bool branch_taken_0x1a4524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4524u;
        // 0x1a4528: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4524) {
            ctx->pc = 0x1A4504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4504;
        }
    }
    ctx->pc = 0x1A452Cu;
    // 0x1a452c: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1A452Cu;
    SET_GPR_U32(ctx, 31, 0x1A4534u);
    ctx->pc = 0x1A4530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A452Cu;
    // 0x1a4530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1A452Cu, 0x1A4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4534u;
label_1a4534:
    // 0x1a4534: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x1A4534u;
    {
        const bool branch_taken_0x1a4534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4534) {
            ctx->pc = 0x1A486Cu;
            return;
        }
    }
    ctx->pc = 0x1A453Cu;
}
