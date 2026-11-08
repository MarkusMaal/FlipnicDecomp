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

// Function: entry_0019b018
// Address: 0x19b018 - 0x19b034
void entry_0019b018_0x19b018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b018_0x19b018");
#endif

    ctx->pc = 0x19b018u;

    // 0x19b018: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x19b01c: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x19b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
    // 0x19b020: 0xae200700  sw          $zero, 0x700($s1)
    ctx->pc = 0x19b020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 0));
    // 0x19b024: 0xae20067c  sw          $zero, 0x67C($s1)
    ctx->pc = 0x19b024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 0));
    // 0x19b028: 0xae200678  sw          $zero, 0x678($s1)
    ctx->pc = 0x19b028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 0));
    // 0x19b02c: 0x8e220664  lw          $v0, 0x664($s1)
    ctx->pc = 0x19b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x19b030: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x19b030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x19b034u;
}
