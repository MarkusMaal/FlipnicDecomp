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

// Function: entry_00159aa8
// Address: 0x159aa8 - 0x159adc
void entry_00159aa8_0x159aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159aa8_0x159aa8");
#endif

    switch (ctx->pc) {
        case 0x159abcu: goto label_159abc;
        default: break;
    }

    ctx->pc = 0x159aa8u;

    // 0x159aa8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x159aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x159aac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x159aacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x159ab0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159ab4: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x159AB4u;
    SET_GPR_U32(ctx, 31, 0x159ABCu);
    ctx->pc = 0x159AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159AB4u;
    // 0x159ab8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x159AB4u, 0x159ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159ABCu;
label_159abc:
    // 0x159abc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x159abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159ac0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x159ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x159ac4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x159ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159ac8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x159ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x159acc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x159accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159ad0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x159ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x159AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AD4u;
        // 0x159ad8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159ADCu;
}
