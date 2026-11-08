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

// Function: entry_00103a70
// Address: 0x103a70 - 0x103aac
void entry_00103a70_0x103a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103a70_0x103a70");
#endif

    switch (ctx->pc) {
        case 0x103a78u: goto label_103a78;
        case 0x103a88u: goto label_103a88;
        default: break;
    }

    ctx->pc = 0x103a70u;

    // 0x103a70: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x103A70u;
    SET_GPR_U32(ctx, 31, 0x103A78u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x103A70u, 0x103A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A78u;
label_103a78:
    // 0x103a78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x103A78u;
    {
        const bool branch_taken_0x103a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A78u;
        // 0x103a7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a78) {
            ctx->pc = 0x103AACu;
            return;
        }
    }
    ctx->pc = 0x103A80u;
    // 0x103a80: 0xc0418dc  jal         func_106370
    ctx->pc = 0x103A80u;
    SET_GPR_U32(ctx, 31, 0x103A88u);
    ctx->pc = 0x103A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A80u;
    // 0x103a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106370u, 0x103A80u, 0x103A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A88u;
label_103a88:
    // 0x103a88: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103a8c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x103a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x103a90: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x103a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x103a94: 0x24639770  addiu       $v1, $v1, -0x6890
    ctx->pc = 0x103a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940528));
    // 0x103a98: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x103a9c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x103a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x103aa0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x103aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x103aa4: 0x24427ed0  addiu       $v0, $v0, 0x7ED0
    ctx->pc = 0x103aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32464));
    // 0x103aa8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x103aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x103aacu;
}
