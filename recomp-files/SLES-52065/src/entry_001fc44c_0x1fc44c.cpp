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

// Function: entry_001fc44c
// Address: 0x1fc44c - 0x1fc478
void entry_001fc44c_0x1fc44c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc44c_0x1fc44c");
#endif

    ctx->pc = 0x1fc44cu;

    // 0x1fc44c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1fc44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1fc450: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1fc450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1fc454: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x1fc454u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1fc458: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x1fc458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x1fc45c: 0x2e4b824  and         $s7, $s7, $a0
    ctx->pc = 0x1fc45cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 4));
    // 0x1fc460: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fc460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fc464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fc464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc468: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fc468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fc46c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x1fc46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x1fc470: 0x2694fbcd  addiu       $s4, $s4, -0x433
    ctx->pc = 0x1fc470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966221));
    // 0x1fc474: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x1fc474u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    ctx->pc = 0x1fc478u;
}
