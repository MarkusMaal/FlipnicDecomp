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

// Function: entry_00110aac
// Address: 0x110aac - 0x110acc
void entry_00110aac_0x110aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110aac_0x110aac");
#endif

    ctx->pc = 0x110aacu;

    // 0x110aac: 0x0  nop
    ctx->pc = 0x110aacu;
    // NOP
    // 0x110ab0: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x110ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x110ab4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x110ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x110ab8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x110ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x110abc: 0xace50224  sw          $a1, 0x224($a3)
    ctx->pc = 0x110abcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
    // 0x110ac0: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x110ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x110ac4: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x110ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x110ac8: 0xace50224  sw          $a1, 0x224($a3)
    ctx->pc = 0x110ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
    ctx->pc = 0x110accu;
}
