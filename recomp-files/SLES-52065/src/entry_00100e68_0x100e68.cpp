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

// Function: entry_00100e68
// Address: 0x100e68 - 0x100ef8
void entry_00100e68_0x100e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100e68_0x100e68");
#endif

    ctx->pc = 0x100e68u;

label_100e68:
    // 0x100e68: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100e6c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x100e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x100e70: 0x64302a  slt         $a2, $v1, $a0
    ctx->pc = 0x100e70u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x100e74: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100e78: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100e7c: 0xa0e20042  sb          $v0, 0x42($a3)
    ctx->pc = 0x100e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x100e80: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100e84: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100e88: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100e8c: 0xa0e20092  sb          $v0, 0x92($a3)
    ctx->pc = 0x100e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 146), (uint8_t)GPR_U32(ctx, 2));
    // 0x100e90: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100e90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100e94: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100e94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100e98: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100e9c: 0xa0e200e2  sb          $v0, 0xE2($a3)
    ctx->pc = 0x100e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 226), (uint8_t)GPR_U32(ctx, 2));
    // 0x100ea0: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100ea4: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100ea8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100eac: 0xa0e20132  sb          $v0, 0x132($a3)
    ctx->pc = 0x100eacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 306), (uint8_t)GPR_U32(ctx, 2));
    // 0x100eb0: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100eb4: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100eb8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100ebc: 0xa0e20182  sb          $v0, 0x182($a3)
    ctx->pc = 0x100ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 386), (uint8_t)GPR_U32(ctx, 2));
    // 0x100ec0: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100ec4: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100ec8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100ecc: 0xa0e201d2  sb          $v0, 0x1D2($a3)
    ctx->pc = 0x100eccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 466), (uint8_t)GPR_U32(ctx, 2));
    // 0x100ed0: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100ed4: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100ed8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100edc: 0xa0e20222  sb          $v0, 0x222($a3)
    ctx->pc = 0x100edcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 546), (uint8_t)GPR_U32(ctx, 2));
    // 0x100ee0: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x100ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100ee4: 0x8ce72c1c  lw          $a3, 0x2C1C($a3)
    ctx->pc = 0x100ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11292)));
    // 0x100ee8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x100ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x100eec: 0xa0e20272  sb          $v0, 0x272($a3)
    ctx->pc = 0x100eecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 626), (uint8_t)GPR_U32(ctx, 2));
    // 0x100ef0: 0x14c0ffdd  bnez        $a2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x100EF0u;
    {
        const bool branch_taken_0x100ef0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x100EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EF0u;
        // 0x100ef4: 0x24a50280  addiu       $a1, $a1, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ef0) {
            ctx->pc = 0x100E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100e68;
        }
    }
    ctx->pc = 0x100EF8u;
}
