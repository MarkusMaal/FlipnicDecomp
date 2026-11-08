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

// Function: entry_00175640
// Address: 0x175640 - 0x175664
void entry_00175640_0x175640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175640_0x175640");
#endif

    ctx->pc = 0x175640u;

    // 0x175640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175644: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17564c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175650: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175654: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17565c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175660: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    ctx->pc = 0x175664u;
}
