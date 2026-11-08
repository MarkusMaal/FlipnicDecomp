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

// Function: entry_001fd324
// Address: 0x1fd324 - 0x1fd33c
void entry_001fd324_0x1fd324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd324_0x1fd324");
#endif

    ctx->pc = 0x1fd324u;

    // 0x1fd324: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1fd324u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fd328: 0x0  nop
    ctx->pc = 0x1fd328u;
    // NOP
    // 0x1fd32c: 0x0  nop
    ctx->pc = 0x1fd32cu;
    // NOP
    // 0x1fd330: 0x0  nop
    ctx->pc = 0x1fd330u;
    // NOP
    // 0x1fd334: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FD334u;
    {
        const bool branch_taken_0x1fd334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fd334) {
            ctx->pc = 0x1FD320u;
            return;
        }
    }
    ctx->pc = 0x1FD33Cu;
}
