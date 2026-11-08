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

// Function: FUN_00160550
// Address: 0x160550 - 0x1605d0
void FUN_00160550_0x160550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00160550_0x160550");
#endif

    ctx->pc = 0x160550u;

    // 0x160550: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x160550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x160554: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x160554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x160558: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x160558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16055c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x160560: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x160560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160564: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x160564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x160568: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x160568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x16056c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x16056cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x160570: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x160570u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x160574: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x160574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x160578: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x160578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x16057c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x16057cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x160580: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x160580u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x160584: 0x0  nop
    ctx->pc = 0x160584u;
    // NOP
    // 0x160588: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x160588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x16058c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x16058cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160590: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x160590u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x160594: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x160594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x160598: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x160598u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x16059c: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x16059cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x1605a0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x1605a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x1605a4: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1605a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1605a8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1605a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1605ac: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1605acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x1605b0: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x1605b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1605b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1605b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1605b8: 0x0  nop
    ctx->pc = 0x1605b8u;
    // NOP
    // 0x1605bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1605BCu;
    {
        const bool branch_taken_0x1605bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1605C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1605BCu;
        // 0x1605c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1605bc) {
            ctx->pc = 0x1605C8u;
            goto label_1605c8;
        }
    }
    ctx->pc = 0x1605C4u;
    // 0x1605c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1605c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1605c8:
    // 0x1605c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1605C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1605C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1605D0u;
}
