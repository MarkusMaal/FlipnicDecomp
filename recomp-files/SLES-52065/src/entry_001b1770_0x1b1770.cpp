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

// Function: entry_001b1770
// Address: 0x1b1770 - 0x1b1790
void entry_001b1770_0x1b1770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1770_0x1b1770");
#endif

    ctx->pc = 0x1b1770u;

    // 0x1b1770: 0x908c0000  lbu         $t4, 0x0($a0)
    ctx->pc = 0x1b1770u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1774: 0x90aa0000  lbu         $t2, 0x0($a1)
    ctx->pc = 0x1b1774u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b1778: 0x158a0005  bne         $t4, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1778u;
    {
        const bool branch_taken_0x1b1778 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 10));
        if (branch_taken_0x1b1778) {
            ctx->pc = 0x1B1790u;
            return;
        }
    }
    ctx->pc = 0x1B1780u;
    // 0x1b1780: 0x908c0001  lbu         $t4, 0x1($a0)
    ctx->pc = 0x1b1780u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1b1784: 0x90aa0001  lbu         $t2, 0x1($a1)
    ctx->pc = 0x1b1784u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1b1788: 0x118a000e  beq         $t4, $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1788u;
    {
        const bool branch_taken_0x1b1788 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 10));
        if (branch_taken_0x1b1788) {
            ctx->pc = 0x1B17C4u;
            return;
        }
    }
    ctx->pc = 0x1B1790u;
}
