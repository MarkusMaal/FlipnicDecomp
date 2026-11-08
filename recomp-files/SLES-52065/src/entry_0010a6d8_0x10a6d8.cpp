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

// Function: entry_0010a6d8
// Address: 0x10a6d8 - 0x10a704
void entry_0010a6d8_0x10a6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a6d8_0x10a6d8");
#endif

    ctx->pc = 0x10a6d8u;

    // 0x10a6d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a6dc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A6DCu;
    {
        const bool branch_taken_0x10a6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6DCu;
        // 0x10a6e0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6dc) {
            ctx->pc = 0x10A704u;
            return;
        }
    }
    ctx->pc = 0x10A6E4u;
    // 0x10a6e4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x10a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10a6e8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10a6ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x10a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10a6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10a6f4: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x10a6f4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a6f8: 0x7e460000  sq          $a2, 0x0($s2)
    ctx->pc = 0x10a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 6));
    // 0x10a6fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10a700: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x10a700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x10a704u;
}
