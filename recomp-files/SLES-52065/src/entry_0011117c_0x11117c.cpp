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

// Function: entry_0011117c
// Address: 0x11117c - 0x11119c
void entry_0011117c_0x11117c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011117c_0x11117c");
#endif

    ctx->pc = 0x11117cu;

    // 0x11117c: 0x0  nop
    ctx->pc = 0x11117cu;
    // NOP
    // 0x111180: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x111180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x111184: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x111184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x111188: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x111188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11118c: 0xace50224  sw          $a1, 0x224($a3)
    ctx->pc = 0x11118cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
    // 0x111190: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x111190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x111194: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x111194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x111198: 0xace50224  sw          $a1, 0x224($a3)
    ctx->pc = 0x111198u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
    ctx->pc = 0x11119cu;
}
