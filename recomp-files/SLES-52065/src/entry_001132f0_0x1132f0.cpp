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

// Function: entry_001132f0
// Address: 0x1132f0 - 0x11331c
void entry_001132f0_0x1132f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001132f0_0x1132f0");
#endif

    ctx->pc = 0x1132f0u;

    // 0x1132f0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1132f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1132f4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1132f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1132f8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1132F8u;
    {
        const bool branch_taken_0x1132f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132f8) {
            ctx->pc = 0x113294u;
            return;
        }
    }
    ctx->pc = 0x113300u;
    // 0x113300: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x113300u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x113304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x113304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113308: 0xa2230041  sb          $v1, 0x41($s1)
    ctx->pc = 0x113308u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x11330c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x11330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x113310: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x113310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x113314: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x113314u;
    {
        const bool branch_taken_0x113314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113314u;
        // 0x113318: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113314) {
            ctx->pc = 0x113600u;
            return;
        }
    }
    ctx->pc = 0x11331Cu;
}
