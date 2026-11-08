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

// Function: entry_0016eac8
// Address: 0x16eac8 - 0x16eb18
void entry_0016eac8_0x16eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eac8_0x16eac8");
#endif

    ctx->pc = 0x16eac8u;

    // 0x16eac8: 0x86020214  lh          $v0, 0x214($s0)
    ctx->pc = 0x16eac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x16eacc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x16eaccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16ead0: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x16EAD0u;
    {
        const bool branch_taken_0x16ead0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ead0) {
            ctx->pc = 0x16E9A8u;
            return;
        }
    }
    ctx->pc = 0x16EAD8u;
    // 0x16ead8: 0x12200042  beqz        $s1, . + 4 + (0x42 << 2)
    ctx->pc = 0x16EAD8u;
    {
        const bool branch_taken_0x16ead8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EAD8u;
        // 0x16eadc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ead8) {
            ctx->pc = 0x16EBE4u;
            return;
        }
    }
    ctx->pc = 0x16EAE0u;
    // 0x16eae0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16eae4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16eae8: 0x80830022  lb          $v1, 0x22($a0)
    ctx->pc = 0x16eae8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x16eaec: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x16EAECu;
    {
        const bool branch_taken_0x16eaec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16eaec) {
            ctx->pc = 0x16EBE0u;
            return;
        }
    }
    ctx->pc = 0x16EAF4u;
    // 0x16eaf4: 0x86030216  lh          $v1, 0x216($s0)
    ctx->pc = 0x16eaf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 534)));
    // 0x16eaf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16eafc: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x16EAFCu;
    {
        const bool branch_taken_0x16eafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16eafc) {
            ctx->pc = 0x16EBE0u;
            return;
        }
    }
    ctx->pc = 0x16EB04u;
    // 0x16eb04: 0x80820024  lb          $v0, 0x24($a0)
    ctx->pc = 0x16eb04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x16eb08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EB08u;
    {
        const bool branch_taken_0x16eb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB08u;
        // 0x16eb0c: 0x241200c0  addiu       $s2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb08) {
            ctx->pc = 0x16EB18u;
            return;
        }
    }
    ctx->pc = 0x16EB10u;
    // 0x16eb10: 0x90820024  lbu         $v0, 0x24($a0)
    ctx->pc = 0x16eb10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x16eb14: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x16eb14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->pc = 0x16eb18u;
}
