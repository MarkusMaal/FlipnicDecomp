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

// Function: entry_00162c80
// Address: 0x162c80 - 0x162cf0
void entry_00162c80_0x162c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162c80_0x162c80");
#endif

    switch (ctx->pc) {
        case 0x162ce8u: goto label_162ce8;
        default: break;
    }

    ctx->pc = 0x162c80u;

    // 0x162c80: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x162c80u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162c84: 0x7e260290  sq          $a2, 0x290($s1)
    ctx->pc = 0x162c84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 656), GPR_VEC(ctx, 6));
    // 0x162c88: 0x46020304  c1          0x20304
    ctx->pc = 0x162c88u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x162c8c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x162c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x162c90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c94: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x162c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x162c98: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x162c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x162c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ca0: 0xc7a40210  lwc1        $f4, 0x210($sp)
    ctx->pc = 0x162ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x162ca4: 0xc7a20214  lwc1        $f2, 0x214($sp)
    ctx->pc = 0x162ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162ca8: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x162ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162cac: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x162cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x162cb0: 0xc7a60200  lwc1        $f6, 0x200($sp)
    ctx->pc = 0x162cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x162cb4: 0xc7a30204  lwc1        $f3, 0x204($sp)
    ctx->pc = 0x162cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x162cb8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x162cb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x162cbc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x162cbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x162cc0: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x162cc0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x162cc4: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x162cc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x162cc8: 0xc7a10208  lwc1        $f1, 0x208($sp)
    ctx->pc = 0x162cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162ccc: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x162cccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x162cd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162cd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162cd4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x162cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x162cd8: 0xe7a40200  swc1        $f4, 0x200($sp)
    ctx->pc = 0x162cd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x162cdc: 0xe7a20204  swc1        $f2, 0x204($sp)
    ctx->pc = 0x162cdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x162ce0: 0xc055b3c  jal         func_156CF0
    ctx->pc = 0x162CE0u;
    SET_GPR_U32(ctx, 31, 0x162CE8u);
    ctx->pc = 0x162CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162CE0u;
    // 0x162ce4: 0xe7a00208  swc1        $f0, 0x208($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x162CE0u, 0x162CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162CE8u;
label_162ce8:
    // 0x162ce8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x162CE8u;
    {
        const bool branch_taken_0x162ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CE8u;
        // 0x162cec: 0x8e590008  lw          $t9, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ce8) {
            ctx->pc = 0x162DD4u;
            return;
        }
    }
    ctx->pc = 0x162CF0u;
}
