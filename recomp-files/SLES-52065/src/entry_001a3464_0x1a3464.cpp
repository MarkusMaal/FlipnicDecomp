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

// Function: entry_001a3464
// Address: 0x1a3464 - 0x1a349c
void entry_001a3464_0x1a3464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3464_0x1a3464");
#endif

    ctx->pc = 0x1a3464u;

    // 0x1a3464: 0xae200670  sw          $zero, 0x670($s1)
    ctx->pc = 0x1a3464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
    // 0x1a3468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a346c: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1a346cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
    // 0x1a3470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3474: 0xae200678  sw          $zero, 0x678($s1)
    ctx->pc = 0x1a3474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1656), GPR_U32(ctx, 0));
    // 0x1a3478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a347c: 0xae20067c  sw          $zero, 0x67C($s1)
    ctx->pc = 0x1a347cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1660), GPR_U32(ctx, 0));
    // 0x1a3480: 0xae200680  sw          $zero, 0x680($s1)
    ctx->pc = 0x1a3480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1664), GPR_U32(ctx, 0));
    // 0x1a3484: 0xae20068c  sw          $zero, 0x68C($s1)
    ctx->pc = 0x1a3484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 0));
    // 0x1a3488: 0x8e230664  lw          $v1, 0x664($s1)
    ctx->pc = 0x1a3488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1636)));
    // 0x1a348c: 0xae200790  sw          $zero, 0x790($s1)
    ctx->pc = 0x1a348cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 0));
    // 0x1a3490: 0x24720040  addiu       $s2, $v1, 0x40
    ctx->pc = 0x1a3490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1a3494: 0xae220794  sw          $v0, 0x794($s1)
    ctx->pc = 0x1a3494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1940), GPR_U32(ctx, 2));
    // 0x1a3498: 0xae2007bc  sw          $zero, 0x7BC($s1)
    ctx->pc = 0x1a3498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1980), GPR_U32(ctx, 0));
    ctx->pc = 0x1a349cu;
}
