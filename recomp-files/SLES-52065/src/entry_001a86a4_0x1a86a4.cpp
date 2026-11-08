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

// Function: entry_001a86a4
// Address: 0x1a86a4 - 0x1a86d8
void entry_001a86a4_0x1a86a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a86a4_0x1a86a4");
#endif

    ctx->pc = 0x1a86a4u;

    // 0x1a86a4: 0xae8009c8  sw          $zero, 0x9C8($s4)
    ctx->pc = 0x1a86a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2504), GPR_U32(ctx, 0));
    // 0x1a86a8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1a86ac: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1a86acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a86b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a86b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a86b4: 0x8e8209b4  lw          $v0, 0x9B4($s4)
    ctx->pc = 0x1a86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2484)));
    // 0x1a86b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a86b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a86bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a86bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a86c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a86c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a86c4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1a86c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1a86c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A86C8u;
    {
        const bool branch_taken_0x1a86c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a86c8) {
            ctx->pc = 0x1A86D8u;
            return;
        }
    }
    ctx->pc = 0x1A86D0u;
    // 0x1a86d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A86D0u;
    {
        const bool branch_taken_0x1a86d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A86D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A86D0u;
        // 0x1a86d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a86d0) {
            ctx->pc = 0x1A86E0u;
            return;
        }
    }
    ctx->pc = 0x1A86D8u;
}
