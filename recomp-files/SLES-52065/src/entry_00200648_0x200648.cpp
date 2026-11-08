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

// Function: entry_00200648
// Address: 0x200648 - 0x200660
void entry_00200648_0x200648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200648_0x200648");
#endif

    ctx->pc = 0x200648u;

    // 0x200648: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x200648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20064c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200650: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x200650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x200654: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x200654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x200658: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x200658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x20065c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x20065cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->pc = 0x200660u;
}
