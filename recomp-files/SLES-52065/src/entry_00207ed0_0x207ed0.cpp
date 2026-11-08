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

// Function: entry_00207ed0
// Address: 0x207ed0 - 0x207ef4
void entry_00207ed0_0x207ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207ed0_0x207ed0");
#endif

    ctx->pc = 0x207ed0u;

label_207ed0:
    // 0x207ed0: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x207ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x207ed4: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x207ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x207ed8: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x207ed8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x207edc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x207edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x207ee0: 0x0  nop
    ctx->pc = 0x207ee0u;
    // NOP
    // 0x207ee4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x207EE4u;
    {
        const bool branch_taken_0x207ee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x207ee4) {
            ctx->pc = 0x207ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207ed0;
        }
    }
    ctx->pc = 0x207EECu;
    // 0x207eec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x207EECu;
    {
        const bool branch_taken_0x207eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207EECu;
        // 0x207ef0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207eec) {
            ctx->pc = 0x207F18u;
            return;
        }
    }
    ctx->pc = 0x207EF4u;
}
