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

// Function: entry_001a9ef8
// Address: 0x1a9ef8 - 0x1a9f5c
void entry_001a9ef8_0x1a9ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9ef8_0x1a9ef8");
#endif

    ctx->pc = 0x1a9ef8u;

    // 0x1a9ef8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9efc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a9f00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9f08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a9f0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a9f10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9f10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a9f14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a9f14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a9f18: 0x0  nop
    ctx->pc = 0x1a9f18u;
    // NOP
    // 0x1a9f1c: 0xaea306c8  sw          $v1, 0x6C8($s5)
    ctx->pc = 0x1a9f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 3));
    // 0x1a9f20: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9f24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a9f28: 0xaea00940  sw          $zero, 0x940($s5)
    ctx->pc = 0x1a9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2368), GPR_U32(ctx, 0));
    // 0x1a9f2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a9f30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9f30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a9f34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a9f34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a9f38: 0x0  nop
    ctx->pc = 0x1a9f38u;
    // NOP
    // 0x1a9f3c: 0xaea30944  sw          $v1, 0x944($s5)
    ctx->pc = 0x1a9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2372), GPR_U32(ctx, 3));
    // 0x1a9f40: 0x8ea30940  lw          $v1, 0x940($s5)
    ctx->pc = 0x1a9f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2368)));
    // 0x1a9f44: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9F44u;
    {
        const bool branch_taken_0x1a9f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9f44) {
            ctx->pc = 0x1A9F68u;
            return;
        }
    }
    ctx->pc = 0x1A9F4Cu;
    // 0x1a9f4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9F4Cu;
    {
        const bool branch_taken_0x1a9f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f4c) {
            ctx->pc = 0x1A9F5Cu;
            return;
        }
    }
    ctx->pc = 0x1A9F54u;
    // 0x1a9f54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9F54u;
    {
        const bool branch_taken_0x1a9f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F54u;
        // 0x1a9f58: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f54) {
            ctx->pc = 0x1A9F70u;
            return;
        }
    }
    ctx->pc = 0x1A9F5Cu;
}
