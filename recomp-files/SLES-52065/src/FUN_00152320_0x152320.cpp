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

// Function: FUN_00152320
// Address: 0x152320 - 0x15239c
void FUN_00152320_0x152320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152320_0x152320");
#endif

    switch (ctx->pc) {
        case 0x152364u: goto label_152364;
        case 0x152374u: goto label_152374;
        case 0x152384u: goto label_152384;
        default: break;
    }

    ctx->pc = 0x152320u;

    // 0x152320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x152324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x152324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x152328: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x152328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15232c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15232cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x152330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152334: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x152334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x152338: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x152338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15233c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x15233cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x152340: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x152340u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152344: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x152344u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x152348: 0x78a80020  lq          $t0, 0x20($a1)
    ctx->pc = 0x152348u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15234c: 0x78a90030  lq          $t1, 0x30($a1)
    ctx->pc = 0x15234cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x152350: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x152350u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x152354: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x152354u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x152358: 0x7c880020  sq          $t0, 0x20($a0)
    ctx->pc = 0x152358u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 8));
    // 0x15235c: 0xc07d5c8  jal         func_1F5720
    ctx->pc = 0x15235Cu;
    SET_GPR_U32(ctx, 31, 0x152364u);
    ctx->pc = 0x152360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15235Cu;
    // 0x152360: 0x7c890030  sq          $t1, 0x30($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5720u, 0x15235Cu, 0x152364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152364u;
label_152364:
    // 0x152364: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x152364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x152368: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x152368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15236c: 0xc07d5c8  jal         func_1F5720
    ctx->pc = 0x15236Cu;
    SET_GPR_U32(ctx, 31, 0x152374u);
    ctx->pc = 0x152370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15236Cu;
    // 0x152370: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5720u, 0x15236Cu, 0x152374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152374u;
label_152374:
    // 0x152374: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x152374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x152378: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x152378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x15237c: 0xc07d5c8  jal         func_1F5720
    ctx->pc = 0x15237Cu;
    SET_GPR_U32(ctx, 31, 0x152384u);
    ctx->pc = 0x152380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15237Cu;
    // 0x152380: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5720u, 0x15237Cu, 0x152384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152384u;
label_152384:
    // 0x152384: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x152384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152388: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x152388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15238c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15238cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152390: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x152390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152394: 0x3e00008  jr          $ra
    ctx->pc = 0x152394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152394u;
        // 0x152398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15239Cu;
}
