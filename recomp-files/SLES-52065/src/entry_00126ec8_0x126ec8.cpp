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

// Function: entry_00126ec8
// Address: 0x126ec8 - 0x126ef0
void entry_00126ec8_0x126ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126ec8_0x126ec8");
#endif

    ctx->pc = 0x126ec8u;

    // 0x126ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x126ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x126ecc: 0x0  nop
    ctx->pc = 0x126eccu;
    // NOP
    // 0x126ed0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x126ed0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126ed4: 0x0  nop
    ctx->pc = 0x126ed4u;
    // NOP
    // 0x126ed8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x126ED8u;
    {
        const bool branch_taken_0x126ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x126EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126ED8u;
        // 0x126edc: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ed8) {
            ctx->pc = 0x126EF0u;
            return;
        }
    }
    ctx->pc = 0x126EE0u;
    // 0x126ee0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x126ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x126ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x126ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x126ee8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x126EE8u;
    {
        const bool branch_taken_0x126ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126EE8u;
        // 0x126eec: 0xc4570000  lwc1        $f23, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ee8) {
            ctx->pc = 0x127028u;
            return;
        }
    }
    ctx->pc = 0x126EF0u;
}
