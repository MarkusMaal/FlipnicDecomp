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

// Function: entry_00104ef8
// Address: 0x104ef8 - 0x104f2c
void entry_00104ef8_0x104ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ef8_0x104ef8");
#endif

    switch (ctx->pc) {
        case 0x104f00u: goto label_104f00;
        default: break;
    }

    ctx->pc = 0x104ef8u;

label_104ef8:
    // 0x104ef8: 0xc05eaf8  jal         func_17ABE0
    ctx->pc = 0x104EF8u;
    SET_GPR_U32(ctx, 31, 0x104F00u);
    ctx->pc = 0x104EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104EF8u;
    // 0x104efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABE0u, 0x104EF8u, 0x104F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F00u;
label_104f00:
    // 0x104f00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x104f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104f04: 0x26100410  addiu       $s0, $s0, 0x410
    ctx->pc = 0x104f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x104f08: 0x24622300  addiu       $v0, $v1, 0x2300
    ctx->pc = 0x104f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8960));
    // 0x104f0c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x104f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104f10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x104F10u;
    {
        const bool branch_taken_0x104f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104f10) {
            ctx->pc = 0x104EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104ef8;
        }
    }
    ctx->pc = 0x104F18u;
    // 0x104f18: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104f1c: 0x24428290  addiu       $v0, $v0, -0x7D70
    ctx->pc = 0x104f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x104f20: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x104f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x104f24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x104f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x104f28: 0x24502340  addiu       $s0, $v0, 0x2340
    ctx->pc = 0x104f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9024));
    ctx->pc = 0x104f2cu;
}
