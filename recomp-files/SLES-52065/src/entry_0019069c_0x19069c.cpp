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

// Function: entry_0019069c
// Address: 0x19069c - 0x1906c8
void entry_0019069c_0x19069c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019069c_0x19069c");
#endif

    ctx->pc = 0x19069cu;

label_19069c:
    // 0x19069c: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x19069cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1906a0: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x1906a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1906a4: 0x2024821  addu        $t1, $s0, $v0
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1906a8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1906ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1906acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1906b0: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1906b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1906b4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1906b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1906b8: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x1906b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x1906bc: 0xa1201684  sb          $zero, 0x1684($t1)
    ctx->pc = 0x1906bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5764), (uint8_t)GPR_U32(ctx, 0));
    // 0x1906c0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1906C0u;
    {
        const bool branch_taken_0x1906c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1906C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906C0u;
        // 0x1906c4: 0xa1201694  sb          $zero, 0x1694($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 5780), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906c0) {
            ctx->pc = 0x19069Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19069c;
        }
    }
    ctx->pc = 0x1906C8u;
}
