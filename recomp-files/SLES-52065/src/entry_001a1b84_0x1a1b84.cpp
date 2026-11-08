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

// Function: entry_001a1b84
// Address: 0x1a1b84 - 0x1a1ba8
void entry_001a1b84_0x1a1b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b84_0x1a1b84");
#endif

    ctx->pc = 0x1a1b84u;

    // 0x1a1b84: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1a1b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1a1b88: 0x8c833ddc  lw          $v1, 0x3DDC($a0)
    ctx->pc = 0x1a1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15836)));
    // 0x1a1b8c: 0x8c823dd8  lw          $v0, 0x3DD8($a0)
    ctx->pc = 0x1a1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15832)));
    // 0x1a1b90: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1B90u;
    {
        const bool branch_taken_0x1a1b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1b90) {
            ctx->pc = 0x1A1BA8u;
            return;
        }
    }
    ctx->pc = 0x1A1B98u;
    // 0x1a1b98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a1b9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1ba0: 0x8c423cd8  lw          $v0, 0x3CD8($v0)
    ctx->pc = 0x1a1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15576)));
    // 0x1a1ba4: 0xa04001f9  sb          $zero, 0x1F9($v0)
    ctx->pc = 0x1a1ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 505), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a1ba8u;
}
