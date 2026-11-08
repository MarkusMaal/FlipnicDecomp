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

// Function: entry_0018fc3c
// Address: 0x18fc3c - 0x18fc74
void entry_0018fc3c_0x18fc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fc3c_0x18fc3c");
#endif

    ctx->pc = 0x18fc3cu;

label_18fc3c:
    // 0x18fc3c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x18fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18fc40: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x18fc40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18fc44: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x18fc44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18fc48: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x18fc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x18fc4c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x18fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18fc50: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x18fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18fc54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18fc58: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x18fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x18fc5c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18fc60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18fc64: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x18fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x18fc68: 0x28430021  slti        $v1, $v0, 0x21
    ctx->pc = 0x18fc68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x18fc6c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x18FC6Cu;
    {
        const bool branch_taken_0x18fc6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC6Cu;
        // 0x18fc70: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc6c) {
            ctx->pc = 0x18FC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fc3c;
        }
    }
    ctx->pc = 0x18FC74u;
}
