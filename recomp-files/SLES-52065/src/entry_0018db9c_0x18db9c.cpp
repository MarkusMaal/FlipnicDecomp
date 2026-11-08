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

// Function: entry_0018db9c
// Address: 0x18db9c - 0x18dbf0
void entry_0018db9c_0x18db9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018db9c_0x18db9c");
#endif

    ctx->pc = 0x18db9cu;

    // 0x18db9c: 0x8e220478  lw          $v0, 0x478($s1)
    ctx->pc = 0x18db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
    // 0x18dba0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18dba4: 0xae220478  sw          $v0, 0x478($s1)
    ctx->pc = 0x18dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1144), GPR_U32(ctx, 2));
    // 0x18dba8: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
    // 0x18dbac: 0xc7808024  lwc1        $f0, -0x7FDC($gp)
    ctx->pc = 0x18dbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18dbb0: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
    // 0x18dbb4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18dbb8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dbbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18dbc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dbc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18dbc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18dbcc: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x18dbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18dbd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18dbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18dbd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18dbd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18dbd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18dbd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18dbdc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18dbdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18dbe0: 0x0  nop
    ctx->pc = 0x18dbe0u;
    // NOP
    // 0x18dbe4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18DBE4u;
    {
        const bool branch_taken_0x18dbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dbe4) {
            ctx->pc = 0x18DBF0u;
            return;
        }
    }
    ctx->pc = 0x18DBECu;
    // 0x18dbec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18dbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x18dbf0u;
}
