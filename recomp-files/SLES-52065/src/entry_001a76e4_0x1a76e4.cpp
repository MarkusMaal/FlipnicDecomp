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

// Function: entry_001a76e4
// Address: 0x1a76e4 - 0x1a772c
void entry_001a76e4_0x1a76e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a76e4_0x1a76e4");
#endif

    ctx->pc = 0x1a76e4u;

    // 0x1a76e4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a76e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a76ec: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1a76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1a76f0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1a76f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a76f4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A76F4u;
    {
        const bool branch_taken_0x1a76f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a76f4) {
            ctx->pc = 0x1A772Cu;
            return;
        }
    }
    ctx->pc = 0x1A76FCu;
    // 0x1a76fc: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a76fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7700: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1a7704: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a7704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a7708: 0x0  nop
    ctx->pc = 0x1a7708u;
    // NOP
    // 0x1a770c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a770cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a7710: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a7710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a7714: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a7714u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a7718: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a7718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a771c: 0x0  nop
    ctx->pc = 0x1a771cu;
    // NOP
    // 0x1a7720: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1a7720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7724: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7724u;
    {
        const bool branch_taken_0x1a7724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7724u;
        // 0x1a7728: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7724) {
            ctx->pc = 0x1A773Cu;
            return;
        }
    }
    ctx->pc = 0x1A772Cu;
}
