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

// Function: entry_0014a370
// Address: 0x14a370 - 0x14a3dc
void entry_0014a370_0x14a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a370_0x14a370");
#endif

    switch (ctx->pc) {
        case 0x14a390u: goto label_14a390;
        case 0x14a3b0u: goto label_14a3b0;
        default: break;
    }

    ctx->pc = 0x14a370u;

    // 0x14a370: 0x1620003c  bnez        $s1, . + 4 + (0x3C << 2)
    ctx->pc = 0x14A370u;
    {
        const bool branch_taken_0x14a370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a370) {
            ctx->pc = 0x14A464u;
            return;
        }
    }
    ctx->pc = 0x14A378u;
    // 0x14a378: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x14a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x14a37c: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x14a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x14a380: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x14a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x14a384: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14a384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a388: 0xc052340  jal         func_148D00
    ctx->pc = 0x14A388u;
    SET_GPR_U32(ctx, 31, 0x14A390u);
    ctx->pc = 0x14A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A388u;
    // 0x14a38c: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148D00u, 0x14A388u, 0x14A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A390u;
label_14a390:
    // 0x14a390: 0x27a20300  addiu       $v0, $sp, 0x300
    ctx->pc = 0x14a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x14a394: 0x27a505c0  addiu       $a1, $sp, 0x5C0
    ctx->pc = 0x14a394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    // 0x14a398: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14a398u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a39c: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x14a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x14a3a0: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14a3a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a3a4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14a3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x14a3a8: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A3A8u;
    SET_GPR_U32(ctx, 31, 0x14A3B0u);
    ctx->pc = 0x14A3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A3A8u;
    // 0x14a3ac: 0xfca20010  sd          $v0, 0x10($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A3A8u, 0x14A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A3B0u;
label_14a3b0:
    // 0x14a3b0: 0x27b205cc  addiu       $s2, $sp, 0x5CC
    ctx->pc = 0x14a3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1484));
    // 0x14a3b4: 0x27b605d0  addiu       $s6, $sp, 0x5D0
    ctx->pc = 0x14a3b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
    // 0x14a3b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a3bc: 0x27b705d4  addiu       $s7, $sp, 0x5D4
    ctx->pc = 0x14a3bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1492));
    // 0x14a3c0: 0x2690ffff  addiu       $s0, $s4, -0x1
    ctx->pc = 0x14a3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x14a3c4: 0xafa305ac  sw          $v1, 0x5AC($sp)
    ctx->pc = 0x14a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1452), GPR_U32(ctx, 3));
    // 0x14a3c8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a3cc: 0xafa305b0  sw          $v1, 0x5B0($sp)
    ctx->pc = 0x14a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1456), GPR_U32(ctx, 3));
    // 0x14a3d0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x14a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a3d4: 0x128001d2  beqz        $s4, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x14A3D4u;
    {
        const bool branch_taken_0x14a3d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3D4u;
        // 0x14a3d8: 0xafa305b4  sw          $v1, 0x5B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1460), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3d4) {
            ctx->pc = 0x14AB20u;
            return;
        }
    }
    ctx->pc = 0x14A3DCu;
}
