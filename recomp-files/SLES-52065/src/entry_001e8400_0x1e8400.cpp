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

// Function: entry_001e8400
// Address: 0x1e8400 - 0x1e8434
void entry_001e8400_0x1e8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8400_0x1e8400");
#endif

    ctx->pc = 0x1e8400u;

label_1e8400:
    // 0x1e8400: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1e8400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e8404: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e8404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e8408: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1e8408u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e840c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1e840cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e8410: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1e8410u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e8414: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1e8414u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e8418: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x1e8418u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e841c: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x1e841cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1e8420: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x1e8420u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e8424: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E8424u;
    {
        const bool branch_taken_0x1e8424 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8424u;
        // 0x1e8428: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8424) {
            ctx->pc = 0x1E8400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8400;
        }
    }
    ctx->pc = 0x1E842Cu;
    // 0x1e842c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1E842Cu;
    {
        const bool branch_taken_0x1e842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E842Cu;
        // 0x1e8430: 0x3c0e821  addu        $sp, $fp, $zero (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e842c) {
            ctx->pc = 0x1E866Cu;
            return;
        }
    }
    ctx->pc = 0x1E8434u;
}
