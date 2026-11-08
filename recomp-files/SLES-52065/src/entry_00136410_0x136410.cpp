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

// Function: entry_00136410
// Address: 0x136410 - 0x136434
void entry_00136410_0x136410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136410_0x136410");
#endif

    ctx->pc = 0x136410u;

    // 0x136410: 0xaef60000  sw          $s6, 0x0($s7)
    ctx->pc = 0x136410u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 22));
    // 0x136414: 0xafb00090  sw          $s0, 0x90($sp)
    ctx->pc = 0x136414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 16));
    // 0x136418: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x136418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13641c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x13641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x136420: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x136420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x136424: 0xd4082b  sltu        $at, $a2, $s4
    ctx->pc = 0x136424u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x136428: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13642c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x13642Cu;
    {
        const bool branch_taken_0x13642c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13642Cu;
        // 0x136430: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13642c) {
            ctx->pc = 0x136464u;
            return;
        }
    }
    ctx->pc = 0x136434u;
}
