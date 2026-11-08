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

// Function: entry_0014dc38
// Address: 0x14dc38 - 0x14dc5c
void entry_0014dc38_0x14dc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc38_0x14dc38");
#endif

    ctx->pc = 0x14dc38u;

    // 0x14dc38: 0xaef60000  sw          $s6, 0x0($s7)
    ctx->pc = 0x14dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 22));
    // 0x14dc3c: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x14dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x14dc40: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x14dc40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14dc44: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14dc48: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x14dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14dc4c: 0xd4082b  sltu        $at, $a2, $s4
    ctx->pc = 0x14dc4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14dc50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14dc54: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x14DC54u;
    {
        const bool branch_taken_0x14dc54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC54u;
        // 0x14dc58: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc54) {
            ctx->pc = 0x14DC8Cu;
            return;
        }
    }
    ctx->pc = 0x14DC5Cu;
}
