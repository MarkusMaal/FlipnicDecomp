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

// Function: entry_001e41b0
// Address: 0x1e41b0 - 0x1e41d4
void entry_001e41b0_0x1e41b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e41b0_0x1e41b0");
#endif

    ctx->pc = 0x1e41b0u;

    // 0x1e41b0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1e41b4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1e41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1e41b8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1e41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1e41bc: 0x2464002f  addiu       $a0, $v1, 0x2F
    ctx->pc = 0x1e41bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 47));
    // 0x1e41c0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1e41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1e41c4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1e41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1e41c8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e41cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e41d0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x1e41d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1e41d4u;
}
