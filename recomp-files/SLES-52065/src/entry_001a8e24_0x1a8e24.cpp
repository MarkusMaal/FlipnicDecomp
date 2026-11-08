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

// Function: entry_001a8e24
// Address: 0x1a8e24 - 0x1a8e74
void entry_001a8e24_0x1a8e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8e24_0x1a8e24");
#endif

    ctx->pc = 0x1a8e24u;

    // 0x1a8e24: 0x0  nop
    ctx->pc = 0x1a8e24u;
    // NOP
    // 0x1a8e28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8e2c: 0x14820049  bne         $a0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1A8E2Cu;
    {
        const bool branch_taken_0x1a8e2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8e2c) {
            ctx->pc = 0x1A8F54u;
            return;
        }
    }
    ctx->pc = 0x1A8E34u;
    // 0x1a8e34: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a8e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a8e38: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1a8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1a8e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a8e40: 0x8e8309c8  lw          $v1, 0x9C8($s4)
    ctx->pc = 0x1a8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2504)));
    // 0x1a8e44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a8e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a8e48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a8e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a8e4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a8e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a8e50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a8e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a8e54: 0x0  nop
    ctx->pc = 0x1a8e54u;
    // NOP
    // 0x1a8e58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1a8e58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8e5c: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x1A8E5Cu;
    {
        const bool branch_taken_0x1a8e5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e5c) {
            ctx->pc = 0x1A8F54u;
            return;
        }
    }
    ctx->pc = 0x1A8E64u;
    // 0x1a8e64: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a8e64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e68: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1A8E68u;
    {
        const bool branch_taken_0x1a8e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E68u;
        // 0x1a8e6c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e68) {
            ctx->pc = 0x1A8F3Cu;
            return;
        }
    }
    ctx->pc = 0x1A8E70u;
    // 0x1a8e70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a8e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a8e74u;
}
