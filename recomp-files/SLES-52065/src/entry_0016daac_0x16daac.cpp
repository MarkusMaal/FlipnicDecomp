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

// Function: entry_0016daac
// Address: 0x16daac - 0x16daf0
void entry_0016daac_0x16daac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016daac_0x16daac");
#endif

    ctx->pc = 0x16daacu;

    // 0x16daac: 0x86440064  lh          $a0, 0x64($s2)
    ctx->pc = 0x16daacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x16dab0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16dab4: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x16DAB4u;
    {
        const bool branch_taken_0x16dab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAB4u;
        // 0x16dab8: 0x8cb001fc  lw          $s0, 0x1FC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dab4) {
            ctx->pc = 0x16DB64u;
            return;
        }
    }
    ctx->pc = 0x16DABCu;
    // 0x16dabc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16dac0: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x16DAC0u;
    {
        const bool branch_taken_0x16dac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16dac0) {
            ctx->pc = 0x16DB50u;
            return;
        }
    }
    ctx->pc = 0x16DAC8u;
    // 0x16dac8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16dacc: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16DACCu;
    {
        const bool branch_taken_0x16dacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16dacc) {
            ctx->pc = 0x16DB30u;
            return;
        }
    }
    ctx->pc = 0x16DAD4u;
    // 0x16dad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16dad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dad8: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DAD8u;
    {
        const bool branch_taken_0x16dad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x16dad8) {
            ctx->pc = 0x16DAF0u;
            return;
        }
    }
    ctx->pc = 0x16DAE0u;
    // 0x16dae0: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
    ctx->pc = 0x16DAE0u;
    {
        const bool branch_taken_0x16dae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dae0) {
            ctx->pc = 0x16DC00u;
            return;
        }
    }
    ctx->pc = 0x16DAE8u;
    // 0x16dae8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16DAE8u;
    {
        const bool branch_taken_0x16dae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAE8u;
        // 0x16daec: 0x86450066  lh          $a1, 0x66($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 102)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dae8) {
            ctx->pc = 0x16DB9Cu;
            return;
        }
    }
    ctx->pc = 0x16DAF0u;
}
