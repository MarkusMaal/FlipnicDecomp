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

// Function: entry_001afcc8
// Address: 0x1afcc8 - 0x1afd0c
void entry_001afcc8_0x1afcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afcc8_0x1afcc8");
#endif

    ctx->pc = 0x1afcc8u;

    // 0x1afcc8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1afcc8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1afccc: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x1afcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1afcd0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1afcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1afcd4: 0x1102023  subu        $a0, $t0, $s0
    ctx->pc = 0x1afcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x1afcd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1afcd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1afcdc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1afcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1afce0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1afce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x1afce4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1afce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1afce8: 0x34658080  ori         $a1, $v1, 0x8080
    ctx->pc = 0x1afce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1afcec: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1afcecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1afcf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1afcf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1afcf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1afcf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1afcf8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1afcf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1afcfc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFCFCu;
    {
        const bool branch_taken_0x1afcfc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1AFD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFCFCu;
        // 0x1afd00: 0xffa50010  sd          $a1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afcfc) {
            ctx->pc = 0x1AFD0Cu;
            return;
        }
    }
    ctx->pc = 0x1AFD04u;
    // 0x1afd04: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1afd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1afd08: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1afd08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x1afd0cu;
}
