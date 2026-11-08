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

// Function: entry_001c9c40
// Address: 0x1c9c40 - 0x1c9c98
void entry_001c9c40_0x1c9c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9c40_0x1c9c40");
#endif

    ctx->pc = 0x1c9c40u;

    // 0x1c9c40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c44: 0x8c24f900  lw          $a0, -0x700($at)
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F900u));
    // 0x1c9c48: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1c9c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9c4c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c9c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9c50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c54: 0x8c23f910  lw          $v1, -0x6F0($at)
    ctx->pc = 0x1c9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F910u));
    // 0x1c9c58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9c58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c9c5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c60: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c9c60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c9c64: 0x8022f928  lb          $v0, -0x6D8($at)
    ctx->pc = 0x1c9c64u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F928u));
    // 0x1c9c68: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c9c68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c9c6c: 0x0  nop
    ctx->pc = 0x1c9c6cu;
    // NOP
    // 0x1c9c70: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x1c9c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c9c74: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c9c74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c9c78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9C78u;
    {
        const bool branch_taken_0x1c9c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C78u;
        // 0x1c9c7c: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c78) {
            ctx->pc = 0x1C9C98u;
            return;
        }
    }
    ctx->pc = 0x1C9C80u;
    // 0x1c9c80: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1c9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1c9c84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c88: 0xac23f920  sw          $v1, -0x6E0($at)
    ctx->pc = 0x1c9c88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F920u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F920u, _value); } while (0);
    // 0x1c9c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c9c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c9c94: 0xa022f928  sb          $v0, -0x6D8($at)
    ctx->pc = 0x1c9c94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F928u, _value); } while (0);
    ctx->pc = 0x1c9c98u;
}
