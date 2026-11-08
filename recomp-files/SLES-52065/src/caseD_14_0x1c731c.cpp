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

// Function: caseD_14
// Address: 0x1c731c - 0x1c736c
void caseD_14_0x1c731c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x1c731c");
#endif

    switch (ctx->pc) {
        case 0x1c7328u: goto label_1c7328;
        case 0x1c7334u: goto label_1c7334;
        case 0x1c7340u: goto label_1c7340;
        default: break;
    }

    ctx->pc = 0x1c731cu;

    // 0x1c731c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7320: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7320u;
    SET_GPR_U32(ctx, 31, 0x1C7328u);
    ctx->pc = 0x1C7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7320u;
    // 0x1c7324: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7320u, 0x1C7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7328u;
label_1c7328:
    // 0x1c7328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c732c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C732Cu;
    SET_GPR_U32(ctx, 31, 0x1C7334u);
    ctx->pc = 0x1C7330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C732Cu;
    // 0x1c7330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C732Cu, 0x1C7334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7334u;
label_1c7334:
    // 0x1c7334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7338: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7338u;
    SET_GPR_U32(ctx, 31, 0x1C7340u);
    ctx->pc = 0x1C733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7338u;
    // 0x1c733c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7338u, 0x1C7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7340u;
label_1c7340:
    // 0x1c7340: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c7340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c7344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7348: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7348u;
    {
        const bool branch_taken_0x1c7348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7348) {
            ctx->pc = 0x1C7370u;
            return;
        }
    }
    ctx->pc = 0x1C7350u;
    // 0x1c7350: 0x8e0301f0  lw          $v1, 0x1F0($s0)
    ctx->pc = 0x1c7350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1c7354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7358: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7358u;
    {
        const bool branch_taken_0x1c7358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7358u;
        // 0x1c735c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7358) {
            ctx->pc = 0x1C736Cu;
            return;
        }
    }
    ctx->pc = 0x1C7360u;
    // 0x1c7360: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1c7360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c7364: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7364u;
    {
        const bool branch_taken_0x1c7364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7364u;
        // 0x1c7368: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7364) {
            ctx->pc = 0x1C7370u;
            return;
        }
    }
    ctx->pc = 0x1C736Cu;
}
