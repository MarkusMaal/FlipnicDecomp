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

// Function: entry_001c0a70
// Address: 0x1c0a70 - 0x1c0ac8
void entry_001c0a70_0x1c0a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0a70_0x1c0a70");
#endif

    ctx->pc = 0x1c0a70u;

    // 0x1c0a70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a74: 0x8c24f580  lw          $a0, -0xA80($at)
    ctx->pc = 0x1c0a74u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F580u));
    // 0x1c0a78: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1c0a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0a7c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c0a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0a80: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a84: 0x8c23f590  lw          $v1, -0xA70($at)
    ctx->pc = 0x1c0a84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F590u));
    // 0x1c0a88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0a88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c0a8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0a90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0a90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c0a94: 0x8022f5a8  lb          $v0, -0xA58($at)
    ctx->pc = 0x1c0a94u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F5A8u));
    // 0x1c0a98: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c0a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c0a9c: 0x0  nop
    ctx->pc = 0x1c0a9cu;
    // NOP
    // 0x1c0aa0: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x1c0aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c0aa4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c0aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c0aa8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0AA8u;
    {
        const bool branch_taken_0x1c0aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AA8u;
        // 0x1c0aac: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0aa8) {
            ctx->pc = 0x1C0AC8u;
            return;
        }
    }
    ctx->pc = 0x1C0AB0u;
    // 0x1c0ab0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1c0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1c0ab4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0ab8: 0xac23f5a0  sw          $v1, -0xA60($at)
    ctx->pc = 0x1c0ab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F5A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F5A0u, _value); } while (0);
    // 0x1c0abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ac0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c0ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c0ac4: 0xa022f5a8  sb          $v0, -0xA58($at)
    ctx->pc = 0x1c0ac4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F5A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F5A8u, _value); } while (0);
    ctx->pc = 0x1c0ac8u;
}
