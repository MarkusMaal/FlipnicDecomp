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

// Function: entry_0015120c
// Address: 0x15120c - 0x151238
void entry_0015120c_0x15120c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015120c_0x15120c");
#endif

    ctx->pc = 0x15120cu;

    // 0x15120c: 0x0  nop
    ctx->pc = 0x15120cu;
    // NOP
    // 0x151210: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x151210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151214: 0x206082b  sltu        $at, $s0, $a2
    ctx->pc = 0x151214u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x151218: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x151218u;
    {
        const bool branch_taken_0x151218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x151218) {
            ctx->pc = 0x1511C8u;
            return;
        }
    }
    ctx->pc = 0x151220u;
    // 0x151220: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x151220u;
    {
        const bool branch_taken_0x151220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x151220) {
            ctx->pc = 0x151254u;
            return;
        }
    }
    ctx->pc = 0x151228u;
    // 0x151228: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x151228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15122c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x151230: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x151230u;
    {
        const bool branch_taken_0x151230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151230u;
        // 0x151234: 0xa32021  addu        $a0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151230) {
            ctx->pc = 0x15123Cu;
            return;
        }
    }
    ctx->pc = 0x151238u;
}
