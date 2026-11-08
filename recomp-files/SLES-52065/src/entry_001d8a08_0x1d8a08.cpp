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

// Function: entry_001d8a08
// Address: 0x1d8a08 - 0x1d8a50
void entry_001d8a08_0x1d8a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8a08_0x1d8a08");
#endif

    ctx->pc = 0x1d8a08u;

    // 0x1d8a08: 0x8c84054c  lw          $a0, 0x54C($a0)
    ctx->pc = 0x1d8a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d8a0c: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x1d8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x1d8a10: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1d8a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d8a14: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D8A14u;
    {
        const bool branch_taken_0x1d8a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A14u;
        // 0x1d8a18: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a14) {
            ctx->pc = 0x1D8A8Cu;
            return;
        }
    }
    ctx->pc = 0x1D8A1Cu;
    // 0x1d8a1c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1d8a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1d8a20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8a24: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D8A24u;
    {
        const bool branch_taken_0x1d8a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8a24) {
            ctx->pc = 0x1D8A8Cu;
            return;
        }
    }
    ctx->pc = 0x1D8A2Cu;
    // 0x1d8a2c: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1d8a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d8a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a34: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8A34u;
    {
        const bool branch_taken_0x1d8a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A34u;
        // 0x1d8a38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a34) {
            ctx->pc = 0x1D8A50u;
            return;
        }
    }
    ctx->pc = 0x1D8A3Cu;
    // 0x1d8a3c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8A3Cu;
    {
        const bool branch_taken_0x1d8a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A3Cu;
        // 0x1d8a40: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a3c) {
            ctx->pc = 0x1D8A70u;
            return;
        }
    }
    ctx->pc = 0x1D8A44u;
    // 0x1d8a44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8A44u;
    {
        const bool branch_taken_0x1d8a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A44u;
        // 0x1d8a48: 0xdfb200d0  ld          $s2, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a44) {
            ctx->pc = 0x1D8A90u;
            return;
        }
    }
    ctx->pc = 0x1D8A4Cu;
    // 0x1d8a4c: 0x0  nop
    ctx->pc = 0x1d8a4cu;
    // NOP
    ctx->pc = 0x1d8a50u;
}
