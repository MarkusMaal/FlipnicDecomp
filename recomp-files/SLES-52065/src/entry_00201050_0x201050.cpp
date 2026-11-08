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

// Function: entry_00201050
// Address: 0x201050 - 0x20106c
void entry_00201050_0x201050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201050_0x201050");
#endif

    ctx->pc = 0x201050u;

    // 0x201050: 0x2372021  addu        $a0, $s1, $s7
    ctx->pc = 0x201050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x201054: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x201054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x201058: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x201058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20105c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20105cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201060: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x201060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x201064: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x201064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x201068: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x201068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20106cu;
}
