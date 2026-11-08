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

// Function: entry_001dce48
// Address: 0x1dce48 - 0x1dce64
void entry_001dce48_0x1dce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dce48_0x1dce48");
#endif

    ctx->pc = 0x1dce48u;

    // 0x1dce48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dce48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dce4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dce4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dce50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dce50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dce54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dce54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dce58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dce58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dce5c: 0x8077882  j           func_1DE208
    ctx->pc = 0x1DCE5Cu;
    ctx->pc = 0x1DCE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE5Cu;
    // 0x1dce60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE208u;
    FUN_001de208_0x1de208(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCE64u;
}
