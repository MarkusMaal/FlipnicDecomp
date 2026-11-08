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

// Function: entry_001109c4
// Address: 0x1109c4 - 0x110a0c
void entry_001109c4_0x1109c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001109c4_0x1109c4");
#endif

    ctx->pc = 0x1109c4u;

    // 0x1109c4: 0x0  nop
    ctx->pc = 0x1109c4u;
    // NOP
    // 0x1109c8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1109c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1109cc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1109ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1109d0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1109D0u;
    {
        const bool branch_taken_0x1109d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1109d0) {
            ctx->pc = 0x110990u;
            return;
        }
    }
    ctx->pc = 0x1109D8u;
    // 0x1109d8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1109d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1109dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1109dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1109e0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1109e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1109e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1109e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1109e8: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x1109e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1109ec: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x1109ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1109f0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1109f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1109f4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1109f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1109f8: 0x8c862cd8  lw          $a2, 0x2CD8($a0)
    ctx->pc = 0x1109f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
    // 0x1109fc: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x1109fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
    // 0x110a00: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x110a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x110a04: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x110A04u;
    {
        const bool branch_taken_0x110a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A04u;
        // 0x110a08: 0xacc40224  sw          $a0, 0x224($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a04) {
            ctx->pc = 0x110A3Cu;
            return;
        }
    }
    ctx->pc = 0x110A0Cu;
}
