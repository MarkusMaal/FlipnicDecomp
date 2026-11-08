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

// Function: entry_001a561c
// Address: 0x1a561c - 0x1a5684
void entry_001a561c_0x1a561c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a561c_0x1a561c");
#endif

    ctx->pc = 0x1a561cu;

    // 0x1a561c: 0x0  nop
    ctx->pc = 0x1a561cu;
    // NOP
    // 0x1a5620: 0x8d260684  lw          $a2, 0x684($t1)
    ctx->pc = 0x1a5620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1668)));
    // 0x1a5624: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1a5624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a5628: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a5628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a562c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a562cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a5630: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x1a5630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x1a5634: 0x8ca501fc  lw          $a1, 0x1FC($a1)
    ctx->pc = 0x1a5634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 508)));
    // 0x1a5638: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5638u;
    {
        const bool branch_taken_0x1a5638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5638u;
        // 0x1a563c: 0x252a0684  addiu       $t2, $t1, 0x684 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1668));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5638) {
            ctx->pc = 0x1A5684u;
            return;
        }
    }
    ctx->pc = 0x1A5640u;
    // 0x1a5640: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1a5640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a5644: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A5644u;
    {
        const bool branch_taken_0x1a5644 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5644) {
            ctx->pc = 0x1A5684u;
            return;
        }
    }
    ctx->pc = 0x1A564Cu;
    // 0x1a564c: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a5650: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a5654: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a5654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a5658: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a5658u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a565c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1a565cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a5660: 0x0  nop
    ctx->pc = 0x1a5660u;
    // NOP
    // 0x1a5664: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x1a5664u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x1a5668: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x1a5668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1a566c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x1a566cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a5670: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1a5670u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a5674: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1a5674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a5678: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x1a5678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x1a567c: 0x8ca501d4  lw          $a1, 0x1D4($a1)
    ctx->pc = 0x1a567cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 468)));
    // 0x1a5680: 0xad250688  sw          $a1, 0x688($t1)
    ctx->pc = 0x1a5680u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1672), GPR_U32(ctx, 5));
    ctx->pc = 0x1a5684u;
}
