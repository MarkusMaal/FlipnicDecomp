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

// Function: entry_001e2a74
// Address: 0x1e2a74 - 0x1e2ad0
void entry_001e2a74_0x1e2a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2a74_0x1e2a74");
#endif

    ctx->pc = 0x1e2a74u;

label_1e2a74:
    // 0x1e2a74: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1e2a74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e2a78: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e2a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e2a7c: 0x24e8000e  addiu       $t0, $a3, 0xE
    ctx->pc = 0x1e2a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
    // 0x1e2a80: 0x24c9000e  addiu       $t1, $a2, 0xE
    ctx->pc = 0x1e2a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x1e2a84: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1e2a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1e2a88: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1e2a88u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e2a8c: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x1e2a8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1e2a90: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1e2a90u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e2a94: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x1e2a94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e2a98: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x1e2a98u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e2a9c: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x1e2a9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x1e2aa0: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x1e2aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e2aa4: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x1e2aa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1e2aa8: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x1e2aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e2aac: 0x94e3000a  lhu         $v1, 0xA($a3)
    ctx->pc = 0x1e2aacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x1e2ab0: 0xa4c3000a  sh          $v1, 0xA($a2)
    ctx->pc = 0x1e2ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e2ab4: 0x94e3000c  lhu         $v1, 0xC($a3)
    ctx->pc = 0x1e2ab4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1e2ab8: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x1e2ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e2abc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1e2abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1e2ac0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x1e2ac0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e2ac4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1e2ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1e2ac8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1E2AC8u;
    {
        const bool branch_taken_0x1e2ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AC8u;
        // 0x1e2acc: 0xa5230000  sh          $v1, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ac8) {
            ctx->pc = 0x1E2A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2a74;
        }
    }
    ctx->pc = 0x1E2AD0u;
}
