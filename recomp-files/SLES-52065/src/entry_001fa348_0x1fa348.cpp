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

// Function: entry_001fa348
// Address: 0x1fa348 - 0x1fa390
void entry_001fa348_0x1fa348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa348_0x1fa348");
#endif

    ctx->pc = 0x1fa348u;

label_1fa348:
    // 0x1fa348: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fa34c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1fa34cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fa350: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fa350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fa354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa35c: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x1fa35cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1fa360: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1fa360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1fa364: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1fa364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1fa368: 0x461fff7  bgez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FA368u;
    {
        const bool branch_taken_0x1fa368 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA368u;
        // 0x1fa36c: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa368) {
            ctx->pc = 0x1FA348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa348;
        }
    }
    ctx->pc = 0x1FA370u;
    // 0x1fa370: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1fa370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa374: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1fa374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fa378: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x1fa378u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa37c: 0x0  nop
    ctx->pc = 0x1fa37cu;
    // NOP
    // 0x1fa380: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1FA380u;
    {
        const bool branch_taken_0x1fa380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA380u;
        // 0x1fa384: 0xe7ac0008  swc1        $f12, 0x8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa380) {
            ctx->pc = 0x1FA3B4u;
            return;
        }
    }
    ctx->pc = 0x1FA388u;
    // 0x1fa388: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fa388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa38c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fa38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fa390u;
}
