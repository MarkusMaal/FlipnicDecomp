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

// Function: entry_001eca08
// Address: 0x1eca08 - 0x1eca14
void entry_001eca08_0x1eca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eca08_0x1eca08");
#endif

    ctx->pc = 0x1eca08u;

    // 0x1eca08: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1eca08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1eca0c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1ECA0Cu;
    {
        const bool branch_taken_0x1eca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECA0Cu;
        // 0x1eca10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca0c) {
            ctx->pc = 0x1ECA88u;
            return;
        }
    }
    ctx->pc = 0x1ECA14u;
}
