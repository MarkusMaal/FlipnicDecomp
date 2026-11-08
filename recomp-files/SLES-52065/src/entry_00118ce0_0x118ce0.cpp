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

// Function: entry_00118ce0
// Address: 0x118ce0 - 0x118d20
void entry_00118ce0_0x118ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118ce0_0x118ce0");
#endif

    ctx->pc = 0x118ce0u;

    // 0x118ce0: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x118ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118ce4: 0x3c024066  lui         $v0, 0x4066
    ctx->pc = 0x118ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16486 << 16));
    // 0x118ce8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x118ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x118cec: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x118cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x118cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x118cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118cf4: 0x0  nop
    ctx->pc = 0x118cf4u;
    // NOP
    // 0x118cf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x118cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x118cfc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x118cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x118d00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118d00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x118d04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x118d04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x118d08: 0x0  nop
    ctx->pc = 0x118d08u;
    // NOP
    // 0x118d0c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x118d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x118d10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118D10u;
    {
        const bool branch_taken_0x118d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D10u;
        // 0x118d14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d10) {
            ctx->pc = 0x118D20u;
            return;
        }
    }
    ctx->pc = 0x118D18u;
    // 0x118d18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118D18u;
    {
        const bool branch_taken_0x118d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D18u;
        // 0x118d1c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d18) {
            ctx->pc = 0x118D28u;
            return;
        }
    }
    ctx->pc = 0x118D20u;
}
