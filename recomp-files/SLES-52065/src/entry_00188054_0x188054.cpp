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

// Function: entry_00188054
// Address: 0x188054 - 0x188064
void entry_00188054_0x188054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188054_0x188054");
#endif

    ctx->pc = 0x188054u;

    // 0x188054: 0x0  nop
    ctx->pc = 0x188054u;
    // NOP
    // 0x188058: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x188058u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18805c: 0x14e0fff6  bnez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x18805Cu;
    {
        const bool branch_taken_0x18805c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x18805c) {
            ctx->pc = 0x188038u;
            return;
        }
    }
    ctx->pc = 0x188064u;
}
