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

// Function: entry_001d1234
// Address: 0x1d1234 - 0x1d1258
void entry_001d1234_0x1d1234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1234_0x1d1234");
#endif

    ctx->pc = 0x1d1234u;

    // 0x1d1234: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d1234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d1238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d123c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d123cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d1240: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1244: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1d1244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1d1248: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1d1248u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d124c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D124Cu;
    {
        const bool branch_taken_0x1d124c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D124Cu;
        // 0x1d1250: 0x27a2006c  addiu       $v0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d124c) {
            ctx->pc = 0x1D1258u;
            return;
        }
    }
    ctx->pc = 0x1D1254u;
    // 0x1d1254: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d1258u;
}
