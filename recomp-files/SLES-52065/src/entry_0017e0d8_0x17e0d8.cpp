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

// Function: entry_0017e0d8
// Address: 0x17e0d8 - 0x17e0f4
void entry_0017e0d8_0x17e0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e0d8_0x17e0d8");
#endif

    ctx->pc = 0x17e0d8u;

    // 0x17e0d8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x17e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x17e0dc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x17e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x17e0e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17e0e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17e0e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e0ec: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x17e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e0f0: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x17e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    ctx->pc = 0x17e0f4u;
}
