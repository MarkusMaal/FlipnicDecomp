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

// Function: entry_00201b84
// Address: 0x201b84 - 0x201b98
void entry_00201b84_0x201b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201b84_0x201b84");
#endif

    ctx->pc = 0x201b84u;

    // 0x201b84: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x201b84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201b88: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x201B88u;
    {
        const bool branch_taken_0x201b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201b88) {
            ctx->pc = 0x201B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201B88u;
            // 0x201b8c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201BF0u;
            return;
        }
    }
    ctx->pc = 0x201B90u;
    // 0x201b90: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x201b90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201b94: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x201b94u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    ctx->pc = 0x201b98u;
}
