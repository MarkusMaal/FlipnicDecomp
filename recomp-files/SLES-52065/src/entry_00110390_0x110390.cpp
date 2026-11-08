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

// Function: entry_00110390
// Address: 0x110390 - 0x1103d0
void entry_00110390_0x110390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110390_0x110390");
#endif

    ctx->pc = 0x110390u;

    // 0x110390: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x110390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x110394: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x110394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x110398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x110398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11039c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1103a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1103a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1103a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1103a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1103a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1103a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1103ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1103acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1103b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1103b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1103b4: 0x0  nop
    ctx->pc = 0x1103b4u;
    // NOP
    // 0x1103b8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1103b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1103bc: 0x10200159  beqz        $at, . + 4 + (0x159 << 2)
    ctx->pc = 0x1103BCu;
    {
        const bool branch_taken_0x1103bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103BCu;
        // 0x1103c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103bc) {
            ctx->pc = 0x110924u;
            return;
        }
    }
    ctx->pc = 0x1103C4u;
    // 0x1103c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1103c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1103c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1103C8u;
    {
        const bool branch_taken_0x1103c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1103CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1103C8u;
        // 0x1103cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1103c8) {
            ctx->pc = 0x110400u;
            return;
        }
    }
    ctx->pc = 0x1103D0u;
}
