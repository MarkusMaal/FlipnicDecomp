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

// Function: entry_001f17e4
// Address: 0x1f17e4 - 0x1f1800
void entry_001f17e4_0x1f17e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f17e4_0x1f17e4");
#endif

    ctx->pc = 0x1f17e4u;

    // 0x1f17e4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f17e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f17e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f17e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17ec: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f17ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f17f0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F17F0u;
    {
        const bool branch_taken_0x1f17f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17F0u;
        // 0x1f17f4: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17f0) {
            ctx->pc = 0x1F1824u;
            return;
        }
    }
    ctx->pc = 0x1F17F8u;
    // 0x1f17f8: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x1f17f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1f17fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f17fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1f1800u;
}
