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

// Function: entry_001ac960
// Address: 0x1ac960 - 0x1ac994
void entry_001ac960_0x1ac960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac960_0x1ac960");
#endif

    ctx->pc = 0x1ac960u;

    // 0x1ac960: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AC960u;
    {
        const bool branch_taken_0x1ac960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac960) {
            ctx->pc = 0x1AC994u;
            return;
        }
    }
    ctx->pc = 0x1AC968u;
    // 0x1ac968: 0x8e230800  lw          $v1, 0x800($s1)
    ctx->pc = 0x1ac968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x1ac96c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ac96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac970: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ac970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ac974: 0x8e2406dc  lw          $a0, 0x6DC($s1)
    ctx->pc = 0x1ac974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1756)));
    // 0x1ac978: 0x8e25069c  lw          $a1, 0x69C($s1)
    ctx->pc = 0x1ac978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x1ac97c: 0x8e260670  lw          $a2, 0x670($s1)
    ctx->pc = 0x1ac97cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1ac980: 0x8e230800  lw          $v1, 0x800($s1)
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x1ac984: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1ac984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x1ac988: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1ac988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x1ac98c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC98Cu;
    {
        const bool branch_taken_0x1ac98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC98Cu;
        // 0x1ac990: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac98c) {
            ctx->pc = 0x1AC99Cu;
            return;
        }
    }
    ctx->pc = 0x1AC994u;
}
