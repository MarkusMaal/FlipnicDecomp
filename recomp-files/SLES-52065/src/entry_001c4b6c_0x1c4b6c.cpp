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

// Function: entry_001c4b6c
// Address: 0x1c4b6c - 0x1c4bc4
void entry_001c4b6c_0x1c4b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4b6c_0x1c4b6c");
#endif

    ctx->pc = 0x1c4b6cu;

    // 0x1c4b6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b70: 0x8c24f800  lw          $a0, -0x800($at)
    ctx->pc = 0x1c4b70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F800u));
    // 0x1c4b74: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1c4b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4b78: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4b7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b80: 0x8c23f810  lw          $v1, -0x7F0($at)
    ctx->pc = 0x1c4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F810u));
    // 0x1c4b84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c4b88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4b8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c4b8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c4b90: 0x8022f828  lb          $v0, -0x7D8($at)
    ctx->pc = 0x1c4b90u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F828u));
    // 0x1c4b94: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c4b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c4b98: 0x0  nop
    ctx->pc = 0x1c4b98u;
    // NOP
    // 0x1c4b9c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1c4b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c4ba0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1c4ba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1c4ba4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4BA4u;
    {
        const bool branch_taken_0x1c4ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BA4u;
        // 0x1c4ba8: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ba4) {
            ctx->pc = 0x1C4BC4u;
            return;
        }
    }
    ctx->pc = 0x1C4BACu;
    // 0x1c4bac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4bb0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4bb4: 0xac23f820  sw          $v1, -0x7E0($at)
    ctx->pc = 0x1c4bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F820u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F820u, _value); } while (0);
    // 0x1c4bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4bbc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4bc0: 0xa022f828  sb          $v0, -0x7D8($at)
    ctx->pc = 0x1c4bc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F828u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F828u, _value); } while (0);
    ctx->pc = 0x1c4bc4u;
}
