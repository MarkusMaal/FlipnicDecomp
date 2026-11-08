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

// Function: entry_00201ff4
// Address: 0x201ff4 - 0x202000
void entry_00201ff4_0x201ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201ff4_0x201ff4");
#endif

    ctx->pc = 0x201ff4u;

    // 0x201ff4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x201ff4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201ff8: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x201FF8u;
    {
        const bool branch_taken_0x201ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FF8u;
        // 0x201ffc: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ff8) {
            ctx->pc = 0x201FD8u;
            return;
        }
    }
    ctx->pc = 0x202000u;
}
