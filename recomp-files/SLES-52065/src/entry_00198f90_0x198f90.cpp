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

// Function: entry_00198f90
// Address: 0x198f90 - 0x198fd0
void entry_00198f90_0x198f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198f90_0x198f90");
#endif

    switch (ctx->pc) {
        case 0x198fbcu: goto label_198fbc;
        default: break;
    }

    ctx->pc = 0x198f90u;

    // 0x198f90: 0x8e820684  lw          $v0, 0x684($s4)
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1668)));
    // 0x198f94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198f98: 0xae820684  sw          $v0, 0x684($s4)
    ctx->pc = 0x198f98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1668), GPR_U32(ctx, 2));
    // 0x198f9c: 0x92220044  lbu         $v0, 0x44($s1)
    ctx->pc = 0x198f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x198fa0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x198FA0u;
    {
        const bool branch_taken_0x198fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FA0u;
        // 0x198fa4: 0x26320040  addiu       $s2, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198fa0) {
            ctx->pc = 0x198FD0u;
            return;
        }
    }
    ctx->pc = 0x198FA8u;
    // 0x198fa8: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x198fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x198fac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fb0: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x198fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x198fb4: 0xc064c78  jal         func_1931E0
    ctx->pc = 0x198FB4u;
    SET_GPR_U32(ctx, 31, 0x198FBCu);
    ctx->pc = 0x198FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FB4u;
    // 0x198fb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1931E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1931E0u, 0x198FB4u, 0x198FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FBCu;
label_198fbc:
    // 0x198fbc: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x198fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x198fc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fc4: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x198fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x198fc8: 0xc064c78  jal         func_1931E0
    ctx->pc = 0x198FC8u;
    SET_GPR_U32(ctx, 31, 0x198FD0u);
    ctx->pc = 0x198FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FC8u;
    // 0x198fcc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1931E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1931E0u, 0x198FC8u, 0x198FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FD0u;
}
