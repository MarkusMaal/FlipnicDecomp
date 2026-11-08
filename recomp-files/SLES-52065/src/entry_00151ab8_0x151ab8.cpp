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

// Function: entry_00151ab8
// Address: 0x151ab8 - 0x151ac0
void entry_00151ab8_0x151ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151ab8_0x151ab8");
#endif

    ctx->pc = 0x151ab8u;

    // 0x151ab8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x151AB8u;
    {
        const bool branch_taken_0x151ab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ab8) {
            ctx->pc = 0x151ADCu;
            return;
        }
    }
    ctx->pc = 0x151AC0u;
}
