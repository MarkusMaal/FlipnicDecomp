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

// Function: entry_002039fc
// Address: 0x2039fc - 0x203a18
void entry_002039fc_0x2039fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002039fc_0x2039fc");
#endif

    ctx->pc = 0x2039fcu;

    // 0x2039fc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2039fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x203a00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203A00u;
    {
        const bool branch_taken_0x203a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A00u;
        // 0x203a04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a00) {
            ctx->pc = 0x203A18u;
            return;
        }
    }
    ctx->pc = 0x203A08u;
    // 0x203a08: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x203a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x203a0c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x203a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x203a10: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x203a10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x203a14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x203a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x203a18u;
}
