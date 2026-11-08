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
// Address: 0x1c6df8 - 0x1c6e30
void caseD_5_0x1c6df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1c6df8");
#endif

    switch (ctx->pc) {
        case 0x1c6e04u: goto label_1c6e04;
        case 0x1c6e10u: goto label_1c6e10;
        case 0x1c6e1cu: goto label_1c6e1c;
        case 0x1c6e24u: goto label_1c6e24;
        default: break;
    }

    ctx->pc = 0x1c6df8u;

    // 0x1c6df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dfc: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6DFCu;
    SET_GPR_U32(ctx, 31, 0x1C6E04u);
    ctx->pc = 0x1C6E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6DFCu;
    // 0x1c6e00: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6DFCu, 0x1C6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E04u;
label_1c6e04:
    // 0x1c6e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e08: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E08u;
    SET_GPR_U32(ctx, 31, 0x1C6E10u);
    ctx->pc = 0x1C6E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E08u;
    // 0x1c6e0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E08u, 0x1C6E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E10u;
label_1c6e10:
    // 0x1c6e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e14: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E14u;
    SET_GPR_U32(ctx, 31, 0x1C6E1Cu);
    ctx->pc = 0x1C6E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E14u;
    // 0x1c6e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E14u, 0x1C6E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E1Cu;
label_1c6e1c:
    // 0x1c6e1c: 0xc0746b4  jal         func_1D1AD0
    ctx->pc = 0x1C6E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E24u);
    ctx->pc = 0x1C6E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E1Cu;
    // 0x1c6e20: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1AD0u, 0x1C6E1Cu, 0x1C6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E24u;
label_1c6e24:
    // 0x1c6e24: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1c6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1c6e28: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x1C6E28u;
    {
        const bool branch_taken_0x1c6e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E28u;
        // 0x1c6e2c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e28) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6E30u;
}
