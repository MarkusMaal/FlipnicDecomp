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

// Function: entry_00119804
// Address: 0x119804 - 0x11983c
void entry_00119804_0x119804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119804_0x119804");
#endif

    ctx->pc = 0x119804u;

    // 0x119804: 0x90a20023  lbu         $v0, 0x23($a1)
    ctx->pc = 0x119804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 35)));
    // 0x119808: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x119808u;
    {
        const bool branch_taken_0x119808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119808) {
            ctx->pc = 0x119864u;
            return;
        }
    }
    ctx->pc = 0x119810u;
    // 0x119810: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x119810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x119814: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x119814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x119818: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x119818u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x11981c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x11981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x119820: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x119820u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x119824: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x119824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x119828: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x119828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11982c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11982Cu;
    {
        const bool branch_taken_0x11982c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11982c) {
            ctx->pc = 0x119884u;
            return;
        }
    }
    ctx->pc = 0x119834u;
    // 0x119834: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x119834u;
    {
        const bool branch_taken_0x119834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119834u;
        // 0x119838: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119834) {
            ctx->pc = 0x119884u;
            return;
        }
    }
    ctx->pc = 0x11983Cu;
}
