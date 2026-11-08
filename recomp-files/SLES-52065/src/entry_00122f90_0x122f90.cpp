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

// Function: entry_00122f90
// Address: 0x122f90 - 0x122fcc
void entry_00122f90_0x122f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122f90_0x122f90");
#endif

    switch (ctx->pc) {
        case 0x122fa8u: goto label_122fa8;
        default: break;
    }

    ctx->pc = 0x122f90u;

    // 0x122f90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x122f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x122f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f98: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x122f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122f9c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x122f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122fa0: 0xc07fdd8  jal         func_1FF760
    ctx->pc = 0x122FA0u;
    SET_GPR_U32(ctx, 31, 0x122FA8u);
    ctx->pc = 0x122FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FA0u;
    // 0x122fa4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF760u, 0x122FA0u, 0x122FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FA8u;
label_122fa8:
    // 0x122fa8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x122FA8u;
    {
        const bool branch_taken_0x122fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122fa8) {
            ctx->pc = 0x122FD8u;
            return;
        }
    }
    ctx->pc = 0x122FB0u;
    // 0x122fb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x122fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x122fb4: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x122fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x122fb8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x122fb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x122fbc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x122FBCu;
    {
        const bool branch_taken_0x122fbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x122fbc) {
            ctx->pc = 0x122FCCu;
            return;
        }
    }
    ctx->pc = 0x122FC4u;
    // 0x122fc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x122FC4u;
    {
        const bool branch_taken_0x122fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FC4u;
        // 0x122fc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fc4) {
            ctx->pc = 0x122FD8u;
            return;
        }
    }
    ctx->pc = 0x122FCCu;
}
