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

// Function: entry_00152090
// Address: 0x152090 - 0x15209c
void entry_00152090_0x152090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152090_0x152090");
#endif

    ctx->pc = 0x152090u;

    // 0x152090: 0x938285f0  lbu         $v0, -0x7A10($gp)
    ctx->pc = 0x152090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936048)));
    // 0x152094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x152098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x152098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x15209cu;
}
