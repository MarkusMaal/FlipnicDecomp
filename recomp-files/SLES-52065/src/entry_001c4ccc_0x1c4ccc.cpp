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

// Function: entry_001c4ccc
// Address: 0x1c4ccc - 0x1c4d24
void entry_001c4ccc_0x1c4ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4ccc_0x1c4ccc");
#endif

    ctx->pc = 0x1c4cccu;

    // 0x1c4ccc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4cd0: 0x8c24f840  lw          $a0, -0x7C0($at)
    ctx->pc = 0x1c4cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F840u));
    // 0x1c4cd4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1c4cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4cd8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c4cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4cdc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4ce0: 0x8c23f850  lw          $v1, -0x7B0($at)
    ctx->pc = 0x1c4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F850u));
    // 0x1c4ce4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4ce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c4ce8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4cec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4cecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c4cf0: 0x8022f868  lb          $v0, -0x798($at)
    ctx->pc = 0x1c4cf0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F868u));
    // 0x1c4cf4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c4cf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c4cf8: 0x0  nop
    ctx->pc = 0x1c4cf8u;
    // NOP
    // 0x1c4cfc: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x1c4cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c4d00: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c4d00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c4d04: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4D04u;
    {
        const bool branch_taken_0x1c4d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D04u;
        // 0x1c4d08: 0x839021  addu        $s2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d04) {
            ctx->pc = 0x1C4D24u;
            return;
        }
    }
    ctx->pc = 0x1C4D0Cu;
    // 0x1c4d0c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1c4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1c4d10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d14: 0xac23f860  sw          $v1, -0x7A0($at)
    ctx->pc = 0x1c4d14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F860u, _value); } while (0);
    // 0x1c4d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4d1c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4d20: 0xa022f868  sb          $v0, -0x798($at)
    ctx->pc = 0x1c4d20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F868u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F868u, _value); } while (0);
    ctx->pc = 0x1c4d24u;
}
