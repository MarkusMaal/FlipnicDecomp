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

// Function: entry_001bbdcc
// Address: 0x1bbdcc - 0x1bbdfc
void entry_001bbdcc_0x1bbdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbdcc_0x1bbdcc");
#endif

    ctx->pc = 0x1bbdccu;

    // 0x1bbdcc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1bbdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bbdd0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1bbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bbdd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bbdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbdd8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1bbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bbddc: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x1bbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x1bbde0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1bbde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1bbde4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1bbde4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bbde8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBDE8u;
    {
        const bool branch_taken_0x1bbde8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDE8u;
        // 0x1bbdec: 0x27a20098  addiu       $v0, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbde8) {
            ctx->pc = 0x1BBDFCu;
            return;
        }
    }
    ctx->pc = 0x1BBDF0u;
    // 0x1bbdf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BBDF0u;
    {
        const bool branch_taken_0x1bbdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDF0u;
        // 0x1bbdf4: 0x27a2009c  addiu       $v0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdf0) {
            ctx->pc = 0x1BBDFCu;
            return;
        }
    }
    ctx->pc = 0x1BBDF8u;
    // 0x1bbdf8: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x1bbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->pc = 0x1bbdfcu;
}
