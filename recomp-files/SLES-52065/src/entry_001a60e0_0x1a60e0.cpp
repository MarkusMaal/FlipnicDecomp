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

// Function: entry_001a60e0
// Address: 0x1a60e0 - 0x1a611c
void entry_001a60e0_0x1a60e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a60e0_0x1a60e0");
#endif

    ctx->pc = 0x1a60e0u;

    // 0x1a60e0: 0xde8200d0  ld          $v0, 0xD0($s4)
    ctx->pc = 0x1a60e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x1a60e4: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1A60E4u;
    {
        const bool branch_taken_0x1a60e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a60e4) {
            ctx->pc = 0x1A6240u;
            return;
        }
    }
    ctx->pc = 0x1A60ECu;
    // 0x1a60ec: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a60ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a60f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1a60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1a60f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a60f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a60f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a60fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a60fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a6100: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a6100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a6104: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a6104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a6108: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a6108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a610c: 0x0  nop
    ctx->pc = 0x1a610cu;
    // NOP
    // 0x1a6110: 0xae8300ec  sw          $v1, 0xEC($s4)
    ctx->pc = 0x1a6110u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 3));
    // 0x1a6114: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1A6114u;
    {
        const bool branch_taken_0x1a6114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6114u;
        // 0x1a6118: 0xae8200e4  sw          $v0, 0xE4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6114) {
            ctx->pc = 0x1A6240u;
            return;
        }
    }
    ctx->pc = 0x1A611Cu;
}
