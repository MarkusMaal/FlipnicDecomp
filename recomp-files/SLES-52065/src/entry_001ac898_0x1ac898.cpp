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

// Function: entry_001ac898
// Address: 0x1ac898 - 0x1ac910
void entry_001ac898_0x1ac898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac898_0x1ac898");
#endif

    ctx->pc = 0x1ac898u;

    // 0x1ac898: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1AC898u;
    {
        const bool branch_taken_0x1ac898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac898) {
            ctx->pc = 0x1AC95Cu;
            return;
        }
    }
    ctx->pc = 0x1AC8A0u;
    // 0x1ac8a0: 0x8e2306dc  lw          $v1, 0x6DC($s1)
    ctx->pc = 0x1ac8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
    // 0x1ac8a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ac8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ac8a8: 0xae2306dc  sw          $v1, 0x6DC($s1)
    ctx->pc = 0x1ac8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1756), GPR_U32(ctx, 3));
    // 0x1ac8ac: 0x922306da  lbu         $v1, 0x6DA($s1)
    ctx->pc = 0x1ac8acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1754)));
    // 0x1ac8b0: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AC8B0u;
    {
        const bool branch_taken_0x1ac8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac8b0) {
            ctx->pc = 0x1AC914u;
            return;
        }
    }
    ctx->pc = 0x1AC8B8u;
    // 0x1ac8b8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ac8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac8bc: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1ac8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1ac8c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ac8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ac8c4: 0x8e2406dc  lw          $a0, 0x6DC($s1)
    ctx->pc = 0x1ac8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
    // 0x1ac8c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ac8cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ac8ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ac8d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ac8d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ac8d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ac8d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ac8d8: 0x0  nop
    ctx->pc = 0x1ac8d8u;
    // NOP
    // 0x1ac8dc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ac8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ac8e0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1AC8E0u;
    {
        const bool branch_taken_0x1ac8e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac8e0) {
            ctx->pc = 0x1AC914u;
            return;
        }
    }
    ctx->pc = 0x1AC8E8u;
    // 0x1ac8e8: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1ac8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1ac8ec: 0x9063282c  lbu         $v1, 0x282C($v1)
    ctx->pc = 0x1ac8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
    // 0x1ac8f0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC8F0u;
    {
        const bool branch_taken_0x1ac8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac8f0) {
            ctx->pc = 0x1AC914u;
            return;
        }
    }
    ctx->pc = 0x1AC8F8u;
    // 0x1ac8f8: 0x8e2406ec  lw          $a0, 0x6EC($s1)
    ctx->pc = 0x1ac8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x1ac8fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC8FCu;
    {
        const bool branch_taken_0x1ac8fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8FCu;
        // 0x1ac900: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8fc) {
            ctx->pc = 0x1AC910u;
            return;
        }
    }
    ctx->pc = 0x1AC904u;
    // 0x1ac904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac908: 0xac830320  sw          $v1, 0x320($a0)
    ctx->pc = 0x1ac908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 3));
    // 0x1ac90c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ac910u;
}
