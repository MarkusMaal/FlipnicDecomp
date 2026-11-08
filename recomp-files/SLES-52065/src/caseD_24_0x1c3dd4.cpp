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

// Function: caseD_24
// Address: 0x1c3dd4 - 0x1c3e14
void caseD_24_0x1c3dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_24_0x1c3dd4");
#endif

    switch (ctx->pc) {
        case 0x1c3de0u: goto label_1c3de0;
        case 0x1c3decu: goto label_1c3dec;
        case 0x1c3df8u: goto label_1c3df8;
        default: break;
    }

    ctx->pc = 0x1c3dd4u;

    // 0x1c3dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3dd8: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3DD8u;
    SET_GPR_U32(ctx, 31, 0x1C3DE0u);
    ctx->pc = 0x1C3DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DD8u;
    // 0x1c3ddc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3DD8u, 0x1C3DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DE0u;
label_1c3de0:
    // 0x1c3de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3de4: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3DE4u;
    SET_GPR_U32(ctx, 31, 0x1C3DECu);
    ctx->pc = 0x1C3DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DE4u;
    // 0x1c3de8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3DE4u, 0x1C3DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DECu;
label_1c3dec:
    // 0x1c3dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3df0: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3DF0u;
    SET_GPR_U32(ctx, 31, 0x1C3DF8u);
    ctx->pc = 0x1C3DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DF0u;
    // 0x1c3df4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3DF0u, 0x1C3DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DF8u;
label_1c3df8:
    // 0x1c3df8: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x1c3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1c3dfc: 0x2841001d  slti        $at, $v0, 0x1D
    ctx->pc = 0x1c3dfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1c3e00: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3E00u;
    {
        const bool branch_taken_0x1c3e00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E00u;
        // 0x1c3e04: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e00) {
            ctx->pc = 0x1C3E14u;
            return;
        }
    }
    ctx->pc = 0x1C3E08u;
    // 0x1c3e08: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c3e0c: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x1C3E0Cu;
    {
        const bool branch_taken_0x1c3e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E0Cu;
        // 0x1c3e10: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e0c) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3E14u;
}
