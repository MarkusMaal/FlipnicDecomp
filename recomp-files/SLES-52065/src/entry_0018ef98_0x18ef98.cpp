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

// Function: entry_0018ef98
// Address: 0x18ef98 - 0x18eff0
void entry_0018ef98_0x18ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef98_0x18ef98");
#endif

    ctx->pc = 0x18ef98u;

    // 0x18ef98: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x18ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x18ef9c: 0x8e8402e0  lw          $a0, 0x2E0($s4)
    ctx->pc = 0x18ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
    // 0x18efa0: 0x8ca52c1c  lw          $a1, 0x2C1C($a1)
    ctx->pc = 0x18efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11292)));
    // 0x18efa4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18efa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18efac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18efacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18efb0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18efb4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x18efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x18efb8: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x18efb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x18efbc: 0x480002c  bltz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x18EFBCu;
    {
        const bool branch_taken_0x18efbc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFBCu;
        // 0x18efc0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efbc) {
            ctx->pc = 0x18F070u;
            return;
        }
    }
    ctx->pc = 0x18EFC4u;
    // 0x18efc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18efc8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18efc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18efcc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18efccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18efd0: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x18efd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x18efd4: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x18efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x18efd8: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x18efd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18efdc: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x18efdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18efe0: 0x71b021  addu        $s6, $v1, $s1
    ctx->pc = 0x18efe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18efe4: 0x236082a  slt         $at, $s1, $s6
    ctx->pc = 0x18efe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x18efe8: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x18EFE8u;
    {
        const bool branch_taken_0x18efe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EFE8u;
        // 0x18efec: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18efe8) {
            ctx->pc = 0x18F070u;
            return;
        }
    }
    ctx->pc = 0x18EFF0u;
}
