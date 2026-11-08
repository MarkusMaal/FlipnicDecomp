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

// Function: entry_00111fc0
// Address: 0x111fc0 - 0x111ff0
void entry_00111fc0_0x111fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111fc0_0x111fc0");
#endif

    ctx->pc = 0x111fc0u;

    // 0x111fc0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x111fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x111fc4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x111fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x111fc8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x111fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111fd0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x111fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x111fd4: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x111fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x111fd8: 0x90420224  lbu         $v0, 0x224($v0)
    ctx->pc = 0x111fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x111fdc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x111fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x111fe0: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111FE0u;
    {
        const bool branch_taken_0x111fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x111FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FE0u;
        // 0x111fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fe0) {
            ctx->pc = 0x111FF0u;
            return;
        }
    }
    ctx->pc = 0x111FE8u;
    // 0x111fe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x111FE8u;
    {
        const bool branch_taken_0x111fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111fe8) {
            ctx->pc = 0x112004u;
            return;
        }
    }
    ctx->pc = 0x111FF0u;
}
