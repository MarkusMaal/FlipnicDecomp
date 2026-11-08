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

// Function: entry_00201cd0
// Address: 0x201cd0 - 0x201cf4
void entry_00201cd0_0x201cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201cd0_0x201cd0");
#endif

    ctx->pc = 0x201cd0u;

label_201cd0:
    // 0x201cd0: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x201cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x201cd4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x201cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x201cd8: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x201cd8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201cdc: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x201cdcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x201ce0: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x201ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x201ce4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x201ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x201ce8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x201ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x201cec: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x201CECu;
    {
        const bool branch_taken_0x201cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CECu;
        // 0x201cf0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201cec) {
            ctx->pc = 0x201CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201cd0;
        }
    }
    ctx->pc = 0x201CF4u;
}
