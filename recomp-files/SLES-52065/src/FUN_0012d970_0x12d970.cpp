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

// Function: FUN_0012d970
// Address: 0x12d970 - 0x12d9e0
void FUN_0012d970_0x12d970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012d970_0x12d970");
#endif

    switch (ctx->pc) {
        case 0x12d988u: goto label_12d988;
        default: break;
    }

    ctx->pc = 0x12d970u;

    // 0x12d970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12d970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12d974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12d978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12d97c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d980: 0xc080748  jal         func_201D20
    ctx->pc = 0x12D980u;
    SET_GPR_U32(ctx, 31, 0x12D988u);
    ctx->pc = 0x12D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D980u;
    // 0x12d984: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x12D980u, 0x12D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D988u;
label_12d988:
    // 0x12d988: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x12d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12d98c: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x12d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d990: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x12d990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d994: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12d994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12d998: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x12d998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x12d99c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D99Cu;
    {
        const bool branch_taken_0x12d99c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D99Cu;
        // 0x12d9a0: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d99c) {
            ctx->pc = 0x12D9B0u;
            goto label_12d9b0;
        }
    }
    ctx->pc = 0x12D9A4u;
    // 0x12d9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12d9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d9a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12D9A8u;
    {
        const bool branch_taken_0x12d9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9A8u;
        // 0x12d9ac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9a8) {
            ctx->pc = 0x12D9CCu;
            goto label_12d9cc;
        }
    }
    ctx->pc = 0x12D9B0u;
label_12d9b0:
    // 0x12d9b0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x12d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x12d9b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12d9b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12d9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12d9bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d9bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d9c0: 0x0  nop
    ctx->pc = 0x12d9c0u;
    // NOP
    // 0x12d9c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12d9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12d9c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x12d9c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_12d9cc:
    // 0x12d9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12d9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d9d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12d9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12d9d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12d9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x12D9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9D8u;
        // 0x12d9dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D9E0u;
}
