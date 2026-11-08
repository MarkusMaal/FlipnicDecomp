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

// Function: entry_00196ba0
// Address: 0x196ba0 - 0x196be0
void entry_00196ba0_0x196ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196ba0_0x196ba0");
#endif

    ctx->pc = 0x196ba0u;

    // 0x196ba0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x196ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x196ba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x196ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196ba8: 0x8c652c00  lw          $a1, 0x2C00($v1)
    ctx->pc = 0x196ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11264)));
    // 0x196bac: 0x14a40060  bne         $a1, $a0, . + 4 + (0x60 << 2)
    ctx->pc = 0x196BACu;
    {
        const bool branch_taken_0x196bac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x196BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BACu;
        // 0x196bb0: 0x24662c00  addiu       $a2, $v1, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bac) {
            ctx->pc = 0x196D30u;
            return;
        }
    }
    ctx->pc = 0x196BB4u;
    // 0x196bb4: 0x1600005e  bnez        $s0, . + 4 + (0x5E << 2)
    ctx->pc = 0x196BB4u;
    {
        const bool branch_taken_0x196bb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x196bb4) {
            ctx->pc = 0x196D30u;
            return;
        }
    }
    ctx->pc = 0x196BBCu;
    // 0x196bbc: 0x8ea40674  lw          $a0, 0x674($s5)
    ctx->pc = 0x196bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
    // 0x196bc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196bc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bc4: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x196bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x196bc8: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x196bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x196bcc: 0xf52021  addu        $a0, $a3, $s5
    ctx->pc = 0x196bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x196bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196bd4: 0x8c840490  lw          $a0, 0x490($a0)
    ctx->pc = 0x196bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x196bd8: 0x2488002c  addiu       $t0, $a0, 0x2C
    ctx->pc = 0x196bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x196bdc: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x196bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    ctx->pc = 0x196be0u;
}
