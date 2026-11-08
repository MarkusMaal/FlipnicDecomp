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

// Function: entry_00204088
// Address: 0x204088 - 0x2040a4
void entry_00204088_0x204088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204088_0x204088");
#endif

    ctx->pc = 0x204088u;

    // 0x204088: 0x33c20040  andi        $v0, $fp, 0x40
    ctx->pc = 0x204088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
    // 0x20408c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20408Cu;
    {
        const bool branch_taken_0x20408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20408Cu;
        // 0x204090: 0x8fa601f0  lw          $a2, 0x1F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20408c) {
            ctx->pc = 0x2040A4u;
            return;
        }
    }
    ctx->pc = 0x204094u;
    // 0x204094: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x204094u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x204098: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x204098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x20409c: 0x1000feba  b           . + 4 + (-0x146 << 2)
    ctx->pc = 0x20409Cu;
    {
        const bool branch_taken_0x20409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20409Cu;
        // 0x2040a0: 0xa4460000  sh          $a2, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20409c) {
            ctx->pc = 0x203B88u;
            return;
        }
    }
    ctx->pc = 0x2040A4u;
}
