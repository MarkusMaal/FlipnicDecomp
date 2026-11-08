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

// Function: FUN_001a7400
// Address: 0x1a7400 - 0x1a7450
void FUN_001a7400_0x1a7400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7400_0x1a7400");
#endif

    switch (ctx->pc) {
        case 0x1a743cu: goto label_1a743c;
        default: break;
    }

    ctx->pc = 0x1a7400u;

    // 0x1a7400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7404: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1a7404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1a7408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a740c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a740cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7410: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7414: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a7414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7418: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a7418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a741c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a741cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7420: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a7424: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a7424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a7428: 0x0  nop
    ctx->pc = 0x1a7428u;
    // NOP
    // 0x1a742c: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1a742cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1a7430: 0x8f8583a0  lw          $a1, -0x7C60($gp)
    ctx->pc = 0x1a7430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935456)));
    // 0x1a7434: 0xc054660  jal         func_151980
    ctx->pc = 0x1A7434u;
    SET_GPR_U32(ctx, 31, 0x1A743Cu);
    ctx->pc = 0x1A7438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7434u;
    // 0x1a7438: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151980u, 0x1A7434u, 0x1A743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A743Cu;
label_1a743c:
    // 0x1a743c: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x1a743cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1a7440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7448: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7448u;
        // 0x1a744c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7450u;
}
