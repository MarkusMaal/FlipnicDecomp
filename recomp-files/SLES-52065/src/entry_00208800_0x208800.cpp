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

// Function: entry_00208800
// Address: 0x208800 - 0x20880c
void entry_00208800_0x208800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208800_0x208800");
#endif

    ctx->pc = 0x208800u;

    // 0x208800: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x208800u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208804: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x208804u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208808: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x208808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    ctx->pc = 0x20880cu;
}
