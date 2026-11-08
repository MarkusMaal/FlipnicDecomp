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

// Function: entry_0012fc34
// Address: 0x12fc34 - 0x12fc64
void entry_0012fc34_0x12fc34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fc34_0x12fc34");
#endif

    ctx->pc = 0x12fc34u;

label_12fc34:
    // 0x12fc34: 0x0  nop
    ctx->pc = 0x12fc34u;
    // NOP
    // 0x12fc38: 0xfd1821  addu        $v1, $a3, $sp
    ctx->pc = 0x12fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x12fc3c: 0x90650470  lbu         $a1, 0x470($v1)
    ctx->pc = 0x12fc3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1136)));
    // 0x12fc40: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x12fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x12fc44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x12fc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x12fc48: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x12fc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x12fc4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12fc4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12fc50: 0xe2182b  sltu        $v1, $a3, $v0
    ctx->pc = 0x12fc50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12fc54: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12FC54u;
    {
        const bool branch_taken_0x12fc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC54u;
        // 0x12fc58: 0xa4850170  sh          $a1, 0x170($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 368), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc54) {
            ctx->pc = 0x12FC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fc34;
        }
    }
    ctx->pc = 0x12FC5Cu;
    // 0x12fc5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12FC5Cu;
    {
        const bool branch_taken_0x12fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc5c) {
            ctx->pc = 0x12FC7Cu;
            return;
        }
    }
    ctx->pc = 0x12FC64u;
}
