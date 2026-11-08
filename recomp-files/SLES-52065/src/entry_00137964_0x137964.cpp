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

// Function: entry_00137964
// Address: 0x137964 - 0x1379c4
void entry_00137964_0x137964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137964_0x137964");
#endif

    switch (ctx->pc) {
        case 0x137984u: goto label_137984;
        default: break;
    }

    ctx->pc = 0x137964u;

    // 0x137964: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x137964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x137968: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x137968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13796c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x13796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x137970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137974: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x137974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x137978: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x137978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x13797c: 0xc04de8c  jal         func_137A30
    ctx->pc = 0x13797Cu;
    SET_GPR_U32(ctx, 31, 0x137984u);
    ctx->pc = 0x137980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13797Cu;
    // 0x137980: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A30u, 0x13797Cu, 0x137984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137984u;
label_137984:
    // 0x137984: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x137984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13798c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137990: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x137990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x137994: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x137994u;
    {
        const bool branch_taken_0x137994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x137994) {
            ctx->pc = 0x1379C4u;
            return;
        }
    }
    ctx->pc = 0x13799Cu;
    // 0x13799c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1379a0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1379A0u;
    {
        const bool branch_taken_0x1379a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1379a0) {
            ctx->pc = 0x1379C4u;
            return;
        }
    }
    ctx->pc = 0x1379A8u;
    // 0x1379a8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1379a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1379ac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1379acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1379b0: 0x8f85858c  lw          $a1, -0x7A74($gp)
    ctx->pc = 0x1379b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    // 0x1379b4: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x1379b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x1379b8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1379b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1379bc: 0xc04ebf0  jal         func_13AFC0
    ctx->pc = 0x1379BCu;
    SET_GPR_U32(ctx, 31, 0x1379C4u);
    ctx->pc = 0x1379C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379BCu;
    // 0x1379c0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AFC0u, 0x1379BCu, 0x1379C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379C4u;
}
