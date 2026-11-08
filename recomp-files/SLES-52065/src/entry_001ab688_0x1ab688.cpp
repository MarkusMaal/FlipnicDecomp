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

// Function: entry_001ab688
// Address: 0x1ab688 - 0x1ab700
void entry_001ab688_0x1ab688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab688_0x1ab688");
#endif

    ctx->pc = 0x1ab688u;

    // 0x1ab688: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1AB688u;
    {
        const bool branch_taken_0x1ab688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab688) {
            ctx->pc = 0x1AB74Cu;
            return;
        }
    }
    ctx->pc = 0x1AB690u;
    // 0x1ab690: 0x8e8306dc  lw          $v1, 0x6DC($s4)
    ctx->pc = 0x1ab690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1756)));
    // 0x1ab694: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ab694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ab698: 0xae8306dc  sw          $v1, 0x6DC($s4)
    ctx->pc = 0x1ab698u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1756), GPR_U32(ctx, 3));
    // 0x1ab69c: 0x928306da  lbu         $v1, 0x6DA($s4)
    ctx->pc = 0x1ab69cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1754)));
    // 0x1ab6a0: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AB6A0u;
    {
        const bool branch_taken_0x1ab6a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab6a0) {
            ctx->pc = 0x1AB704u;
            return;
        }
    }
    ctx->pc = 0x1AB6A8u;
    // 0x1ab6a8: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x1ab6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab6ac: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1ab6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1ab6b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ab6b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ab6b4: 0x8e8406dc  lw          $a0, 0x6DC($s4)
    ctx->pc = 0x1ab6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1756)));
    // 0x1ab6b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab6b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ab6bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab6c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ab6c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ab6c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ab6c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ab6c8: 0x0  nop
    ctx->pc = 0x1ab6c8u;
    // NOP
    // 0x1ab6cc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ab6ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ab6d0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB6D0u;
    {
        const bool branch_taken_0x1ab6d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab6d0) {
            ctx->pc = 0x1AB704u;
            return;
        }
    }
    ctx->pc = 0x1AB6D8u;
    // 0x1ab6d8: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x1ab6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x1ab6dc: 0x9063282c  lbu         $v1, 0x282C($v1)
    ctx->pc = 0x1ab6dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10284)));
    // 0x1ab6e0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB6E0u;
    {
        const bool branch_taken_0x1ab6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab6e0) {
            ctx->pc = 0x1AB704u;
            return;
        }
    }
    ctx->pc = 0x1AB6E8u;
    // 0x1ab6e8: 0x8e8406ec  lw          $a0, 0x6EC($s4)
    ctx->pc = 0x1ab6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1772)));
    // 0x1ab6ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB6ECu;
    {
        const bool branch_taken_0x1ab6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB6ECu;
        // 0x1ab6f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6ec) {
            ctx->pc = 0x1AB700u;
            return;
        }
    }
    ctx->pc = 0x1AB6F4u;
    // 0x1ab6f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab6f8: 0xac830320  sw          $v1, 0x320($a0)
    ctx->pc = 0x1ab6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 3));
    // 0x1ab6fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ab700u;
}
