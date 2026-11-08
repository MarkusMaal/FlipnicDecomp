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

// Function: entry_00184860
// Address: 0x184860 - 0x1848b0
void entry_00184860_0x184860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184860_0x184860");
#endif

    switch (ctx->pc) {
        case 0x184874u: goto label_184874;
        default: break;
    }

    ctx->pc = 0x184860u;

    // 0x184860: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x184860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184864: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x184864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x184868: 0x24a59020  addiu       $a1, $a1, -0x6FE0
    ctx->pc = 0x184868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938656));
    // 0x18486c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x18486Cu;
    SET_GPR_U32(ctx, 31, 0x184874u);
    ctx->pc = 0x184870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18486Cu;
    // 0x184870: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x18486Cu, 0x184874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184874u;
label_184874:
    // 0x184874: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x184874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184878: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x184878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x18487c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x18487cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x184880: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x184880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x184884: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x184884u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184888: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x184888u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18488c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18488cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x184890: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x184890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184894: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x184894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x184898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18489c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18489cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1848a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1848a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1848a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1848a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1848a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1848A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1848ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1848A8u;
        // 0x1848ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1848A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1848B0u;
}
