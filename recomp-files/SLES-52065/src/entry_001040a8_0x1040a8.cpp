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

// Function: entry_001040a8
// Address: 0x1040a8 - 0x1040e4
void entry_001040a8_0x1040a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001040a8_0x1040a8");
#endif

    switch (ctx->pc) {
        case 0x1040b0u: goto label_1040b0;
        case 0x1040c0u: goto label_1040c0;
        default: break;
    }

    ctx->pc = 0x1040a8u;

    // 0x1040a8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1040A8u;
    SET_GPR_U32(ctx, 31, 0x1040B0u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1040A8u, 0x1040B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040B0u;
label_1040b0:
    // 0x1040b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1040B0u;
    {
        const bool branch_taken_0x1040b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040B0u;
        // 0x1040b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040b0) {
            ctx->pc = 0x1040E4u;
            return;
        }
    }
    ctx->pc = 0x1040B8u;
    // 0x1040b8: 0xc0416b8  jal         func_105AE0
    ctx->pc = 0x1040B8u;
    SET_GPR_U32(ctx, 31, 0x1040C0u);
    ctx->pc = 0x1040BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040B8u;
    // 0x1040bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AE0u, 0x1040B8u, 0x1040C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040C0u;
label_1040c0:
    // 0x1040c0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1040c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1040c4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1040c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1040c8: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x1040c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x1040cc: 0x24637f90  addiu       $v1, $v1, 0x7F90
    ctx->pc = 0x1040ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32656));
    // 0x1040d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1040d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1040d4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1040d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1040d8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1040d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1040dc: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x1040dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x1040e0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1040e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1040e4u;
}
