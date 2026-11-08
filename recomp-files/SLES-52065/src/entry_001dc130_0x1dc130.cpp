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

// Function: entry_001dc130
// Address: 0x1dc130 - 0x1dc164
void entry_001dc130_0x1dc130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc130_0x1dc130");
#endif

    ctx->pc = 0x1dc130u;

    // 0x1dc130: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x1dc130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x1dc134: 0x5454000b  bnel        $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1DC134u;
    {
        const bool branch_taken_0x1dc134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1dc134) {
            ctx->pc = 0x1DC138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC134u;
            // 0x1dc138: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC164u;
            return;
        }
    }
    ctx->pc = 0x1DC13Cu;
    // 0x1dc13c: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x1dc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1dc140: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC140u;
    {
        const bool branch_taken_0x1dc140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1dc140) {
            ctx->pc = 0x1DC144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC140u;
            // 0x1dc144: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC164u;
            return;
        }
    }
    ctx->pc = 0x1DC148u;
    // 0x1dc148: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dc148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc14c: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC14Cu;
    {
        const bool branch_taken_0x1dc14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1dc14c) {
            ctx->pc = 0x1DC150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC14Cu;
            // 0x1dc150: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC164u;
            return;
        }
    }
    ctx->pc = 0x1DC154u;
    // 0x1dc154: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1dc154u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1dc158: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1dc158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1dc15c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1dc15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1dc160: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1dc160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1dc164u;
}
