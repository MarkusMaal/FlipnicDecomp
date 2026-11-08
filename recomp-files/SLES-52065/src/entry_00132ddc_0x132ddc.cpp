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

// Function: entry_00132ddc
// Address: 0x132ddc - 0x132e20
void entry_00132ddc_0x132ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132ddc_0x132ddc");
#endif

    ctx->pc = 0x132ddcu;

    // 0x132ddc: 0x0  nop
    ctx->pc = 0x132ddcu;
    // NOP
    // 0x132de0: 0x8f878528  lw          $a3, -0x7AD8($gp)
    ctx->pc = 0x132de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x132de4: 0x15d3021  addu        $a2, $t2, $sp
    ctx->pc = 0x132de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x132de8: 0x24cc0130  addiu       $t4, $a2, 0x130
    ctx->pc = 0x132de8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 304));
    // 0x132dec: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x132decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132df0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x132df0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132df4: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x132df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x132df8: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x132df8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x132dfc: 0x1673021  addu        $a2, $t3, $a3
    ctx->pc = 0x132dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x132e00: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x132e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x132e04: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x132e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132e08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x132e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132e0c: 0x0  nop
    ctx->pc = 0x132e0cu;
    // NOP
    // 0x132e10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x132E10u;
    {
        const bool branch_taken_0x132e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x132e10) {
            ctx->pc = 0x132E20u;
            return;
        }
    }
    ctx->pc = 0x132E18u;
    // 0x132e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x132E18u;
    {
        const bool branch_taken_0x132e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E18u;
        // 0x132e1c: 0xeb3021  addu        $a2, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e18) {
            ctx->pc = 0x132E28u;
            return;
        }
    }
    ctx->pc = 0x132E20u;
}
