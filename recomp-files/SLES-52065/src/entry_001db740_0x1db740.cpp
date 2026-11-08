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

// Function: entry_001db740
// Address: 0x1db740 - 0x1db774
void entry_001db740_0x1db740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001db740_0x1db740");
#endif

    ctx->pc = 0x1db740u;

    // 0x1db740: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x1db740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x1db744: 0x5454000b  bnel        $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1DB744u;
    {
        const bool branch_taken_0x1db744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1db744) {
            ctx->pc = 0x1DB748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB744u;
            // 0x1db748: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB774u;
            return;
        }
    }
    ctx->pc = 0x1DB74Cu;
    // 0x1db74c: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x1db74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1db750: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB750u;
    {
        const bool branch_taken_0x1db750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1db750) {
            ctx->pc = 0x1DB754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB750u;
            // 0x1db754: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB774u;
            return;
        }
    }
    ctx->pc = 0x1DB758u;
    // 0x1db758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1db758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db75c: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB75Cu;
    {
        const bool branch_taken_0x1db75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1db75c) {
            ctx->pc = 0x1DB760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB75Cu;
            // 0x1db760: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB774u;
            return;
        }
    }
    ctx->pc = 0x1DB764u;
    // 0x1db764: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1db764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1db768: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1db768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1db76c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1db76cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1db770: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1db770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1db774u;
}
