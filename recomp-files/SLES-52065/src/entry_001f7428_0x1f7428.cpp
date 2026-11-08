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

// Function: entry_001f7428
// Address: 0x1f7428 - 0x1f7448
void entry_001f7428_0x1f7428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7428_0x1f7428");
#endif

    ctx->pc = 0x1f7428u;

    // 0x1f7428: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1f7428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f742c: 0x26a413c0  addiu       $a0, $s5, 0x13C0
    ctx->pc = 0x1f742cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 5056));
    // 0x1f7430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7434: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1f7434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1f7438: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F7438u;
    {
        const bool branch_taken_0x1f7438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7438u;
        // 0x1f743c: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7438) {
            ctx->pc = 0x1F746Cu;
            return;
        }
    }
    ctx->pc = 0x1F7440u;
    // 0x1f7440: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x1f7440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1f7444: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f7444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1f7448u;
}
