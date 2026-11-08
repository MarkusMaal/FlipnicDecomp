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

// Function: entry_001de48c
// Address: 0x1de48c - 0x1de4b0
void entry_001de48c_0x1de48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de48c_0x1de48c");
#endif

    ctx->pc = 0x1de48cu;

    // 0x1de48c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1de48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de490: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1DE490u;
    {
        const bool branch_taken_0x1de490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE490u;
        // 0x1de494: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de490) {
            ctx->pc = 0x1DE4D0u;
            return;
        }
    }
    ctx->pc = 0x1DE498u;
    // 0x1de498: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1de498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de49c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de49cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de4a0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1de4a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de4a4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1de4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1de4a8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE4A8u;
    {
        const bool branch_taken_0x1de4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4A8u;
        // 0x1de4ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4a8) {
            ctx->pc = 0x1DE4D0u;
            return;
        }
    }
    ctx->pc = 0x1DE4B0u;
}
