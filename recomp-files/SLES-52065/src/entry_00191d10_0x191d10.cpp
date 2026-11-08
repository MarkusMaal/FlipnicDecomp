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

// Function: entry_00191d10
// Address: 0x191d10 - 0x191d24
void entry_00191d10_0x191d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191d10_0x191d10");
#endif

    ctx->pc = 0x191d10u;

    // 0x191d10: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191d14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191d18: 0x8c420490  lw          $v0, 0x490($v0)
    ctx->pc = 0x191d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x191d1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x191D1Cu;
    {
        const bool branch_taken_0x191d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D1Cu;
        // 0x191d20: 0x24520040  addiu       $s2, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d1c) {
            ctx->pc = 0x191D4Cu;
            return;
        }
    }
    ctx->pc = 0x191D24u;
}
