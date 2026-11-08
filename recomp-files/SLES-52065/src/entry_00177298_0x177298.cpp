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

// Function: entry_00177298
// Address: 0x177298 - 0x1772f4
void entry_00177298_0x177298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177298_0x177298");
#endif

    ctx->pc = 0x177298u;

    // 0x177298: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x177298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17729c: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x17729Cu;
    {
        const bool branch_taken_0x17729c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1772A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17729Cu;
        // 0x1772a0: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17729c) {
            ctx->pc = 0x1771F4u;
            return;
        }
    }
    ctx->pc = 0x1772A4u;
    // 0x1772a4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1772a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1772a8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1772a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1772ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1772acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1772b0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1772b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1772b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1772b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1772b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1772b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1772bc: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x1772bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x1772c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1772c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1772c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1772c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1772c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1772c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1772cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1772ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1772d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1772d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1772d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1772d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1772d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1772d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1772dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1772dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1772e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1772e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1772e4: 0x0  nop
    ctx->pc = 0x1772e4u;
    // NOP
    // 0x1772e8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1772e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1772ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1772ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1772F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772ECu;
        // 0x1772f0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1772ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1772F4u;
}
