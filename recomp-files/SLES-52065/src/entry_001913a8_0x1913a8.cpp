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

// Function: entry_001913a8
// Address: 0x1913a8 - 0x1913c0
void entry_001913a8_0x1913a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001913a8_0x1913a8");
#endif

    ctx->pc = 0x1913a8u;

    // 0x1913a8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1913a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1913ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1913acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1913b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1913b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1913b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1913b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1913b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1913b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1913bc: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x1913bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->pc = 0x1913c0u;
}
