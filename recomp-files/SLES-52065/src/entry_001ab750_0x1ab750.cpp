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

// Function: entry_001ab750
// Address: 0x1ab750 - 0x1ab784
void entry_001ab750_0x1ab750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab750_0x1ab750");
#endif

    ctx->pc = 0x1ab750u;

    // 0x1ab750: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB750u;
    {
        const bool branch_taken_0x1ab750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab750) {
            ctx->pc = 0x1AB784u;
            return;
        }
    }
    ctx->pc = 0x1AB758u;
    // 0x1ab758: 0x8e830800  lw          $v1, 0x800($s4)
    ctx->pc = 0x1ab758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
    // 0x1ab75c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ab75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab760: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ab760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ab764: 0x8e8406dc  lw          $a0, 0x6DC($s4)
    ctx->pc = 0x1ab764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1756)));
    // 0x1ab768: 0x8e85069c  lw          $a1, 0x69C($s4)
    ctx->pc = 0x1ab768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1692)));
    // 0x1ab76c: 0x8e860670  lw          $a2, 0x670($s4)
    ctx->pc = 0x1ab76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x1ab770: 0x8e830800  lw          $v1, 0x800($s4)
    ctx->pc = 0x1ab770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2048)));
    // 0x1ab774: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1ab774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x1ab778: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1ab778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
    // 0x1ab77c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB77Cu;
    {
        const bool branch_taken_0x1ab77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB77Cu;
        // 0x1ab780: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab77c) {
            ctx->pc = 0x1AB78Cu;
            return;
        }
    }
    ctx->pc = 0x1AB784u;
}
