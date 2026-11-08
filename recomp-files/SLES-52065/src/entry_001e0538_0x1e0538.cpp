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

// Function: entry_001e0538
// Address: 0x1e0538 - 0x1e0590
void entry_001e0538_0x1e0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0538_0x1e0538");
#endif

    ctx->pc = 0x1e0538u;

    // 0x1e0538: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x1e0538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1e053c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e053cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e0540: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e0544: 0x2466ab14  addiu       $a2, $v1, -0x54EC
    ctx->pc = 0x1e0544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945556));
    // 0x1e0548: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e0548u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38AB14u));
    // 0x1e054c: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x1e054cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0550: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0554: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e0554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1e0558: 0x90850068  lbu         $a1, 0x68($a0)
    ctx->pc = 0x1e0558u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1e055c: 0x5065000c  beql        $v1, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1E055Cu;
    {
        const bool branch_taken_0x1e055c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e055c) {
            ctx->pc = 0x1E0560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E055Cu;
            // 0x1e0560: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0590u;
            return;
        }
    }
    ctx->pc = 0x1E0564u;
    // 0x1e0564: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1e0564u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1e0568: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e0568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e056c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e056cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e0570: 0x2483ab10  addiu       $v1, $a0, -0x54F0
    ctx->pc = 0x1e0570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945552));
    // 0x1e0574: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38AB10u));
    // 0x1e0578: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e0578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e057c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1e057cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1e0580: 0xa025a310  sb          $a1, -0x5CF0($at)
    ctx->pc = 0x1e0580u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943504), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e0584: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0588: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0588u;
    {
        const bool branch_taken_0x1e0588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0588u;
        // 0x1e058c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0588) {
            ctx->pc = 0x1E0594u;
            return;
        }
    }
    ctx->pc = 0x1E0590u;
}
