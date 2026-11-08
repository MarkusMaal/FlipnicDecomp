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

// Function: entry_00198f38
// Address: 0x198f38 - 0x198f58
void entry_00198f38_0x198f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198f38_0x198f38");
#endif

    ctx->pc = 0x198f38u;

    // 0x198f38: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x198f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x198f3c: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x198F3Cu;
    {
        const bool branch_taken_0x198f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f3c) {
            ctx->pc = 0x19901Cu;
            return;
        }
    }
    ctx->pc = 0x198F44u;
    // 0x198f44: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x198f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x198f48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198F48u;
    {
        const bool branch_taken_0x198f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x198f48) {
            ctx->pc = 0x198F58u;
            return;
        }
    }
    ctx->pc = 0x198F50u;
    // 0x198f50: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x198F50u;
    {
        const bool branch_taken_0x198f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F50u;
        // 0x198f54: 0xae910930  sw          $s1, 0x930($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2352), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f50) {
            ctx->pc = 0x19901Cu;
            return;
        }
    }
    ctx->pc = 0x198F58u;
}
