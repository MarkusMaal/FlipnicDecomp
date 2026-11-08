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

// Function: entry_001a5780
// Address: 0x1a5780 - 0x1a57a0
void entry_001a5780_0x1a5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5780_0x1a5780");
#endif

    ctx->pc = 0x1a5780u;

    // 0x1a5780: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x1a5780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x1a5784: 0x8c680060  lw          $t0, 0x60($v1)
    ctx->pc = 0x1a5784u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1a5788: 0x1100000f  beqz        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A5788u;
    {
        const bool branch_taken_0x1a5788 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5788u;
        // 0x1a578c: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5788) {
            ctx->pc = 0x1A57C8u;
            return;
        }
    }
    ctx->pc = 0x1A5790u;
    // 0x1a5790: 0x8c630760  lw          $v1, 0x760($v1)
    ctx->pc = 0x1a5790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1888)));
    // 0x1a5794: 0x1068000c  beq         $v1, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A5794u;
    {
        const bool branch_taken_0x1a5794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1A5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5794u;
        // 0x1a5798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5794) {
            ctx->pc = 0x1A57C8u;
            return;
        }
    }
    ctx->pc = 0x1A579Cu;
    // 0x1a579c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a579cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a57a0u;
}
