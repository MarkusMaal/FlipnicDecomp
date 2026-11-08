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

// Function: entry_001aa8c4
// Address: 0x1aa8c4 - 0x1aa910
void entry_001aa8c4_0x1aa8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa8c4_0x1aa8c4");
#endif

    ctx->pc = 0x1aa8c4u;

    // 0x1aa8c4: 0x0  nop
    ctx->pc = 0x1aa8c4u;
    // NOP
    // 0x1aa8c8: 0x8ea3070c  lw          $v1, 0x70C($s5)
    ctx->pc = 0x1aa8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1804)));
    // 0x1aa8cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1aa8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1aa8d0: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1aa8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1aa8d4: 0x8c64067c  lw          $a0, 0x67C($v1)
    ctx->pc = 0x1aa8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1660)));
    // 0x1aa8d8: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x1aa8d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1aa8dc: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1AA8DCu;
    {
        const bool branch_taken_0x1aa8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa8dc) {
            ctx->pc = 0x1AA87Cu;
            return;
        }
    }
    ctx->pc = 0x1AA8E4u;
    // 0x1aa8e4: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1aa8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1aa8e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1aa8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1aa8ec: 0x24632cb0  addiu       $v1, $v1, 0x2CB0
    ctx->pc = 0x1aa8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11440));
    // 0x1aa8f0: 0x8ea50714  lw          $a1, 0x714($s5)
    ctx->pc = 0x1aa8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1812)));
    // 0x1aa8f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1aa8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aa8f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1aa8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa8fc: 0x14a30031  bne         $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1AA8FCu;
    {
        const bool branch_taken_0x1aa8fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa8fc) {
            ctx->pc = 0x1AA9C4u;
            return;
        }
    }
    ctx->pc = 0x1AA904u;
    // 0x1aa904: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aa904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa908: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AA908u;
    {
        const bool branch_taken_0x1aa908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA908u;
        // 0x1aa90c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa908) {
            ctx->pc = 0x1AA924u;
            return;
        }
    }
    ctx->pc = 0x1AA910u;
}
