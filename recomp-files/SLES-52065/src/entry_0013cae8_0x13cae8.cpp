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

// Function: entry_0013cae8
// Address: 0x13cae8 - 0x13cb0c
void entry_0013cae8_0x13cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cae8_0x13cae8");
#endif

    ctx->pc = 0x13cae8u;

    // 0x13cae8: 0x8f858330  lw          $a1, -0x7CD0($gp)
    ctx->pc = 0x13cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935344)));
    // 0x13caec: 0x27848328  addiu       $a0, $gp, -0x7CD8
    ctx->pc = 0x13caecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935336));
    // 0x13caf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13caf4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13caf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13caf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13cafc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x13cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13cb00: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13cb04: 0x4610001  bgez        $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x13CB04u;
    {
        const bool branch_taken_0x13cb04 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13cb04) {
            ctx->pc = 0x13CB0Cu;
            return;
        }
    }
    ctx->pc = 0x13CB0Cu;
}
