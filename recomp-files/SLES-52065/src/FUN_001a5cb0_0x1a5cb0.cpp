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

// Function: FUN_001a5cb0
// Address: 0x1a5cb0 - 0x1a5d08
void FUN_001a5cb0_0x1a5cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5cb0_0x1a5cb0");
#endif

    ctx->pc = 0x1a5cb0u;

    // 0x1a5cb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a5cb4: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x1a5cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x1a5cb8: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x1a5cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x1a5cbc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a5cc0: 0xfc8500c0  sd          $a1, 0xC0($a0)
    ctx->pc = 0x1a5cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 192), GPR_U64(ctx, 5));
    // 0x1a5cc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a5cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5cc8: 0xfc8000c8  sd          $zero, 0xC8($a0)
    ctx->pc = 0x1a5cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 200), GPR_U64(ctx, 0));
    // 0x1a5ccc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1a5cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a5cd0: 0xfc8600d0  sd          $a2, 0xD0($a0)
    ctx->pc = 0x1a5cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 208), GPR_U64(ctx, 6));
    // 0x1a5cd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a5cd8: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x1a5cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x1a5cdc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a5cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5ce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5ce4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5ce8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5ce8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a5cec: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a5cecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1a5cf0: 0x0  nop
    ctx->pc = 0x1a5cf0u;
    // NOP
    // 0x1a5cf4: 0xac8600ec  sw          $a2, 0xEC($a0)
    ctx->pc = 0x1a5cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 6));
    // 0x1a5cf8: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x1a5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
    // 0x1a5cfc: 0xfc8500d8  sd          $a1, 0xD8($a0)
    ctx->pc = 0x1a5cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 216), GPR_U64(ctx, 5));
    // 0x1a5d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D00u;
        // 0x1a5d04: 0xac8300f4  sw          $v1, 0xF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5D08u;
}
