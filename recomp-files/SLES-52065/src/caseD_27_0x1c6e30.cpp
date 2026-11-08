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

// Function: caseD_27
// Address: 0x1c6e30 - 0x1c6e70
void caseD_27_0x1c6e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_27_0x1c6e30");
#endif

    switch (ctx->pc) {
        case 0x1c6e3cu: goto label_1c6e3c;
        case 0x1c6e48u: goto label_1c6e48;
        case 0x1c6e54u: goto label_1c6e54;
        case 0x1c6e5cu: goto label_1c6e5c;
        default: break;
    }

    ctx->pc = 0x1c6e30u;

    // 0x1c6e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e34: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E34u;
    SET_GPR_U32(ctx, 31, 0x1C6E3Cu);
    ctx->pc = 0x1C6E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E34u;
    // 0x1c6e38: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E34u, 0x1C6E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E3Cu;
label_1c6e3c:
    // 0x1c6e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e40: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E40u;
    SET_GPR_U32(ctx, 31, 0x1C6E48u);
    ctx->pc = 0x1C6E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E40u;
    // 0x1c6e44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E40u, 0x1C6E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E48u;
label_1c6e48:
    // 0x1c6e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e4c: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E54u);
    ctx->pc = 0x1C6E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E4Cu;
    // 0x1c6e50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6E4Cu, 0x1C6E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E54u;
label_1c6e54:
    // 0x1c6e54: 0xc0747dc  jal         func_1D1F70
    ctx->pc = 0x1C6E54u;
    SET_GPR_U32(ctx, 31, 0x1C6E5Cu);
    ctx->pc = 0x1C6E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E54u;
    // 0x1c6e58: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F70u, 0x1C6E54u, 0x1C6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E5Cu;
label_1c6e5c:
    // 0x1c6e5c: 0x14400249  bnez        $v0, . + 4 + (0x249 << 2)
    ctx->pc = 0x1C6E5Cu;
    {
        const bool branch_taken_0x1c6e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e5c) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6E64u;
    // 0x1c6e64: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1c6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c6e68: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x1C6E68u;
    {
        const bool branch_taken_0x1c6e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E68u;
        // 0x1c6e6c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e68) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6E70u;
}
