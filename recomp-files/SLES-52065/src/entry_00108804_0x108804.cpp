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

// Function: entry_00108804
// Address: 0x108804 - 0x108838
void entry_00108804_0x108804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108804_0x108804");
#endif

    switch (ctx->pc) {
        case 0x108820u: goto label_108820;
        case 0x10882cu: goto label_10882c;
        default: break;
    }

    ctx->pc = 0x108804u;

    // 0x108804: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x108804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x108808: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10880c: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x10880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x108810: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x108810u;
    {
        const bool branch_taken_0x108810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x108814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108810u;
        // 0x108814: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108810) {
            ctx->pc = 0x108838u;
            return;
        }
    }
    ctx->pc = 0x108818u;
    // 0x108818: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x108818u;
    SET_GPR_U32(ctx, 31, 0x108820u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x108818u, 0x108820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108820u;
label_108820:
    // 0x108820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x108820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108824: 0xc049ed8  jal         func_127B60
    ctx->pc = 0x108824u;
    SET_GPR_U32(ctx, 31, 0x10882Cu);
    ctx->pc = 0x108828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108824u;
    // 0x108828: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B60u, 0x108824u, 0x10882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10882Cu;
label_10882c:
    // 0x10882c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x10882Cu;
    {
        const bool branch_taken_0x10882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10882c) {
            ctx->pc = 0x1089A4u;
            return;
        }
    }
    ctx->pc = 0x108834u;
    // 0x108834: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x108834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x108838u;
}
