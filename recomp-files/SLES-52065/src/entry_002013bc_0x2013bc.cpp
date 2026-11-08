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

// Function: entry_002013bc
// Address: 0x2013bc - 0x2013c0
void entry_002013bc_0x2013bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002013bc_0x2013bc");
#endif

    ctx->pc = 0x2013bcu;

    // 0x2013bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2013bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    ctx->pc = 0x2013c0u;
}
