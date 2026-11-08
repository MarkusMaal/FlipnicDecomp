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

// Function: entry_00160a84
// Address: 0x160a84 - 0x160af4
void entry_00160a84_0x160a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a84_0x160a84");
#endif

    ctx->pc = 0x160a84u;

label_160a84:
    // 0x160a84: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160a88: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x160a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x160a8c: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x160a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x160a90: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160a94: 0xa0800043  sb          $zero, 0x43($a0)
    ctx->pc = 0x160a94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x160a98: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160a9c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160aa0: 0xa0800093  sb          $zero, 0x93($a0)
    ctx->pc = 0x160aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 147), (uint8_t)GPR_U32(ctx, 0));
    // 0x160aa4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160aa8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160aac: 0xa08000e3  sb          $zero, 0xE3($a0)
    ctx->pc = 0x160aacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 227), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ab0: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160ab4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160ab8: 0xa0800133  sb          $zero, 0x133($a0)
    ctx->pc = 0x160ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 307), (uint8_t)GPR_U32(ctx, 0));
    // 0x160abc: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160ac0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160ac4: 0xa0800183  sb          $zero, 0x183($a0)
    ctx->pc = 0x160ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 387), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ac8: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160acc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160ad0: 0xa08001d3  sb          $zero, 0x1D3($a0)
    ctx->pc = 0x160ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 467), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ad4: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160ad8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160adc: 0xa0800223  sb          $zero, 0x223($a0)
    ctx->pc = 0x160adcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 547), (uint8_t)GPR_U32(ctx, 0));
    // 0x160ae0: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x160ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x160ae4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x160ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x160ae8: 0xa0800273  sb          $zero, 0x273($a0)
    ctx->pc = 0x160ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 627), (uint8_t)GPR_U32(ctx, 0));
    // 0x160aec: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x160AECu;
    {
        const bool branch_taken_0x160aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AECu;
        // 0x160af0: 0x24c60280  addiu       $a2, $a2, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160aec) {
            ctx->pc = 0x160A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160a84;
        }
    }
    ctx->pc = 0x160AF4u;
}
