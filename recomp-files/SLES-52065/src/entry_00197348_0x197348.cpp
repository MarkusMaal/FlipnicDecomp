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

// Function: entry_00197348
// Address: 0x197348 - 0x197360
void entry_00197348_0x197348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197348_0x197348");
#endif

    ctx->pc = 0x197348u;

    // 0x197348: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x197348u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19734c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19734cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x197350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197354: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x197354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x197358: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x197358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19735c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x19735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x197360u;
}
