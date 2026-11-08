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

// Function: entry_00201bb4
// Address: 0x201bb4 - 0x201bd0
void entry_00201bb4_0x201bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201bb4_0x201bb4");
#endif

    ctx->pc = 0x201bb4u;

    // 0x201bb4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x201bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x201bb8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x201bb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201bbc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x201bbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201bc0: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x201BC0u;
    {
        const bool branch_taken_0x201bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201bc0) {
            ctx->pc = 0x201BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201BC0u;
            // 0x201bc4: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201B98u;
            return;
        }
    }
    ctx->pc = 0x201BC8u;
    // 0x201bc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x201BC8u;
    {
        const bool branch_taken_0x201bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BC8u;
        // 0x201bcc: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bc8) {
            ctx->pc = 0x201BF0u;
            return;
        }
    }
    ctx->pc = 0x201BD0u;
}
