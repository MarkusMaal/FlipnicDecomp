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

// Function: entry_001d5438
// Address: 0x1d5438 - 0x1d5460
void entry_001d5438_0x1d5438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5438_0x1d5438");
#endif

    ctx->pc = 0x1d5438u;

    // 0x1d5438: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1d5438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d543c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1d543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1d5440: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d5440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d5444: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x1d5444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1d5448: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d5448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d544c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d544cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5450: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D5450u;
    {
        const bool branch_taken_0x1d5450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5450u;
        // 0x1d5454: 0x26a69f10  addiu       $a2, $s5, -0x60F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5450) {
            ctx->pc = 0x1D54E8u;
            return;
        }
    }
    ctx->pc = 0x1D5458u;
    // 0x1d5458: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1D5458u;
    {
        const bool branch_taken_0x1d5458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5458u;
        // 0x1d545c: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5458) {
            ctx->pc = 0x1D54D8u;
            return;
        }
    }
    ctx->pc = 0x1D5460u;
}
