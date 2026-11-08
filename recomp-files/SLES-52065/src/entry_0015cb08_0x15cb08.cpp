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

// Function: entry_0015cb08
// Address: 0x15cb08 - 0x15cb40
void entry_0015cb08_0x15cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cb08_0x15cb08");
#endif

    ctx->pc = 0x15cb08u;

label_15cb08:
    // 0x15cb08: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x15cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x15cb0c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x15cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x15cb10: 0x246800b0  addiu       $t0, $v1, 0xB0
    ctx->pc = 0x15cb10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x15cb14: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x15cb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x15cb18: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x15cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x15cb1c: 0xa6182a  slt         $v1, $a1, $a2
    ctx->pc = 0x15cb1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x15cb20: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x15cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x15cb24: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x15cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x15cb28: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x15cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x15cb2c: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x15cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
    // 0x15cb30: 0xad040014  sw          $a0, 0x14($t0)
    ctx->pc = 0x15cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 4));
    // 0x15cb34: 0xad040018  sw          $a0, 0x18($t0)
    ctx->pc = 0x15cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 4));
    // 0x15cb38: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x15CB38u;
    {
        const bool branch_taken_0x15cb38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB38u;
        // 0x15cb3c: 0xad04001c  sw          $a0, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb38) {
            ctx->pc = 0x15CB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cb08;
        }
    }
    ctx->pc = 0x15CB40u;
}
