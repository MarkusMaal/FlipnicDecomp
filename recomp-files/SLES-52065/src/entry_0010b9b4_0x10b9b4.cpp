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

// Function: entry_0010b9b4
// Address: 0x10b9b4 - 0x10b9e0
void entry_0010b9b4_0x10b9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b9b4_0x10b9b4");
#endif

    ctx->pc = 0x10b9b4u;

    // 0x10b9b4: 0x0  nop
    ctx->pc = 0x10b9b4u;
    // NOP
    // 0x10b9b8: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x10b9b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x10b9bc: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x10B9BCu;
    {
        const bool branch_taken_0x10b9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9BCu;
        // 0x10b9c0: 0x111980  sll         $v1, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9bc) {
            ctx->pc = 0x10B85Cu;
            return;
        }
    }
    ctx->pc = 0x10B9C4u;
    // 0x10b9c4: 0x8e042328  lw          $a0, 0x2328($s0)
    ctx->pc = 0x10b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9000)));
    // 0x10b9c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b9cc: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x10B9CCu;
    {
        const bool branch_taken_0x10b9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b9cc) {
            ctx->pc = 0x10BACCu;
            return;
        }
    }
    ctx->pc = 0x10B9D4u;
    // 0x10b9d4: 0xae002328  sw          $zero, 0x2328($s0)
    ctx->pc = 0x10b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 9000), GPR_U32(ctx, 0));
    // 0x10b9d8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x10B9D8u;
    {
        const bool branch_taken_0x10b9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9D8u;
        // 0x10b9dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b9d8) {
            ctx->pc = 0x10BABCu;
            return;
        }
    }
    ctx->pc = 0x10B9E0u;
}
