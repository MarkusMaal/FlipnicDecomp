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

// Function: entry_00112d2c
// Address: 0x112d2c - 0x112d64
void entry_00112d2c_0x112d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112d2c_0x112d2c");
#endif

    ctx->pc = 0x112d2cu;

    // 0x112d2c: 0x92230040  lbu         $v1, 0x40($s1)
    ctx->pc = 0x112d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x112d30: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x112D30u;
    {
        const bool branch_taken_0x112d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D30u;
        // 0x112d34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d30) {
            ctx->pc = 0x112D84u;
            return;
        }
    }
    ctx->pc = 0x112D38u;
    // 0x112d38: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x112d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x112d3c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x112d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x112d40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x112d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x112d44: 0x0  nop
    ctx->pc = 0x112d44u;
    // NOP
    // 0x112d48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x112d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x112d4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112d4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x112d50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x112d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x112d54: 0x0  nop
    ctx->pc = 0x112d54u;
    // NOP
    // 0x112d58: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x112D58u;
    {
        const bool branch_taken_0x112d58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x112d58) {
            ctx->pc = 0x112D64u;
            return;
        }
    }
    ctx->pc = 0x112D60u;
    // 0x112d60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x112d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x112d64u;
}
