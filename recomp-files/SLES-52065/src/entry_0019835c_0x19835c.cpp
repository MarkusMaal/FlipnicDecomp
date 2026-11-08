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

// Function: entry_0019835c
// Address: 0x19835c - 0x19837c
void entry_0019835c_0x19835c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019835c_0x19835c");
#endif

    ctx->pc = 0x19835cu;

    // 0x19835c: 0x0  nop
    ctx->pc = 0x19835cu;
    // NOP
    // 0x198360: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x198360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x198364: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x198364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19836c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198370: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x198370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x198374: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x198374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x198378: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x198378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x19837cu;
}
