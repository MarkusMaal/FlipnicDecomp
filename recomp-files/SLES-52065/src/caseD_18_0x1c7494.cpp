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

// Function: caseD_18
// Address: 0x1c7494 - 0x1c74d4
void caseD_18_0x1c7494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x1c7494");
#endif

    switch (ctx->pc) {
        case 0x1c74a0u: goto label_1c74a0;
        case 0x1c74acu: goto label_1c74ac;
        case 0x1c74b8u: goto label_1c74b8;
        default: break;
    }

    ctx->pc = 0x1c7494u;

    // 0x1c7494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7498: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7498u;
    SET_GPR_U32(ctx, 31, 0x1C74A0u);
    ctx->pc = 0x1C749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7498u;
    // 0x1c749c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7498u, 0x1C74A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74A0u;
label_1c74a0:
    // 0x1c74a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c74a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74a4: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C74A4u;
    SET_GPR_U32(ctx, 31, 0x1C74ACu);
    ctx->pc = 0x1C74A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74A4u;
    // 0x1c74a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C74A4u, 0x1C74ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74ACu;
label_1c74ac:
    // 0x1c74ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c74acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74b0: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C74B0u;
    SET_GPR_U32(ctx, 31, 0x1C74B8u);
    ctx->pc = 0x1C74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74B0u;
    // 0x1c74b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C74B0u, 0x1C74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74B8u;
label_1c74b8:
    // 0x1c74b8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1c74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1c74bc: 0x2841001d  slti        $at, $v0, 0x1D
    ctx->pc = 0x1c74bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1c74c0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C74C0u;
    {
        const bool branch_taken_0x1c74c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74C0u;
        // 0x1c74c4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74c0) {
            ctx->pc = 0x1C74D4u;
            return;
        }
    }
    ctx->pc = 0x1C74C8u;
    // 0x1c74c8: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1c74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c74cc: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1C74CCu;
    {
        const bool branch_taken_0x1c74cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74CCu;
        // 0x1c74d0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74cc) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C74D4u;
}
