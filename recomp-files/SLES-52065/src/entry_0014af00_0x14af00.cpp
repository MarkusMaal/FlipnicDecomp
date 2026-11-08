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

// Function: entry_0014af00
// Address: 0x14af00 - 0x14af40
void entry_0014af00_0x14af00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014af00_0x14af00");
#endif

    ctx->pc = 0x14af00u;

    // 0x14af00: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x14af00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x14af04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14af04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14af08: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x14af08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x14af0c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x14af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x14af10: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14af10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x14af14: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x14af14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x14af18: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x14af18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14af1c: 0x14a6001c  bne         $a1, $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x14AF1Cu;
    {
        const bool branch_taken_0x14af1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x14af1c) {
            ctx->pc = 0x14AF90u;
            return;
        }
    }
    ctx->pc = 0x14AF24u;
    // 0x14af24: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x14af24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x14af28: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14af28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14af2c: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x14af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x14af30: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AF30u;
    {
        const bool branch_taken_0x14af30 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x14AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AF30u;
        // 0x14af34: 0x56883  sra         $t5, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14af30) {
            ctx->pc = 0x14AF40u;
            return;
        }
    }
    ctx->pc = 0x14AF38u;
    // 0x14af38: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x14af38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x14af3c: 0x56883  sra         $t5, $a1, 2
    ctx->pc = 0x14af3cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 5), 2));
    ctx->pc = 0x14af40u;
}
