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

// Function: caseD_2
// Address: 0x1a9cac - 0x1a9d0c
void caseD_2_0x1a9cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1a9cac");
#endif

    ctx->pc = 0x1a9cacu;

    // 0x1a9cac: 0x8ea306c8  lw          $v1, 0x6C8($s5)
    ctx->pc = 0x1a9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1736)));
    // 0x1a9cb0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a9cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a9cb4: 0x461010d  bgez        $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x1A9CB4u;
    {
        const bool branch_taken_0x1a9cb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9CB4u;
        // 0x1a9cb8: 0xaea306c8  sw          $v1, 0x6C8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cb4) {
            ctx->pc = 0x1AA0ECu;
            return;
        }
    }
    ctx->pc = 0x1A9CBCu;
    // 0x1a9cbc: 0xaea006c8  sw          $zero, 0x6C8($s5)
    ctx->pc = 0x1a9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1736), GPR_U32(ctx, 0));
    // 0x1a9cc0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a9cc4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a9cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a9cd0: 0x0  nop
    ctx->pc = 0x1a9cd0u;
    // NOP
    // 0x1a9cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a9cd8: 0xaea30940  sw          $v1, 0x940($s5)
    ctx->pc = 0x1a9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2368), GPR_U32(ctx, 3));
    // 0x1a9cdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a9cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a9ce0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a9ce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a9ce4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1a9ce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1a9ce8: 0x0  nop
    ctx->pc = 0x1a9ce8u;
    // NOP
    // 0x1a9cec: 0xaea20944  sw          $v0, 0x944($s5)
    ctx->pc = 0x1a9cecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2372), GPR_U32(ctx, 2));
    // 0x1a9cf0: 0x8ea20940  lw          $v0, 0x940($s5)
    ctx->pc = 0x1a9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2368)));
    // 0x1a9cf4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A9CF4u;
    {
        const bool branch_taken_0x1a9cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a9cf4) {
            ctx->pc = 0x1A9D18u;
            return;
        }
    }
    ctx->pc = 0x1A9CFCu;
    // 0x1a9cfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9CFCu;
    {
        const bool branch_taken_0x1a9cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9cfc) {
            ctx->pc = 0x1A9D0Cu;
            return;
        }
    }
    ctx->pc = 0x1A9D04u;
    // 0x1a9d04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9D04u;
    {
        const bool branch_taken_0x1a9d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D04u;
        // 0x1a9d08: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d04) {
            ctx->pc = 0x1A9D20u;
            return;
        }
    }
    ctx->pc = 0x1A9D0Cu;
}
