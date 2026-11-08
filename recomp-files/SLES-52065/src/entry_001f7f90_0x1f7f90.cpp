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

// Function: entry_001f7f90
// Address: 0x1f7f90 - 0x1f7ff8
void entry_001f7f90_0x1f7f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7f90_0x1f7f90");
#endif

    switch (ctx->pc) {
        case 0x1f7f9cu: goto label_1f7f9c;
        case 0x1f7fdcu: goto label_1f7fdc;
        case 0x1f7ff0u: goto label_1f7ff0;
        default: break;
    }

    ctx->pc = 0x1f7f90u;

    // 0x1f7f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f7f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f94: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F7F94u;
    SET_GPR_U32(ctx, 31, 0x1F7F9Cu);
    ctx->pc = 0x1F7F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F94u;
    // 0x1f7f98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F7F94u, 0x1F7F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F9Cu;
label_1f7f9c:
    // 0x1f7f9c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fa0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1f7fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fa4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fa8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fac: 0x8c88bb5c  lw          $t0, -0x44A4($a0)
    ctx->pc = 0x1f7facu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x21BB5Cu));
    // 0x1f7fb0: 0x2450cd00  addiu       $s0, $v0, -0x3300
    ctx->pc = 0x1f7fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954240));
    // 0x1f7fb4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fb8: 0x8ccabb60  lw          $t2, -0x44A0($a2)
    ctx->pc = 0x1f7fb8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x21BB60u));
    // 0x1f7fbc: 0x8c65bb58  lw          $a1, -0x44A8($v1)
    ctx->pc = 0x1f7fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21BB58u));
    // 0x1f7fc0: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x1f7fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x1f7fc4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f7fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fc8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f7fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fd0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f7fd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fd4: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F7FD4u;
    SET_GPR_U32(ctx, 31, 0x1F7FDCu);
    ctx->pc = 0x1F7FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FD4u;
    // 0x1f7fd8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F7FD4u, 0x1F7FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FDCu;
label_1f7fdc:
    // 0x1f7fdc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7FDCu;
    {
        const bool branch_taken_0x1f7fdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FDCu;
        // 0x1f7fe0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fdc) {
            ctx->pc = 0x1F7FF8u;
            return;
        }
    }
    ctx->pc = 0x1F7FE4u;
    // 0x1f7fe4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7fe8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F7FE8u;
    SET_GPR_U32(ctx, 31, 0x1F7FF0u);
    ctx->pc = 0x1F7FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FE8u;
    // 0x1f7fec: 0x8c44bb2c  lw          $a0, -0x44D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F7FE8u, 0x1F7FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FF0u;
label_1f7ff0:
    // 0x1f7ff0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7FF0u;
    {
        const bool branch_taken_0x1f7ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FF0u;
        // 0x1f7ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ff0) {
            ctx->pc = 0x1F8010u;
            return;
        }
    }
    ctx->pc = 0x1F7FF8u;
}
