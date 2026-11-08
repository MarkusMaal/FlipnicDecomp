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

// Function: caseD_f
// Address: 0x1c7124 - 0x1c7164
void caseD_f_0x1c7124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1c7124");
#endif

    switch (ctx->pc) {
        case 0x1c7130u: goto label_1c7130;
        case 0x1c713cu: goto label_1c713c;
        case 0x1c7148u: goto label_1c7148;
        case 0x1c7158u: goto label_1c7158;
        default: break;
    }

    ctx->pc = 0x1c7124u;

    // 0x1c7124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7128: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7128u;
    SET_GPR_U32(ctx, 31, 0x1C7130u);
    ctx->pc = 0x1C712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7128u;
    // 0x1c712c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7128u, 0x1C7130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7130u;
label_1c7130:
    // 0x1c7130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7134: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7134u;
    SET_GPR_U32(ctx, 31, 0x1C713Cu);
    ctx->pc = 0x1C7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7134u;
    // 0x1c7138: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7134u, 0x1C713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C713Cu;
label_1c713c:
    // 0x1c713c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c713cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7140: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C7140u;
    SET_GPR_U32(ctx, 31, 0x1C7148u);
    ctx->pc = 0x1C7144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7140u;
    // 0x1c7144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C7140u, 0x1C7148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7148u;
label_1c7148:
    // 0x1c7148: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c7148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c714c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x1c714cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c7150: 0xc07477c  jal         func_1D1DF0
    ctx->pc = 0x1C7150u;
    SET_GPR_U32(ctx, 31, 0x1C7158u);
    ctx->pc = 0x1C7154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7150u;
    // 0x1c7154: 0x24a520d0  addiu       $a1, $a1, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DF0u, 0x1C7150u, 0x1C7158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7158u;
label_1c7158:
    // 0x1c7158: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c7158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c715c: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x1C715Cu;
    {
        const bool branch_taken_0x1c715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C715Cu;
        // 0x1c7160: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c715c) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7164u;
}
