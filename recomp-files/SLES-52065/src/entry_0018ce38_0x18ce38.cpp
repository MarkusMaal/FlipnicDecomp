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

// Function: entry_0018ce38
// Address: 0x18ce38 - 0x18ce64
void entry_0018ce38_0x18ce38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ce38_0x18ce38");
#endif

    switch (ctx->pc) {
        case 0x18ce40u: goto label_18ce40;
        case 0x18ce50u: goto label_18ce50;
        default: break;
    }

    ctx->pc = 0x18ce38u;

    // 0x18ce38: 0xc062d50  jal         func_18B540
    ctx->pc = 0x18CE38u;
    SET_GPR_U32(ctx, 31, 0x18CE40u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x18CE38u, 0x18CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE40u;
label_18ce40:
    // 0x18ce40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ce40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce44: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x18ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x18ce48: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x18CE48u;
    SET_GPR_U32(ctx, 31, 0x18CE50u);
    ctx->pc = 0x18CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE48u;
    // 0x18ce4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x18CE48u, 0x18CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE50u;
label_18ce50:
    // 0x18ce50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ce54: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x18ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18ce58: 0xae032714  sw          $v1, 0x2714($s0)
    ctx->pc = 0x18ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10004), GPR_U32(ctx, 3));
    // 0x18ce5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE5Cu;
    {
        const bool branch_taken_0x18ce5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE5Cu;
        // 0x18ce60: 0xae02046c  sw          $v0, 0x46C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce5c) {
            ctx->pc = 0x18CE6Cu;
            return;
        }
    }
    ctx->pc = 0x18CE64u;
}
