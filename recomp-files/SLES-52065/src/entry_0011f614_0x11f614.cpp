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

// Function: entry_0011f614
// Address: 0x11f614 - 0x11f648
void entry_0011f614_0x11f614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f614_0x11f614");
#endif

    ctx->pc = 0x11f614u;

    // 0x11f614: 0x0  nop
    ctx->pc = 0x11f614u;
    // NOP
    // 0x11f618: 0x8d05200c  lw          $a1, 0x200C($t0)
    ctx->pc = 0x11f618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8204)));
    // 0x11f61c: 0x8d022014  lw          $v0, 0x2014($t0)
    ctx->pc = 0x11f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8212)));
    // 0x11f620: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x11f620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x11f624: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11f624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11f628: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F628u;
    {
        const bool branch_taken_0x11f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F628u;
        // 0x11f62c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f628) {
            ctx->pc = 0x11F648u;
            return;
        }
    }
    ctx->pc = 0x11F630u;
    // 0x11f630: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11f630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11f634: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x11f634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11f638: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11f638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11f63c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x11f63cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11f640: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11F640u;
    {
        const bool branch_taken_0x11f640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f640) {
            ctx->pc = 0x11F604u;
            return;
        }
    }
    ctx->pc = 0x11F648u;
}
