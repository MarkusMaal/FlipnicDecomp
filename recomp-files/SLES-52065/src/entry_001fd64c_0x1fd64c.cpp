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

// Function: entry_001fd64c
// Address: 0x1fd64c - 0x1fd68c
void entry_001fd64c_0x1fd64c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd64c_0x1fd64c");
#endif

    ctx->pc = 0x1fd64cu;

    // 0x1fd64c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd650: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fd650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd654: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x1fd654u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fd658: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1fd658u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fd65c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fd65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd660: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x1fd660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x1fd664: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fd664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fd668: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1fd668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1fd66c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fd66cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fd670: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1fd670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1fd674: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1fd674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1fd678: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fd678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1fd67c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1fd67cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1fd680: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1fd680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1fd684: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1fd684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1fd688: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1fd688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    ctx->pc = 0x1fd68cu;
}
